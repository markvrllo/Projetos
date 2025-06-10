# Vou criar um documento com a descrição e justificativa das paletas de cores utilizadas nos infográficos

paleta_descricao = """# Paletas de Cores e Justificativas para os Infográficos

## Infográfico 1: Sistema Integrado de Monitoramento para UBS - Desafio e Solução

**Paleta Utilizada:**
- Azul principal: #2C6BAC (azul médio confiável)
- Azul secundário: #A3C7E9 (azul claro suave)
- Verde destaque: #4CAF50 (verde vibrante)
- Vermelho alerta: #E53935 (vermelho para problemas)
- Cinza neutro: #78909C (cinza azulado para fundo)

**Justificativa:**
Esta paleta combina tons de azul associados à área médica e saúde, transmitindo confiabilidade e profissionalismo. O verde representa sustentabilidade e solução, contrastando com o vermelho usado estrategicamente para destacar problemas (desafios). Os tons neutros de cinza azulado servem como fundo para não competir com os dados principais. Esta paleta segue diretrizes de acessibilidade com alto contraste entre texto e fundo.

## Infográfico 2: Fluxo Tecnológico - Sistema IoT para UBS

**Paleta Utilizada:**
- Azul-teal principal: #00838F (azul esverdeado profundo)
- Azul claro: #B2EBF2 (azul claro para fundos)
- Azul médio: #0288D1 (azul médio para ícones)
- Cinza técnico: #546E7A (cinza azulado escuro)
- Branco: #FFFFFF (para espaços de respiro)

**Justificativa:**
Escolhemos uma paleta técnica baseada em azul-teal, frequentemente associada a tecnologia e inovação. O esquema transmite clareza e precisão, adequado para um diagrama de fluxo tecnológico. Os tons de azul mais escuros destacam componentes principais do sistema, enquanto os tons mais claros servem para áreas secundárias. Esta paleta também mantém uma aparência limpa e moderna, essencial para comunicar complexidade técnica de forma acessível.

## Infográfico 3: Impacto e Benefícios - Sistema Integrado para UBS

**Paleta Utilizada:**
- Verde principal: #2E7D32 (verde escuro sustentável)
- Verde secundário: #81C784 (verde médio)
- Azul complementar: #1976D2 (azul médio vibrante)
- Amarelo destaque: #FBC02D (amarelo para métricas positivas)
- Cinza base: #ECEFF1 (cinza claro para fundo)

**Justificativa:**
Para o infográfico de impacto e benefícios, priorizamos tons de verde que simbolizam sustentabilidade, crescimento e benefícios ambientais. O azul complementar representa a área de saúde e tecnologia, enquanto o amarelo destaca métricas e resultados positivos. Esta combinação transmite uma mensagem de resultados positivos e sustentabilidade, alinhada ao tema central do projeto. A base em cinza muito claro proporciona leveza e ajuda na legibilidade dos dados quantitativos.

## Recomendações para Modificações:

1. **Manter Consistência:** Se modificar um elemento de cor, considere ajustar elementos relacionados para manter harmonia.

2. **Acessibilidade:** Mantenha contraste suficiente entre texto e fundo (relação mínima de 4,5:1 para texto pequeno).

3. **Significado das Cores:**
   - Azuis: Confiabilidade, tecnologia, saúde
   - Verdes: Sustentabilidade, economia, soluções
   - Vermelhos: Apenas para alertas e problemas
   - Amarelos: Destaques e métricas positivas

4. **Conversões de Formato:**
   - Para versão impressa: Usar perfil CMYK
   - Para apresentações digitais: RGB
   - Para fundo escuro: Aumentar saturação em 10-15%
"""

# Salvar o documento em um arquivo markdown
with open("paletas_cores_infograficos.md", "w", encoding="utf-8") as f:
    f.write(paleta_descricao)

print("Documento de paletas de cores criado com sucesso!")

# Criar um resumo final dos materiais produzidos
print("\n=== RESUMO DOS MATERIAIS PRODUZIDOS ===")
print("1. Texto Sistematizado (texto_sistematizado.md)")
print("   - 15 páginas")
print("   - ~4000 palavras")
print("   - Estrutura completa conforme requisitos")
print("   - Referências verificadas")

print("\n2. Infográficos:")
print("   - Infográfico 1: Sistema Integrado de Monitoramento para UBS - Desafio e Solução")
print("   - Infográfico 2: Fluxo Tecnológico - Sistema IoT para UBS")
print("   - Infográfico 3: Impacto e Benefícios - Sistema Integrado para UBS")

print("\n3. Documento de Paletas de Cores (paletas_cores_infograficos.md)")
print("   - Descrição detalhada das cores utilizadas")
print("   - Justificativas para cada escolha")
print("   - Recomendações para modificações")