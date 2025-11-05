# Guia Completo: Acesso SSH e Simulação de Rede para Gêmeo Digital

## 📋 Dados de Acesso da VM (Baseado na Imagem)

- **Acesso SSH**: `ssh username@andromeda.lasdpc.icmc.usp.br -p <porta>`
- **Exemplo**: `ssh qinfraqrad01@andromeda.lasdpc.icmc.usp.br -p 23181`
- **Acesso Web**: `http://cloudqrad.icmc.usp.br:porta-web`
- **Exemplo Web**: `http://andromeda.lasdpc.icmc.usp.br:5181`
- **Mapeamento de Portas**: Local (VM) 5181 → Remota (WWW) 5181
- **Contato PAE**: jgabrielcosta@usp.br

---

## 🔐 PARTE 1: Conectar na Máquina Virtual via SSH

### Passo 1: Verificar Instalação do SSH
Primeiro, verifique se seu computador tem SSH instalado:

**No Linux/Mac:**
```bash
ssh -V
```

**No Windows:**
- Use PowerShell ou instale WSL (Windows Subsystem for Linux)
- Ou use PuTTY como cliente SSH

### Passo 2: Conectar na VM
Com base nos dados da imagem, execute:

```bash
ssh qinfraqrad01@andromeda.lasdpc.icmc.usp.br -p 23181
```

**O que vai acontecer:**
1. **Primeira conexão**: Sistema vai perguntar se você confia no servidor
   - Digite `yes` e pressione Enter
2. **Senha**: Digite a senha fornecida pelo PAE
   - Não vai aparecer nada na tela enquanto digita (é normal)
3. **Sucesso**: Você verá o prompt da VM remota

### Passo 3: Comandos Básicos na VM
Após conectar, teste alguns comandos:

```bash
# Verificar sistema operacional
cat /etc/os-release

# Verificar recursos disponíveis
free -h
df -h

# Verificar se Python está instalado
python3 --version

# Verificar se Docker está disponível
docker --version
```

---

## 🌐 PARTE 2: Configurar Simulação de Rede com Mininet

### Passo 1: Instalar Dependências na VM

```bash
# Atualizar sistema
sudo apt update && sudo apt upgrade -y

# Instalar Mininet
sudo apt install mininet -y

# Instalar ferramentas de rede
sudo apt install net-tools tcpdump wireshark-qt -y

# Instalar Python e pip
sudo apt install python3-pip python3-venv -y

# Instalar Docker (se não estiver instalado)
curl -fsSL https://get.docker.com -o get-docker.sh
sudo sh get-docker.sh
sudo usermod -aG docker $USER
```

### Passo 2: Criar Ambiente Python para o Projeto

```bash
# Criar diretório do projeto
mkdir ~/gemeo-digital-rede
cd ~/gemeo-digital-rede

# Criar ambiente virtual Python
python3 -m venv venv
source venv/bin/activate

# Instalar dependências Python
pip install prometheus-client flask redis pandas numpy scikit-learn
```

### Passo 3: Script de Simulação de Rede com Coleta de Dados

Crie o arquivo `network_simulator.py`:

