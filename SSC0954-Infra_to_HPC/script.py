# Criar scripts adicionais para facilitar a implementação

# 1. Script de instalação automática
install_script = """#!/bin/bash
# Script de instalação automática para VM
# Instala todas as dependências necessárias

echo "🚀 Instalando dependências para o Gêmeo Digital de Rede..."

# Atualizar sistema
echo "📦 Atualizando sistema..."
sudo apt update && sudo apt upgrade -y

# Instalar ferramentas básicas
echo "🔧 Instalando ferramentas básicas..."
sudo apt install -y curl wget git vim nano htop

# Instalar Python e pip
echo "🐍 Instalando Python..."
sudo apt install -y python3 python3-pip python3-venv python3-dev

# Instalar Mininet
echo "🌐 Instalando Mininet..."
sudo apt install -y mininet

# Instalar ferramentas de rede
echo "📡 Instalando ferramentas de rede..."
sudo apt install -y net-tools tcpdump wireshark-tshark iperf3 nmap

# Instalar Docker
echo "🐳 Instalando Docker..."
curl -fsSL https://get.docker.com -o get-docker.sh
sudo sh get-docker.sh
sudo usermod -aG docker $USER

# Instalar Docker Compose
echo "🐳 Instalando Docker Compose..."
sudo curl -L "https://github.com/docker/compose/releases/latest/download/docker-compose-$(uname -s)-$(uname -m)" -o /usr/local/bin/docker-compose
sudo chmod +x /usr/local/bin/docker-compose

# Instalar dependências Python
echo "🐍 Instalando bibliotecas Python..."
pip3 install --user prometheus-client flask redis pandas numpy scikit-learn matplotlib seaborn requests

echo "✅ Instalação concluída!"
echo ""
echo "📋 Próximos passos:"
echo "1. Execute: newgrp docker (para ativar grupo Docker)"
echo "2. Reinicie a sessão SSH ou execute: source ~/.bashrc"
echo "3. Teste: docker --version"
echo "4. Continue com o guia principal"
"""

# 2. Script de teste de conectividade
connectivity_test = """#!/bin/bash
# Script para testar conectividade e configuração

echo "🔍 Testando configuração do sistema..."

# Testar comandos básicos
echo "📋 Testando comandos básicos..."
echo "  Python: $(python3 --version 2>&1)"
echo "  Docker: $(docker --version 2>&1)"
echo "  Mininet: $(which mn)"

# Testar conectividade de rede
echo ""
echo "🌐 Testando conectividade de rede..."
echo "  Ping Google: $(ping -c 1 8.8.8.8 >/dev/null 2>&1 && echo 'OK' || echo 'FAIL')"
echo "  Ping USP: $(ping -c 1 www.usp.br >/dev/null 2>&1 && echo 'OK' || echo 'FAIL')"

# Testar Mininet
echo ""
echo "🔬 Testando Mininet..."
if [ "$EUID" -eq 0 ]; then
    echo "  Executando como root - OK"
    mn --version >/dev/null 2>&1 && echo "  Mininet: OK" || echo "  Mininet: FAIL"
else
    echo "  ⚠️  Para testar Mininet execute: sudo $0"
fi

# Testar Docker
echo ""
echo "🐳 Testando Docker..."
docker ps >/dev/null 2>&1 && echo "  Docker daemon: OK" || echo "  Docker daemon: FAIL (tente: sudo systemctl start docker)"

# Testar portas
echo ""
echo "🔌 Testando portas disponíveis..."
for port in 3000 5000 9090 6379; do
    if netstat -tuln 2>/dev/null | grep -q ":$port "; then
        echo "  Porta $port: OCUPADA"
    else
        echo "  Porta $port: LIVRE"
    fi
done

echo ""
echo "✅ Teste de configuração concluído!"
"""

# 3. Script de monitoramento simples
monitoring_script = """#!/usr/bin/env python3
# Script para monitorar sistema em tempo real

import psutil
import time
import json
from datetime import datetime

def get_system_metrics():
    \"\"\"Coleta métricas básicas do sistema\"\"\"
    return {
        'timestamp': datetime.now().isoformat(),
        'cpu_percent': psutil.cpu_percent(interval=1),
        'memory_percent': psutil.virtual_memory().percent,
        'disk_percent': psutil.disk_usage('/').percent,
        'network_io': dict(psutil.net_io_counters()._asdict()),
        'load_avg': psutil.getloadavg() if hasattr(psutil, 'getloadavg') else [0, 0, 0]
    }

def main():
    print("📊 Monitor do Sistema - Pressione Ctrl+C para parar")
    print("=" * 60)
    
    try:
        while True:
            metrics = get_system_metrics()
            
            print(f"🕐 {metrics['timestamp']}")
            print(f"💻 CPU: {metrics['cpu_percent']:5.1f}%")
            print(f"🧠 RAM: {metrics['memory_percent']:5.1f}%")
            print(f"💾 Disk: {metrics['disk_percent']:5.1f}%")
            print(f"📡 Net RX: {metrics['network_io']['bytes_recv']:,} bytes")
            print(f"📤 Net TX: {metrics['network_io']['bytes_sent']:,} bytes")
            print("-" * 40)
            
            time.sleep(10)
            
    except KeyboardInterrupt:
        print("\\n🛑 Monitoramento parado pelo usuário")
    except Exception as e:
        print(f"❌ Erro: {e}")

if __name__ == "__main__":
    main()
"""

# Salvar os scripts
with open("install_dependencies.sh", "w") as f:
    f.write(install_script)

with open("test_connectivity.sh", "w") as f:
    f.write(connectivity_test)

with open("system_monitor.py", "w") as f:
    f.write(monitoring_script)

# Tornar scripts executáveis
import os
import stat

for script in ["install_dependencies.sh", "test_connectivity.sh"]:
    st = os.stat(script)
    os.chmod(script, st.st_mode | stat.S_IEXEC)

print("✅ Scripts auxiliares criados:")
print("   - install_dependencies.sh: Instala todas as dependências")
print("   - test_connectivity.sh: Testa configuração do sistema") 
print("   - system_monitor.py: Monitor básico do sistema")
print("")
print("📋 Ordem de execução na VM:")
print("1. ./install_dependencies.sh")
print("2. ./test_connectivity.sh") 
print("3. Seguir guia principal para simulação")
print("")
print("💡 Dica: Execute 'python3 system_monitor.py' para monitorar recursos em tempo real")