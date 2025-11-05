#!/bin/bash
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
