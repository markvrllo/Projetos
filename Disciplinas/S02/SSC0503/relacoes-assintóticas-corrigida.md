# Atividade 04 - Relações de Comparação Assintótica (CORRIGIDA)
**Disciplina:** Introdução à Ciência da Computação II (SSC0503)  
**Professor:** Adenilso da Silva Simão

## Funções Corretas Analisadas

1. **f₁(n) = g₁(n) = 3e** (constante, onde e é uma constante qualquer)
2. **f₂(n) = g₂(n) = 2n log n** 
3. **f₃(n) = g₃(n) = (1/a)·n² + a·n** com a = 10¹⁰
4. **f₄(n) = g₄(n) = n²**
5. **f₅(n) = g₅(n) = n + n² + n³ + n⁴**
6. **f₆(n) = g₆(n) = 3n**
7. **f₇(n) = g₇(n) = log n**
8. **f₈(n) = g₈(n) = n + log n**
9. **f₉(n) = g₉(n) = n + eⁿ**
10. **f₁₀(n) = g₁₀(n) = n² log n**

## Tabela Corrigida de Relações Assintóticas

|     | g1 | g2 | g3 | g4 | g5 | g6 | g7 | g8 | g9 | g10 |
|-----|----|----|----|----|----|----|----|----|----|----|
| **f1**  | **Θ**  | **O**  | **O**  | **O**  | **O**  | **O**  | **O**  | **O**  | **O**  | **O**   |
| **f2**  | **Ω**  | **Θ**  | **O**  | **O**  | **O**  | **Ω**  | **Ω**  | **Ω**  | **O**  | **O**   |
| **f3**  | **Ω**  | **Ω**  | **Θ**  | **Θ**  | **O**  | **Ω**  | **Ω**  | **Ω**  | **O**  | **O**   |
| **f4**  | **Ω**  | **Ω**  | **Θ**  | **Θ**  | **O**  | **Ω**  | **Ω**  | **Ω**  | **O**  | **O**   |
| **f5**  | **Ω**  | **Ω**  | **Ω**  | **Ω**  | **Θ**  | **Ω**  | **Ω**  | **Ω**  | **O**  | **Ω**   |
| **f6**  | **Ω**  | **O**  | **O**  | **O**  | **O**  | **Θ**  | **Ω**  | **Θ**  | **O**  | **O**   |
| **f7**  | **Ω**  | **O**  | **O**  | **O**  | **O**  | **O**  | **Θ**  | **O**  | **O**  | **O**   |
| **f8**  | **Ω**  | **O**  | **O**  | **O**  | **O**  | **Θ**  | **Ω**  | **Θ**  | **O**  | **O**   |
| **f9**  | **Ω**  | **Ω**  | **Ω**  | **Ω**  | **Ω**  | **Ω**  | **Ω**  | **Ω**  | **Θ**  | **Ω**   |
| **f10** | **Ω**  | **Ω**  | **Ω**  | **Ω**  | **O**  | **Ω**  | **Ω**  | **Ω**  | **O**  | **Θ**   |

## Justificativas Corrigidas

### Nova Hierarquia de Crescimento Assintótico
**Constante < log n < n < n log n < n² < n² log n < n⁴ < eⁿ**

### Análises das Funções Modificadas

#### f₃(n) = (1/a)·n² + a·n com a = 10¹⁰
- f₃(n) = (1/10¹⁰)·n² + 10¹⁰·n = n²/10¹⁰ + 10¹⁰·n
- **Análise assintótica:** Embora o coeficiente de n² seja muito pequeno (10⁻¹⁰) e o coeficiente de n seja muito grande (10¹⁰), assintoticamente o termo quadrático sempre domina
- **Ponto de cruzamento:** n²/10¹⁰ > 10¹⁰·n quando n > 10²⁰
- **Conclusão:** f₃(n) = Θ(n²) assintoticamente

#### f₅(n) = n + n² + n³ + n⁴
- O termo de maior ordem é n⁴
- Todos os outros termos são absorvidos assintoticamente
- **Conclusão:** f₅(n) = Θ(n⁴)

### Justificativas Específicas por Linha

#### f₁ (3e - constante)
- **f₁ vs g₁ (Θ):** Ambas são a mesma constante
- **f₁ vs todas as outras (O):** Constante sempre cresce mais devagar que funções não-constantes

#### f₂ (2n log n)
- **f₂ vs g₁ (Ω):** n log n > constante
- **f₂ vs g₂ (Θ):** São idênticas
- **f₂ vs g₃,g₄,g₁₀ (O):** n log n cresce mais devagar que n², n² log n
- **f₂ vs g₅ (O):** n log n cresce mais devagar que n⁴
- **f₂ vs g₆,g₇,g₈ (Ω):** n log n cresce mais rápido que n linear e log n
- **f₂ vs g₉ (O):** n log n cresce mais devagar que eⁿ

#### f₃ e f₄ (ambas Θ(n²))
- **f₃ vs g₃ e f₄ vs g₄ (Θ):** São da mesma ordem quadrática
- **f₃ vs g₄ e f₄ vs g₃ (Θ):** Ambas são Θ(n²)
- **vs funções de menor ordem (Ω):** n² domina constante, log n, n, n log n
- **vs funções de maior ordem (O):** n² cresce mais devagar que n⁴, eⁿ, n² log n

#### f₅ (n⁴)
- **f₅ vs g₅ (Θ):** São idênticas
- **f₅ vs g₉ (O):** n⁴ cresce mais devagar que eⁿ
- **f₅ vs g₁₀ (Ω):** n⁴ cresce mais rápido que n² log n
- **f₅ vs todas as menores (Ω):** n⁴ domina todas as funções polinomiais de menor grau

#### f₆ e f₈ (ambas Θ(n))
- **f₆(n) = 3n** e **f₈(n) = n + log n**
- Ambas são **Θ(n)** pois diferem apenas por constantes ou termos de menor ordem
- **f₆ vs g₆ e f₈ vs g₈ (Θ):** São da mesma ordem linear
- **f₆ vs g₈ e f₈ vs g₆ (Θ):** Ambas são lineares

#### f₇ (log n)
- **f₇ vs g₇ (Θ):** São idênticas
- **f₇ vs g₁ (Ω):** log n > constante para n suficientemente grande
- **f₇ vs todas as outras (O):** log n é dominado por todas as funções polinomiais e exponenciais

#### f₉ (n + eⁿ ≈ eⁿ)
- **f₉ vs g₉ (Θ):** São idênticas
- **f₉ vs todas as outras (Ω):** eⁿ cresce mais rápido que qualquer função polinomial

#### f₁₀ (n² log n)
- **f₁₀ vs g₁₀ (Θ):** São idênticas
- **f₁₀ vs g₃,g₄ (Ω):** n² log n > n² devido ao fator log n
- **f₁₀ vs g₅,g₉ (O):** n² log n cresce mais devagar que n⁴ e eⁿ

## Principais Correções da Análise Anterior

1. **f₃:** Agora corretamente identificada como Θ(n²) devido à análise assintótica adequada
2. **f₅:** Corrigida para Θ(n⁴) em vez de n³, pois contém o termo n⁴
3. **Relações entre f₃ e f₄:** Agora são Θ entre si por serem ambas quadráticas
4. **f₅ vs funções quadráticas:** f₅ agora domina (Ω) as funções quadráticas por ser n⁴
5. **f₁₀ vs f₃,f₄:** f₁₀ agora domina (Ω) por ter o fator log n adicional ao n²