```python
#!/usr/bin/env python3
"""
Simulador de Rede para Gêmeo Digital
Coleta dados de performance de rede usando Mininet
"""

import time
import json
import subprocess
import threading
from datetime import datetime
from mininet.net import Mininet
from mininet.node import Controller, OVSSwitch
from mininet.link import TCLink
from mininet.topo import Topo
from mininet.util import dumpNodeConnections
from mininet.log import setLogLevel
import requests
from prometheus_client import CollectorRegistry, Gauge, push_to_gateway
import pandas as pd

class NetworkDataCollector:
    def __init__(self):
        self.data_points = []
        self.collecting = False
        
    def collect_metrics(self, net, duration=300):
        """Coleta métricas de rede por um período específico"""
        self.collecting = True
        start_time = time.time()
        
        print(f"📊 Iniciando coleta de dados por {duration} segundos...")
        
        while self.collecting and (time.time() - start_time) < duration:
            timestamp = datetime.now()
            
            # Coletar métricas de cada host
            for host in net.hosts:
                metrics = self._collect_host_metrics(host)
                metrics['timestamp'] = timestamp.isoformat()
                metrics['host'] = host.name
                self.data_points.append(metrics)
            
            # Coletar métricas dos switches
            for switch in net.switches:
                switch_metrics = self._collect_switch_metrics(switch)
                switch_metrics['timestamp'] = timestamp.isoformat()
                switch_metrics['device'] = switch.name
                switch_metrics['type'] = 'switch'
                self.data_points.append(switch_metrics)
            
            time.sleep(10)  # Coleta a cada 10 segundos
        
        print(f"✅ Coleta finalizada. {len(self.data_points)} pontos coletados.")
        return self.data_points
    
    def _collect_host_metrics(self, host):
        """Coleta métricas específicas de um host"""
        metrics = {}
        
        # CPU e Memória
        try:
            cpu_cmd = "top -bn1 | grep 'Cpu(s)' | awk '{print $2}' | sed 's/%us,//'"
            cpu_result = host.cmd(cpu_cmd).strip()
            metrics['cpu_usage'] = float(cpu_result) if cpu_result else 0.0
        except:
            metrics['cpu_usage'] = 0.0
        
        # Memória
        try:
            mem_cmd = "free | grep Mem | awk '{print ($3/$2) * 100.0}'"
            mem_result = host.cmd(mem_cmd).strip()
            metrics['memory_usage'] = float(mem_result) if mem_result else 0.0
        except:
            metrics['memory_usage'] = 0.0
        
        # Interfaces de rede
        interfaces = host.intfNames()
        for intf_name in interfaces:
            if intf_name != 'lo':  # Ignore loopback
                intf_metrics = self._collect_interface_metrics(host, intf_name)
                metrics.update(intf_metrics)
        
        return metrics
    
    def _collect_interface_metrics(self, host, interface):
        """Coleta métricas de uma interface específica"""
        metrics = {}
        
        try:
            # Bytes recebidos e transmitidos
            rx_cmd = f"cat /sys/class/net/{interface}/statistics/rx_bytes"
            tx_cmd = f"cat /sys/class/net/{interface}/statistics/tx_bytes"
            
            rx_bytes = int(host.cmd(rx_cmd).strip())
            tx_bytes = int(host.cmd(tx_cmd).strip())
            
            metrics[f'{interface}_rx_bytes'] = rx_bytes
            metrics[f'{interface}_tx_bytes'] = tx_bytes
            
            # Pacotes
            rx_packets_cmd = f"cat /sys/class/net/{interface}/statistics/rx_packets"
            tx_packets_cmd = f"cat /sys/class/net/{interface}/statistics/tx_packets"
            
            rx_packets = int(host.cmd(rx_packets_cmd).strip())
            tx_packets = int(host.cmd(tx_packets_cmd).strip())
            
            metrics[f'{interface}_rx_packets'] = rx_packets
            metrics[f'{interface}_tx_packets'] = tx_packets
            
            # Erros e drops
            rx_errors_cmd = f"cat /sys/class/net/{interface}/statistics/rx_errors"
            tx_errors_cmd = f"cat /sys/class/net/{interface}/statistics/tx_errors"
            
            metrics[f'{interface}_rx_errors'] = int(host.cmd(rx_errors_cmd).strip())
            metrics[f'{interface}_tx_errors'] = int(host.cmd(tx_errors_cmd).strip())
            
        except Exception as e:
            print(f"⚠️ Erro coletando métricas de {interface}: {e}")
        
        return metrics
    
    def _collect_switch_metrics(self, switch):
        """Coleta métricas do switch OpenFlow"""
        metrics = {}
        
        try:
            # Número de fluxos
            flows_cmd = f"ovs-ofctl dump-flows {switch.name} | wc -l"
            flows_result = switch.cmd(flows_cmd).strip()
            metrics['flow_count'] = int(flows_result) if flows_result else 0
            
            # Estatísticas de portas
            ports_cmd = f"ovs-ofctl dump-ports {switch.name}"
            ports_result = switch.cmd(ports_cmd)
            
            # Parse das estatísticas (simplificado)
            if "rx pkts" in ports_result:
                metrics['switch_active'] = 1
            else:
                metrics['switch_active'] = 0
                
        except Exception as e:
            print(f"⚠️ Erro coletando métricas do switch {switch.name}: {e}")
            metrics['switch_active'] = 0
        
        return metrics
    
    def save_data_csv(self, filename="network_data.csv"):
        """Salva dados coletados em CSV"""
        if self.data_points:
            df = pd.DataFrame(self.data_points)
            df.to_csv(filename, index=False)
            print(f"💾 Dados salvos em {filename}")
            return filename
        else:
            print("⚠️ Nenhum dado para salvar")
            return None
    
    def stop_collection(self):
        """Para a coleta de dados"""
        self.collecting = False

class CustomTopology(Topo):
    """Topologia personalizada para simulação"""
    
    def build(self, n_hosts=4, n_switches=2):
        # Criar switches
        switches = []
        for i in range(n_switches):
            switch = self.addSwitch(f's{i+1}')
            switches.append(switch)
        
        # Conectar switches entre si
        if len(switches) > 1:
            for i in range(len(switches) - 1):
                self.addLink(switches[i], switches[i+1], 
                           bw=100, delay='10ms', loss=1)
        
        # Criar hosts e conectar aos switches
        hosts_per_switch = n_hosts // n_switches
        host_count = 1
        
        for switch in switches:
            for j in range(hosts_per_switch):
                host = self.addHost(f'h{host_count}')
                self.addLink(host, switch, 
                           bw=10, delay='5ms', loss=0.1)
                host_count += 1
        
        # Adicionar hosts extras se necessário
        remaining_hosts = n_hosts - (hosts_per_switch * n_switches)
        for k in range(remaining_hosts):
            host = self.addHost(f'h{host_count}')
            self.addLink(host, switches[0], 
                       bw=10, delay='5ms', loss=0.1)
            host_count += 1

def generate_network_traffic(net, duration=60):
    """Gera tráfego de rede para simular atividade"""
    hosts = net.hosts
    
    print(f"🌐 Gerando tráfego de rede por {duration} segundos...")
    
    # Tráfego HTTP simples
    def http_traffic():
        if len(hosts) >= 2:
            server = hosts[0]
            client = hosts[1]
            
            # Iniciar servidor HTTP simples
            server.cmd('python3 -m http.server 8000 &')
            time.sleep(2)
            
            # Cliente faz requisições
            for _ in range(duration // 10):
                client.cmd(f'curl -s http://{server.IP()}:8000 > /dev/null')
                time.sleep(10)
            
            server.cmd('pkill -f http.server')
    
    # Tráfego de ping
    def ping_traffic():
        if len(hosts) >= 3:
            for i in range(0, len(hosts)-1, 2):
                hosts[i].cmd(f'ping -c 10 {hosts[i+1].IP()} > /dev/null &')
    
    # Executar diferentes tipos de tráfego
    http_thread = threading.Thread(target=http_traffic)
    ping_thread = threading.Thread(target=ping_traffic)
    
    http_thread.start()
    time.sleep(5)
    ping_thread.start()
    
    http_thread.join()
    ping_thread.join()
    
    print("✅ Geração de tráfego concluída")

def run_network_simulation():
    """Executar simulação completa de rede"""
    print("🚀 Iniciando simulação de rede para Gêmeo Digital...")
    
    # Configurar logging do Mininet
    setLogLevel('info')
    
    # Criar topologia personalizada
    topo = CustomTopology(n_hosts=6, n_switches=3)
    
    # Criar rede com controlador padrão
    net = Mininet(topo=topo, 
                  link=TCLink,
                  controller=Controller,
                  switch=OVSSwitch,
                  autoStaticArp=True)
    
    try:
        # Iniciar rede
        print("📡 Iniciando rede...")
        net.start()
        
        # Verificar conectividade
        print("🔍 Testando conectividade...")
        result = net.pingAll()
        print(f"📊 Resultado do ping: {result}")
        
        # Dump das conexões
        print("🔗 Conexões da rede:")
        dumpNodeConnections(net.hosts)
        dumpNodeConnections(net.switches)
        
        # Iniciar coletor de dados
        collector = NetworkDataCollector()
        
        # Iniciar coleta em thread separada
        collection_thread = threading.Thread(
            target=collector.collect_metrics,
            args=(net, 180)  # 3 minutos de coleta
        )
        collection_thread.start()
        
        # Gerar tráfego de rede
        time.sleep(5)  # Aguardar estabilização
        traffic_thread = threading.Thread(
            target=generate_network_traffic,
            args=(net, 120)  # 2 minutos de tráfego
        )
        traffic_thread.start()
        
        # Aguardar conclusão
        collection_thread.join()
        traffic_thread.join()
        
        # Salvar dados
        filename = collector.save_data_csv(
            f"network_simulation_{datetime.now().strftime('%Y%m%d_%H%M%S')}.csv"
        )
        
        print(f"📋 Simulação concluída. Dados salvos em: {filename}")
        
        # Análise básica dos dados
        if filename and len(collector.data_points) > 0:
            df = pd.DataFrame(collector.data_points)
            print("\n📊 Resumo dos dados coletados:")
            print(f"Total de pontos: {len(df)}")
            print(f"Período: {df['timestamp'].min()} até {df['timestamp'].max()}")
            
            if 'cpu_usage' in df.columns:
                print(f"CPU média: {df['cpu_usage'].mean():.2f}%")
            
            # Mostrar colunas disponíveis
            print(f"Métricas coletadas: {list(df.columns)}")
        
        return collector.data_points
        
    except Exception as e:
        print(f"❌ Erro durante simulação: {e}")
        return []
        
    finally:
        print("🛑 Finalizando rede...")
        net.stop()

if __name__ == "__main__":
    # Verificar se está rodando como root (necessário para Mininet)
    import os
    if os.geteuid() != 0:
        print("⚠️ Este script precisa ser executado como root (sudo)")
        print("Execute: sudo python3 network_simulator.py")
        exit(1)
    
    # Executar simulação
    data = run_network_simulation()
    
    if data:
        print(f"\n🎉 Simulação concluída com sucesso!")
        print(f"📈 {len(data)} pontos de dados coletados")
        print("💡 Os dados estão prontos para alimentar o gêmeo digital!")
    else:
        print("\n⚠️ Simulação concluída mas sem dados coletados")
```

