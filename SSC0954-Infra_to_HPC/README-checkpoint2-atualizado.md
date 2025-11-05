# Gêmeo Digital para Monitoramento de Desempenho de Rede
## Grupo 5 - Infraestrutura de Alto Desempenho

[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/Yp5Hxsev)

---

## 📋 Acesso à VM

### Informações de Conexão
- **Login**: `ginfragrad05`
- **Senha**: `Lq4xzVR4`
- **Comando SSH**: 
```bash
ssh ginfragrad05@cloudgrad.icmc.usp.br -p porta
```

### Mapeamento de Portas
| Local (VM) | Remota (WWW) - Porta Web |
|------------|---------------------------|
| 5191       | 5191                      |

### Acesso Web
- **URL**: `http://cloudgrad.icmc.usp.br:porta-web`
- **Contato**: jcezar@icmc.usp.br

---

## 🎯 Segundo Checkpoint - Arquitetura Detalhada

### Objetivo
Avaliar o andamento da arquitetura proposta para o gêmeo digital, com foco na infraestrutura considerada e apresentação de diagrama detalhado dos serviços em utilização e comunicação entre eles.

### Entregáveis Obrigatórios
- ✅ **README atualizado** com nova seção de arquitetura de infraestrutura
- ✅ **Diagrama de arquitetura** ilustrando serviços e comunicação
- ✅ **Tag no GitHub** marcando entrega (`checkpoint2`)
- ✅ **Apresentação** recapitulando proposta e infraestrutura de suporte

---

## 🏗️ Arquitetura de Infraestrutura do Sistema

### Visão Geral
O Gêmeo Digital para Monitoramento de Desempenho de Rede é implementado seguindo uma arquitetura de **microserviços distribuídos containerizados**, garantindo escalabilidade, manutenibilidade e isolamento entre componentes. O **diagrama abaixo poderá ser modificado ao longo do projeto.**

### Diagrama da Arquitetura

![Digrama Inicial da Arquitetura](<Diagrama de Estrutura inicial v0 DT network_traffic-1.png>)

---

## 🔧 Componentes da Infraestrutura

### 1. Camada de Apresentação
#### Interface Web Dashboard
- **Tecnologia**: HTML5, CSS3, JavaScript (Vue.js)
- **Porta**: 5191 (mapeada para acesso externo)
- **Função**: Interface principal para usuários finais
- **Comunicação**: API REST com backend Flask

#### Grafana Dashboards
- **Container**: `grafana/grafana:latest`
- **Porta**: 3000 (interna), 5191 (externa via proxy)
- **Função**: Visualização avançada de métricas e alertas
- **Dados**: Conecta diretamente ao Prometheus via DataSource

### 2. Camada de API
#### Digital Twin API
- **Tecnologia**: Python Flask + gunicorn
- **Container**: Custom Python image
- **Porta**: 5000 (interna)
- **Endpoints Principais**:
  - `GET /api/metrics` - Métricas atuais de rede
  - `POST /api/simulate` - Execução de simulações
  - `GET /api/anomalies` - Detecção de anomalias
  - `POST /api/predict` - Análises preditivas

#### Nginx Load Balancer
- **Container**: `nginx:alpine`
- **Porta**: 80 (interna), 5191 (externa)
- **Função**: Proxy reverso, SSL termination, load balancing
- **Configuração**: Round-robin para múltiplas instâncias da API

### 3. Camada de Processamento
#### ML Engine (Machine Learning)
- **Algoritmos Implementados**:
  - **Isolation Forest**: Detecção de anomalias em tempo real
  - **LSTM Networks**: Previsão de padrões de tráfego
  - **ARIMA Models**: Análise de séries temporais
- **Bibliotecas**: scikit-learn, tensorflow, pandas, numpy
- **Processamento**: Assíncrono com Celery workers

#### Network Simulator
- **Tecnologia**: Mininet + Python
- **Função**: Simulação de cenários de rede
- **Cenários Suportados**:
  - Testes de carga
  - Simulação de falhas
  - Análise de capacidade
  - Otimização de rotas

### 4. Camada de Coleta
#### Prometheus
- **Container**: `prom/prometheus:latest`
- **Porta**: 9090 (interna)
- **Configuração**: Scraping interval de 15 segundos
- **Targets**:
  - SNMP Exporter (dispositivos de rede)
  - Node Exporter (métricas de sistema)
  - API própria (métricas customizadas)

#### SNMP Exporter
- **Container**: `prom/snmp-exporter:latest`
- **Porta**: 9116 (interna)
- **Protocolo**: SNMP v2c/v3
- **MIBs Suportadas**: IF-MIB, HOST-MIB, ENTITY-MIB
- **Dispositivos Monitorados**:
  - Switches de rede
  - Roteadores
  - Access Points
  - Firewalls

#### Node Exporter
- **Container**: `prom/node-exporter:latest`
- **Porta**: 9100 (interna)
- **Métricas Coletadas**:
  - CPU usage e load average
  - Memória RAM e swap
  - I/O de disco
  - Interface de rede
  - Processos do sistema

### 5. Camada de Dados
#### Redis Cache
- **Container**: `redis:alpine`
- **Porta**: 6379 (interna)
- **Função**: Cache de consultas frequentes, sessões de usuário
- **TTL**: 300 segundos para métricas, 3600 para análises

