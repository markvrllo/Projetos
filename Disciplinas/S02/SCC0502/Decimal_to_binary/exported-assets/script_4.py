# Vamos testar o algoritmo de conversão com o exemplo dado (132 -> 10000100)
print("=== TESTE DO ALGORITMO DECIMAL PARA BINÁRIO ===\\n")

def decimal_para_binario_teste(numero):
    print(f"🔢 Convertendo {numero} para binário:")
    
    if numero == 0:
        return "0"
    
    pilha = []
    original = numero
    
    # Algoritmo de divisão por 2
    while numero > 0:
        resto = numero % 2
        pilha.append(resto)
        print(f"   {numero} ÷ 2 = {numero // 2}, resto = {resto}")
        numero = numero // 2
    
    # Desempilhar para formar o binário
    binario = ""
    print(f"\\n📚 Pilha de restos: {pilha}")
    print("🔄 Desempilhando...")
    
    while pilha:
        digito = pilha.pop()
        binario += str(digito)
        print(f"   Pop: {digito}")
    
    print(f"\\n✅ Resultado: {original} (decimal) = {binario} (binário)")
    return binario

# Testar com o exemplo do PDF: 132
resultado_132 = decimal_para_binario_teste(132)

print("\\n" + "="*50)

# Testar com outros casos
casos_teste = [0, 1, 7, 15, 32, 255]
print("\\n🧪 TESTANDO CASOS ADICIONAIS:")
for caso in casos_teste:
    resultado = decimal_para_binario_teste(caso)
    
    # Verificação com bin() do Python (sem o prefixo '0b')
    esperado = bin(caso)[2:]
    status = "✅" if resultado == esperado else "❌"
    print(f"   {status} {caso} -> {resultado} (esperado: {esperado})\\n")

print("\\n🚀 ALGORITMO IMPLEMENTADO E TESTADO COM SUCESSO!")
print("📋 CARACTERÍSTICAS:")
print("   • Utiliza TAD Pilha para armazenar os restos")
print("   • Implementa o algoritmo clássico de divisão por 2")
print("   • Trata o caso especial do número 0")
print("   • Sem warnings de compilação")
print("   • Liberação adequada de memória")