### Passo 4: Executar a Simulação

```bash
# Salvar o script na VM
nano network_simulator.py
# (Cole o código acima)

# Tornar executável
chmod +x network_simulator.py

# Executar como root (Mininet precisa de privilégios)
sudo python3 network_simulator.py
```

---

## 📊 PARTE 3: Configurar Stack de Monitoramento

### Passo 1: Docker Compose para Monitoramento

Crie o arquivo `docker-compose.yml`:

```yaml
version: '3.8'

services:
  prometheus:
    image: prom/prometheus:latest
    container_name: prometheus
    ports:
      - "9090:9090"
    volumes:
      - ./prometheus.yml:/etc/prometheus/prometheus.yml
      - prometheus_data:/prometheus
    command:
      - '--config.file=/etc/prometheus/prometheus.yml'
      - '--storage.tsdb.path=/prometheus'
      - '--web.console.libraries=/usr/share/prometheus/console_libraries'
      - '--web.console.templates=/usr/share/prometheus/consoles'
      - '--storage.tsdb.retention.time=15d'
      - '--web.enable-lifecycle'

  grafana:
    image: grafana/grafana:latest
    container_name: grafana
    ports:
      - "3000:3000"
    environment:
      - GF_SECURITY_ADMIN_USER=admin
      - GF_SECURITY_ADMIN_PASSWORD=gemeodigital123
    volumes:
      - grafana_data:/var/lib/grafana
      - ./grafana-dashboards:/var/lib/grafana/dashboards

  redis:
    image: redis:alpine
    container_name: redis
    ports:
      - "6379:6379"
    volumes:
      - redis_data:/data

volumes:
  prometheus_data:
  grafana_data:
  redis_data:
```