#### Time Series Database
- **Implementação**: Prometheus TSDB integrado
- **Retenção**: 30 dias de dados históricos
- **Compressão**: Automática para otimização de storage
- **Backup**: Snapshots diários para storage externo

#### Backup Storage
- **Local**: Volume Docker persistente
- **Remoto**: Sincronização com storage da VM
- **Frequência**: Backup incremental a cada 6 horas
- **Retenção**: 90 dias de backups

---

## 🔄 Comunicação Entre Serviços

### Protocolos Utilizados
- **HTTP/HTTPS**: Comunicação API REST
- **gRPC**: Comunicação interna entre microserviços críticos
- **WebSockets**: Streaming de métricas em tempo real
- **MQTT**: Telemetria de dispositivos IoT (futuro)

### Service Discovery
- **Implementação**: Docker Compose DNS
- **Resolução**: Nome do container → IP interno
- **Load Balancing**: Nginx upstream configuration
- **Health Checks**: Endpoints `/health` em todos os serviços

### Fluxo de Dados
1. **Coleta**: Dispositivos → SNMP Exporter → Prometheus → TSDB
2. **Processamento**: API → ML Engine → Redis Cache
3. **Visualização**: Grafana ← Prometheus ← TSDB
4. **Interface**: Web Dashboard → API → Múltiplas fontes

---

## 🚀 Deployment e Orquestração

```
volumes:
  prometheus_data:
  grafana_data:
```
---

## 📊 Monitoramento da Infraestrutura

### Métricas de Sistema
- **Disponibilidade**: Uptime de cada serviço
- **Performance**: Latência de APIs, throughput de dados
- **Recursos**: CPU, memória, storage por container
- **Rede**: Bandwidth utilizado, conexões ativas

### Alertas Configurados
- **API Response Time** > 500ms
- **Container Memory** > 80%
- **Disk Space** < 10% livre
- **Network Anomaly Score** > 0.8

### Dashboards Disponíveis
1. **Overview**: Status geral do sistema
2. **Network Performance**: Métricas de rede em tempo real
3. **ML Insights**: Resultados dos algoritmos de ML
4. **Infrastructure**: Saúde dos containers e recursos

---

## 🔒 Segurança e Compliance

### Medidas de Segurança
- **Autenticação**: JWT tokens para APIs
- **Autorização**: Role-based access control (RBAC)
- **Comunicação**: TLS 1.3 para tráfego externo
- **Containers**: Non-root users, read-only filesystems
- **Network**: Docker networks isoladas por função

### Backup e Recovery
- **RTO (Recovery Time Objective)**: < 30 minutos
- **RPO (Recovery Point Objective)**: < 1 hora
- **Disaster Recovery**: Procedimentos documentados
- **Testing**: Restore tests mensais

---

## 📈 Escalabilidade e Performance

### Scaling Horizontal
- **API**: Auto-scaling baseado em CPU/memória
- **Workers**: Celery workers dinâmicos
- **Database**: Sharding por timestamp (futuro)
- **Cache**: Redis Cluster (produção)

### Otimizações
- **Connection Pooling**: Para todas as conexões de DB
- **Caching Strategy**: Multi-layer (Redis + application)
- **Data Compression**: Gzip para APIs, built-in para TSDB
- **Resource Limits**: Definidos para todos os containers

---

## 🎯 Métricas de Rede Monitoradas

### Métricas Principais
- **Latência**: Round-trip time, jitter
- **Throughput**: Bits/segundo por interface
- **Perda de Pacotes**: Percentual de packet loss
- **Utilização**: Bandwidth utilizado vs disponível
- **Qualidade de Serviço**: QoS metrics por classe

### Métricas Avançadas
- **TCP Connection States**: Established, time-wait, etc.
- **Buffer Utilization**: Switch/router buffer usage
- **Error Rates**: CRC errors, frame errors
- **Routing Metrics**: Convergence time, path changes

---

## 🧪 Testes e Validação

### Ambiente de Testes
- **Unit Tests**: 95% code coverage
- **Integration Tests**: End-to-end scenarios
- **Load Tests**: 1000+ concurrent users
- **Chaos Engineering**: Failure injection tests

### Cenários de Simulação
1. **Normal Operation**: Baseline performance
2. **High Load**: 10x normal traffic
3. **Network Failure**: Link down scenarios
4. **Resource Exhaustion**: CPU/memory limits
5. **Security Attacks**: DDoS simulation

---

## 🚦 Status do Projeto

### Checkpoint 2 - Arquitetura ✅
- [x] Diagrama de arquitetura detalhado
- [x] Documentação de infraestrutura completa
- [x] Especificação de comunicação entre serviços
- [x] Configurações de deployment definidas
- [x] Planos de segurança e escalabilidade
- [x] Métricas de monitoramento especificadas

### Próximos Passos (Checkpoint 3)
- [ ] Implementação completa da infraestrutura
- [ ] Deploy em ambiente de produção
- [ ] Testes de carga e performance
- [ ] Refinamento dos algoritmos de ML
- [ ] Otimização de performance
- [ ] Validação com dados reais

*Este documento representa a arquitetura detalhada do Gêmeo Digital para Monitoramento de Desempenho de Rede, desenvolvido como parte da disciplina de Infraestrutura de Alto Desempenho.*