#!/bin/bash
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