### Passo 2: Configuração do Prometheus

Crie `prometheus.yml`:

```yaml
global:
  scrape_interval: 15s
  evaluation_interval: 15s

scrape_configs:
  - job_name: 'prometheus'
    static_configs:
      - targets: ['localhost:9090']

  - job_name: 'digital-twin-api'
    static_configs:
      - targets: ['host.docker.internal:5000']
    scrape_interval: 10s
```

### Passo 3: Iniciar Stack de Monitoramento

```bash
# Iniciar serviços
docker-compose up -d

# Verificar status
docker-compose ps

# Ver logs
docker-compose logs -f
```

---

## 🔬 PARTE 4: Integrar Dados com Gêmeo Digital

### Script de Integração Python

Crie `digital_twin_integration.py`:

```python
#!/usr/bin/env python3
"""
Integração dos dados de simulação com o Gêmeo Digital
"""

import pandas as pd
import numpy as np
from sklearn.preprocessing import StandardScaler
from sklearn.ensemble import IsolationForest
import matplotlib.pyplot as plt
import seaborn as sns
from flask import Flask, jsonify, request
import redis
import json
from datetime import datetime, timedelta

app = Flask(__name__)

class DigitalTwinDataProcessor:
    def __init__(self, redis_host='localhost', redis_port=6379):
        self.redis_client = redis.Redis(host=redis_host, port=redis_port, decode_responses=True)
        self.anomaly_detector = IsolationForest(contamination=0.1)
        self.scaler = StandardScaler()
        
    def load_simulation_data(self, csv_file):
        """Carrega dados da simulação"""
        try:
            df = pd.read_csv(csv_file)
            print(f"📊 Dados carregados: {len(df)} registros")
            return df
        except Exception as e:
            print(f"❌ Erro ao carregar dados: {e}")
            return None
    
    def process_network_data(self, df):
        """Processa dados de rede para análise"""
        # Selecionar colunas numéricas
        numeric_cols = df.select_dtypes(include=[np.number]).columns.tolist()
        
        # Remover colunas irrelevantes
        exclude_cols = ['timestamp']
        numeric_cols = [col for col in numeric_cols if col not in exclude_cols]
        
        if not numeric_cols:
            print("⚠️ Nenhuma coluna numérica encontrada")
            return None
        
        # Preencher valores ausentes
        df_processed = df[numeric_cols].fillna(0)
        
        return df_processed
    
    def detect_anomalies(self, df_processed):
        """Detecta anomalias nos dados"""
        if df_processed is None or df_processed.empty:
            return None
            
        # Normalizar dados
        data_scaled = self.scaler.fit_transform(df_processed)
        
        # Treinar detector de anomalias
        anomalies = self.anomaly_detector.fit_predict(data_scaled)
        
        # Adicionar resultados ao dataframe
        df_processed['anomaly'] = anomalies
        df_processed['anomaly_score'] = self.anomaly_detector.decision_function(data_scaled)
        
        anomaly_count = len(df_processed[df_processed['anomaly'] == -1])
        print(f"🔍 Anomalias detectadas: {anomaly_count} de {len(df_processed)} ({anomaly_count/len(df_processed)*100:.2f}%)")
        
        return df_processed
    
    def generate_insights(self, df_processed):
        """Gera insights dos dados processados"""
        if df_processed is None:
            return {}
            
        insights = {
            'total_records': len(df_processed),
            'anomaly_rate': len(df_processed[df_processed['anomaly'] == -1]) / len(df_processed),
            'metrics_summary': df_processed.describe().to_dict()
        }
        
        # Métricas específicas de rede
        if 'cpu_usage' in df_processed.columns:
            insights['avg_cpu'] = df_processed['cpu_usage'].mean()
            insights['max_cpu'] = df_processed['cpu_usage'].max()
        
        if 'memory_usage' in df_processed.columns:
            insights['avg_memory'] = df_processed['memory_usage'].mean()
            insights['max_memory'] = df_processed['memory_usage'].max()
        
        # Salvar insights no Redis
        self.redis_client.setex('digital_twin_insights', 3600, json.dumps(insights, default=str))
        
        return insights

# API Flask para servir dados do gêmeo digital
@app.route('/api/health')
def health():
    return jsonify({'status': 'healthy', 'timestamp': datetime.now().isoformat()})

@app.route('/api/insights')
def get_insights():
    try:
        processor = DigitalTwinDataProcessor()
        insights_json = processor.redis_client.get('digital_twin_insights')
        
        if insights_json:
            insights = json.loads(insights_json)
            return jsonify(insights)
        else:
            return jsonify({'error': 'No insights available'}), 404
    except Exception as e:
        return jsonify({'error': str(e)}), 500

@app.route('/api/process_data', methods=['POST'])
def process_data():
    try:
        data = request.get_json()
        csv_file = data.get('csv_file')
        
        if not csv_file:
            return jsonify({'error': 'csv_file parameter required'}), 400
        
        processor = DigitalTwinDataProcessor()
        
        # Carregar e processar dados
        df = processor.load_simulation_data(csv_file)
        if df is None:
            return jsonify({'error': 'Failed to load data'}), 400
        
        df_processed = processor.process_network_data(df)
        df_with_anomalies = processor.detect_anomalies(df_processed)
        insights = processor.generate_insights(df_with_anomalies)
        
        return jsonify({
            'status': 'success',
            'insights': insights,
            'message': 'Data processed successfully'
        })
        
    except Exception as e:
        return jsonify({'error': str(e)}), 500

if __name__ == '__main__':
    print("🚀 Iniciando API do Gêmeo Digital...")
    print("📊 Acesse http://localhost:5000/api/health para verificar status")
    print("📈 Use /api/process_data para processar dados da simulação")
    
    app.run(host='0.0.0.0', port=5000, debug=True)
```

