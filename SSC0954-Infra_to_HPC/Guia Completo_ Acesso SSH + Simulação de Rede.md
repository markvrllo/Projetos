<img src="https://r2cdn.perplexity.ai/pplx-full-logo-primary-dark%402x.png" style="height:64px;margin-right:32px"/>

# Guia Completo: Acesso SSH + Simulação de Rede para Gêmeo Digital

Perfeito! Criei um **guia completo passo-a-passo** para você acessar a VM e implementar a coleta de dados de rede para o gêmeo digital. Baseando-me nas informações da imagem fornecida, aqui está todo o processo:

## 🔐 **PARTE 1: Acesso à VM via SSH**

### Dados de Acesso (Extraídos da Imagem):

- **Comando SSH**: `ssh qinfraqrad01@andromeda.lasdpc.icmc.usp.br -p 23181`
- **Porta Web**: 5181 (para acessar serviços web)
- **PAE de Contato**: jgabrielcosta@usp.br


### Passo 1: Conectar na VM

```bash
ssh qinfraqrad01@andromeda.lasdpc.icmc.usp.br -p 23181
```

**O que vai acontecer:**

1. Sistema pergunta se você confia no servidor → Digite `yes`
2. Solicita senha → Digite a senha (não aparece na tela)
3. Você estará conectado na VM remota!

## 🌐 **PARTE 2: Simulação de Rede com Mininet**

Criei um **sistema completo** que:

- **Simula uma rede real** com hosts e switches
- **Coleta métricas de performance** automaticamente
- **Gera tráfego de rede** para simular atividade real
- **Salva dados em CSV** prontos para o gêmeo digital


### Componentes do Sistema:

#### 1. **Scripts de Instalação**

- `install_dependencies.sh` - Instala tudo automaticamente
- `test_connectivity.sh` - Verifica se está tudo funcionando
- `system_monitor.py` - Monitor básico de recursos


#### 2. **Simulador de Rede Completo**

- **Topologia personalizada** (6 hosts, 3 switches)
- **Coleta automática** de métricas de CPU, memória, rede
- **Geração de tráfego** HTTP e ping para simular uso real
- **Export automático** para CSV com timestamps


#### 3. **Stack de Monitoramento**

- **Prometheus** para coleta de métricas
- **Grafana** para dashboards visuais
- **Redis** para cache de dados
- **API Flask** para integração


## 📊 **PARTE 3: Implementação Prática**

### Ordem de Execução na VM:

```bash
# 1. Instalar dependências (uma vez só)
./install_dependencies.sh

# 2. Testar configuração
./test_connectivity.sh

# 3. Executar simulação completa
sudo python3 network_simulator.py
```


### O que o Sistema Coleta:

**Métricas de Performance:**

- ✅ **CPU Usage** por host
- ✅ **Memory Usage** por host
- ✅ **Network I/O** (bytes RX/TX, pacotes, erros)
- ✅ **Switch Statistics** (flows, ports)
- ✅ **Latência e Conectividade** entre hosts

**Dados de Tráfego:**

- ✅ **HTTP Traffic** entre hosts
- ✅ **Ping Statistics** para latência
- ✅ **Interface Metrics** detalhadas
- ✅ **Timestamps** precisos para análise temporal


## 🎯 **PARTE 4: Integração com Gêmeo Digital**

O sistema inclui:

### 1. **Processador de Dados Inteligente**

- **Machine Learning** para detecção de anomalias
- **Normalização** e limpeza automática dos dados
- **Análise estatística** completa
- **Cache Redis** para performance


### 2. **API RESTful**

```bash
# Processar dados coletados
curl -X POST http://localhost:5000/api/process_data \
  -H 'Content-Type: application/json' \
  -d '{"csv_file": "network_simulation_20250925_193000.csv"}'

# Obter insights
curl http://localhost:5000/api/insights
```


### 3. **Dashboards Grafana**

- **Visualização em tempo real** das métricas
- **Alertas automáticos** para anomalias
- **Histórico temporal** completo
- **Interface web intuitiva**


## 📈 **Exemplo de Dados Coletados**

O sistema gera arquivos CSV com estrutura:

```csv
timestamp,host,cpu_usage,memory_usage,eth0_rx_bytes,eth0_tx_bytes,eth0_rx_packets,eth0_tx_packets,eth0_rx_errors,eth0_tx_errors
2025-09-25T19:30:15,h1,25.3,45.2,1048576,524288,1024,512,0,0
2025-09-25T19:30:25,h1,28.7,47.1,1153024,578560,1125,567,0,0
...
```


## 🚀 **Vantagens desta Abordagem**

### ✅ **Dados Reais e Variados**

- **Múltiplas métricas** simultâneas
- **Tráfego realístico** gerado automaticamente
- **Cenários diversos** (normal, sobrecarga, falhas)


