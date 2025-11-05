# Atividade 04 - Relações de comparação assintótica

Atividade:
Quais as relações de comparação assintótica (O, Ω, Θ) das funções:


\(f1(n) = g1(n) = 3e \)

\(f2(n) = g2(n) = 2n \ log (n) \)

\(f3(n) = g3(n) = \frac{1}{10^{10}} n^2 + 10^{10}n \)

\(f4(n) = g4(n) = n² \)

\(f5(n) = g5(n) = n + n^2 + n^3 + n^4 \)

\(f6(n) = g6(n) = 3n \)

\(f7(n) = g7(n) = log (n) \)

\(f8(n) = g8(n) = n + log (n) \)

\(f9(n) = g9(n) = n + e^n \)

\(f10(n) = g10(n) = n^2 \ log (n) \)

|     |     |     |     |     |     |     |     |     |     |     |
|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
|     |  g1 |  g2 |  g3 |  g4 |  g5 |  g6 |  g7 |  g8 |  g9 | g10 |
| f1  |  Θ  |  O  |  O  |  O  |  O  |  O  |  O  |  O  |  O  |  O  |
| f2  |  Ω  |  Θ  |  O  |  O  |  O  |  Ω  |  Ω  |  Ω  |  O  |  O  |
| f3  |  Ω  |  Ω  |  Θ  |  O  |  O  |  Ω  |  Ω  |  Ω  |  O  |  O  |
| f4  |  Ω  |  Ω  |  Ω  |  Θ  |  O  |  Ω  |  Ω  |  Ω  |  O  |  O  |
| f5  |  Ω  |  Ω  |  Ω  |  Ω  |  Θ  |  Ω  |  Ω  |  Ω  |  O  |  Ω  |
| f6  |  Ω  |  O  |  O  |  O  |  O  |  Θ  |  Ω  |  Ω  |  O  |  O  |
| f7  |  Ω  |  O  |  O  |  O  |  O  |  O  |  Θ  |  O  |  O  |  O  |
| f8  |  Ω  |  O  |  O  |  O  |  O  |  O  |  Ω  |  Θ  |  O  |  O  |
| f9  |  Ω  |  Ω  |  Ω  |  Ω  |  Ω  |  Ω  |  Ω  |  Ω  |  Θ  |  Ω  |
| f10 |  Ω  |  Ω  |  Ω  |  Ω  |  O  |  Ω  |  Ω  |  Ω  |  O  |  Θ  |



\(
    3e < \log_{2}\left(x\right) < x+\log_{2}\left(x\right) < 3x < 2x\log_{2}\left(x\right) < \frac{1}{10^{10}}x^{2}+10^{10}x < x^{2} < x^{2}\log_{2}\left(x\right) < x+x^{2}+x^{3}+x^{4} < x+e^{x}
\)



\(
    f_{1} < f_{7} < f_{8} < f_{6} < f_{2} < f_{3} < f_{4} < f_{10} < f_{5} < f_{9}
\)

<!--
https://www.desmos.com/calculator

y=3e
2x\log_{2}\left(x\right)
\frac{1}{10^{10}}x^{2}+10^{10}x
x^{2}
x+x^{2}+x^{3}+x^{4}
3x
\log_{2}\left(x\right)
x+\log_{2}\left(x\right)
x+e^{x}
x^{2}\log_{2}\left(x\right)

\frac{d}{dx}:

\frac{d}{dx}[ 3e ]
\frac{d}{dx}[ 2x\log_{2}\left(x\right) ]
\frac{d}{dx}[ \frac{1}{10^{10}}x^{2}+10^{10}x ]
\frac{d}{dx}[ x^{2} ]
\frac{d}{dx}[ x+x^{2}+x^{3}+x^{4} ]
\frac{d}{dx}[ 3x ]
\frac{d}{dx}[ \log_{2}\left(x\right) ]
\frac{d}{dx}[ x+\log_{2}\left(x\right) ]
\frac{d}{dx}[ x+e^{x} ]
\frac{d}{dx}[ x^{2}\log_{2}\left(x\right) ]
-->