---

## 🎯 PARTE 5: Executar Workflow Completo

### Script Principal de Execução

Crie `run_digital_twin.sh`:

```bash
#!/bin/bash
# Script principal para executar o gêmeo digital completo

echo "🚀 Iniciando Gêmeo Digital para Monitoramento de Rede"

# 1. Verificar dependências
echo "🔍 Verificando dependências..."
if ! command -v docker &> /dev/null; then
    echo "❌ Docker não encontrado. Por favor instale o Docker."
    exit 1
fi

if ! command -v python3 &> /dev/null; then
    echo "❌ Python3 não encontrado. Por favor instale o Python3."
    exit 1
fi

# 2. Criar diretório de dados
mkdir -p data logs

# 3. Iniciar stack de monitoramento
echo "📊 Iniciando stack de monitoramento..."
docker-compose up -d

echo "⏳ Aguardando inicialização dos serviços..."
sleep 30

# 4. Executar simulação de rede (em background)
echo "🌐 Iniciando simulação de rede..."
sudo python3 network_simulator.py > logs/simulation.log 2>&1 &
SIMULATION_PID=$!

# 5. Iniciar API do gêmeo digital (em background)
echo "🤖 Iniciando API do Gêmeo Digital..."
python3 digital_twin_integration.py > logs/api.log 2>&1 &
API_PID=$!

echo "✅ Sistema iniciado com sucesso!"
echo ""
echo "📋 URLs de acesso:"
echo "   - Grafana: http://localhost:3000 (admin/gemeodigital123)"
echo "   - Prometheus: http://localhost:9090"
echo "   - API Gêmeo Digital: http://localhost:5000/api/health"
echo ""
echo "📊 Para processar dados após simulação:"
echo "   curl -X POST http://localhost:5000/api/process_data \\"
echo "        -H 'Content-Type: application/json' \\"
echo "        -d '{\"csv_file\": \"data/network_simulation_XXXXXX.csv\"}'"
echo ""
echo "🛑 Para parar tudo:"
echo "   docker-compose down"
echo "   kill $SIMULATION_PID $API_PID"

# Aguardar por input do usuário
echo "Pressione Enter para parar todos os serviços..."
read

# Cleanup
echo "🛑 Parando serviços..."
kill $SIMULATION_PID $API_PID 2>/dev/null
docker-compose down

echo "✅ Serviços parados."
```