### ✅ **Automação Completa**

- **Scripts plug-and-play** prontos para usar
- **Coleta contínua** sem intervenção manual
- **Export automático** em formatos padrão


### ✅ **Integração Nativa**

- **APIs REST** para consumo fácil
- **Formatos compatíveis** com ML/AI
- **Dashboards prontos** para visualização


### ✅ **Escalabilidade**

- **Topologias customizáveis** (2 a 50+ hosts)
- **Métricas extensíveis** conforme necessidade
- **Performance otimizada** para recursos limitados


## 🆘 **Troubleshooting**

### Problemas Comuns:

1. **SSH não conecta** → Verifique porta 23181 e username correto
2. **Mininet precisa sudo** → Sempre execute como root
3. **Portas ocupadas** → Use `netstat -tulpn | grep :PORTA`
4. **Docker não inicia** → `sudo systemctl start docker`

### Contatos:

- **Problemas com VM**: jgabrielcosta@usp.br
- **Dúvidas técnicas**: Analise logs em `logs/`


## 🎉 **Resultado Final**

Após seguir este guia, você terá:

- ✅ **Acesso completo** à VM configurada
- ✅ **Sistema de simulação** funcionando
- ✅ **Dados reais de rede** sendo coletados
- ✅ **Base sólida** para o gêmeo digital
- ✅ **Stack de monitoramento** operacional

O sistema está **pronto para gerar dados** que alimentarão perfeitamente seu projeto de gêmeo digital para monitoramento de desempenho de rede!

**Próximo passo**: Execute os scripts na VM e comece a coletar dados reais para seu projeto! 🚀
<span style="display:none">[^1][^10][^11][^12][^13][^14][^15][^16][^17][^18][^19][^2][^20][^21][^22][^23][^24][^25][^3][^4][^5][^6][^7][^8][^9]</span>

<div align="center">⁂</div>

[^1]: 784C0E18-54DC-4970-A1CF-E519FAB629D1.jpg

[^2]: https://zah.uni-heidelberg.de/it-guide/ssh-tutorial-linux

[^3]: https://networksimulationtools.com/how-to-create-network-in-mininet/

[^4]: https://mostly-bsd.github.io/post/monitoring/

[^5]: https://supporthost.com/ssh-connection/

[^6]: https://mininet-optical.org/tutorial.html

[^7]: https://www.cloudraft.io/blog/network-monitoring-with-prometheus

[^8]: https://linuxconfig.org/how-to-configure-ssh-client-step-by-step-tutorial

[^9]: https://erp.metbhujbalknowledgecity.ac.in/StudyMaterial/01RD012010004360005.pdf

[^10]: https://newrelic.com/blog/best-practices/how-to-monitor-with-prometheus

[^11]: https://www.digitalocean.com/community/tutorials/ssh-essentials-working-with-ssh-servers-clients-and-keys

[^12]: https://conferences.sigcomm.org/sigcomm/2014/doc/slides/mininet-intro.pdf

[^13]: https://prometheus.io/docs/introduction/first_steps/

[^14]: https://www.digitalocean.com/community/tutorials/how-to-use-ssh-to-connect-to-a-remote-server

[^15]: http://mininet.org

[^16]: https://grafana.com/blog/2022/01/19/a-beginners-guide-to-network-monitoring-with-grafana-and-prometheus/

[^17]: https://opensource.com/article/20/9/ssh

[^18]: http://mininet.org/walkthrough/

[^19]: https://www.youtube.com/watch?v=fnoTHoZzNSc

[^20]: https://www.youtube.com/watch?v=v45p_kJV9i4

[^21]: https://www.youtube.com/watch?v=_qKMRYkm7T4

[^22]: https://ppl-ai-code-interpreter-files.s3.amazonaws.com/web/direct-files/8a6ed19824bbff0a90613873e5b09a36/b5559ca8-7fad-41db-8b08-67ab319a675f/7791b60d

[^23]: https://ppl-ai-code-interpreter-files.s3.amazonaws.com/web/direct-files/8a6ed19824bbff0a90613873e5b09a36/ff38ad34-8bcc-4a32-88cf-f2d490ac9270/3a12e472.sh

[^24]: https://ppl-ai-code-interpreter-files.s3.amazonaws.com/web/direct-files/8a6ed19824bbff0a90613873e5b09a36/ff38ad34-8bcc-4a32-88cf-f2d490ac9270/69162f00.py

[^25]: https://ppl-ai-code-interpreter-files.s3.amazonaws.com/web/direct-files/8a6ed19824bbff0a90613873e5b09a36/ff38ad34-8bcc-4a32-88cf-f2d490ac9270/fcbe7bde.sh