### Tornar Executável e Rodar

```bash
# Tornar executável
chmod +x run_digital_twin.sh

# Executar workflow completo
./run_digital_twin.sh
```

---

## 📚 Resumo dos Passos

### Conexão SSH (Primeira vez):
1. Abra terminal
2. Execute: `ssh qinfraqrad01@andromeda.lasdpc.icmc.usp.br -p 23181`
3. Digite `yes` quando perguntado
4. Digite a senha fornecida

### Configuração Inicial (Uma vez):
1. Instalar dependências (Mininet, Docker, Python)
2. Criar arquivos de configuração
3. Configurar ambiente Python

### Coleta de Dados (Sempre que precisar):
1. Executar simulação: `sudo python3 network_simulator.py`
2. Dados são salvos em CSV automaticamente
3. Processar via API: `curl -X POST .../api/process_data`

### Monitoramento (Contínuo):
1. Stack Docker: `docker-compose up -d`
2. Grafana em http://localhost:3000
3. API em http://localhost:5000

---

## 🆘 Solução de Problemas

### SSH não conecta:
- Verifique a porta: `-p 23181`
- Confirme o username: `qinfraqrad01`
- Contate o PAE se persistir

### Mininet não funciona:
```bash
# Executar como root
sudo python3 network_simulator.py

# Limpar configurações antigas
sudo mn -c
```

### Docker não inicia:
```bash
# Verificar se Docker está rodando
sudo systemctl start docker

# Verificar permissões
sudo usermod -aG docker $USER
newgrp docker
```

### Portas ocupadas:
```bash
# Verificar o que está usando a porta
sudo netstat -tulpn | grep :3000

# Matar processo se necessário
sudo kill -9 <PID>
```

---

## 📞 Contatos

- **PAE**: jgabrielcosta@usp.br
- **Problemas com VM**: Contate o PAE
- **Dúvidas do código**: Analise os logs em `logs/`

Este guia fornece um workflow completo para coleta de dados reais de rede que podem alimentar seu gêmeo digital!