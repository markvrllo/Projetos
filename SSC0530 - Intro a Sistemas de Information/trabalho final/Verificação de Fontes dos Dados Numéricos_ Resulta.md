<img src="https://r2cdn.perplexity.ai/pplx-full-logo-primary-dark%402x.png" class="logo" width="120"/>

# Verificação de Fontes dos Dados Numéricos: Resultados da Busca Sistemática

Com base nas recomendações estabelecidas para fundamentação dos dados numéricos citados no relatório anterior, foi realizada uma busca extensiva na internet para identificar fontes fidedignas que suportem as informações apresentadas [^57][^60][^68]. A investigação revelou discrepâncias significativas entre os dados originalmente citados e as evidências disponíveis em fontes verificáveis.

## Metodologia de Verificação

A verificação foi conduzida através de busca sistemática em bases de dados oficiais, incluindo documentos do Tribunal de Contas da União (TCU), Agência Nacional de Energia Elétrica (ANEEL), sites governamentais municipais e estudos acadêmicos peer-reviewed [^57][^63][^68]. Foram analisados 14 dados numéricos principais citados no relatório original, classificando-os quanto à disponibilidade de fontes verificáveis.

![Status de Verificação dos Dados Numéricos Citados no Relatório](https://pplx-res.cloudinary.com/image/upload/v1749079744/pplx_code_interpreter/aa9cd359_hd3kbe.jpg)

Status de Verificação dos Dados Numéricos Citados no Relatório

## Dados Confirmados com Fontes Fidedignas

### Perdas de Vacinas - Tribunal de Contas da União

O TCU confirma oficialmente que o Brasil desperdiçou mais de 28 milhões de doses de vacinas que perderam a validade, resultando em prejuízo de R\$ 1,2 bilhão [^57][^60]. Estes dados referem-se a contratos celebrados em 2021 e 2022, sendo 23.668.186 doses vencidas nas secretarias municipais (R\$ 1,1 bilhão), 2.296.096 doses nas secretarias estaduais (R\$ 59,2 milhões) e 2.215.000 doses no almoxarifado do Ministério da Saúde em Guarulhos [^57].

### Infraestrutura de São Carlos

A Prefeitura de São Carlos confirma oficialmente que o município possui 11 Unidades Básicas de Saúde (UBS), correção importante ao dado de 26 UBS citado anteriormente [^24][^26]. Esta informação está disponível no site oficial da Secretaria Municipal de Saúde.

### Eficiência Energética Hospitalar - ANEEL

A ANEEL documenta projetos de eficiência energética em hospitais que resultaram em economia de 1.478,28 MWh/ano, equivalente a 30% nas despesas anuais com energia elétrica [^41][^44][^63]. O investimento de R\$ 2.848.887,64 beneficiou 5 hospitais em Salvador e Recife, demonstrando a viabilidade técnica e econômica de soluções de eficiência energética em estabelecimentos de saúde.

### Perdas por Alteração de Temperatura

Estudo científico da região de São José do Rio Preto, publicado na SciELO, confirma que 41,4% das doses que sofreram alteração de temperatura foram perdidas, enquanto 58,6% foram administradas na população [^28][^31]. O estudo analisou 341 notificações de alteração de temperatura entre 2010 e 2017, sendo 70,1% causadas por motivos estruturais.

## Dados Sem Fonte Identificada

Durante a verificação sistemática, 8 dos 14 dados numéricos analisados (57,1%) não puderam ser fundamentados em fontes verificáveis.

Os principais dados sem fundamentação incluem:

### Estatísticas Específicas de Causas de Perdas

- 45% das perdas por temperatura inadequada
- 25% das perdas por falta de monitoramento
- 15% das perdas por controle manual falho

Embora essas proporções sejam mencionadas como "estudos recentes", não foi possível localizar a fonte primária específica desses percentuais.

### Projeções Financeiras do Projeto

- R\$ 471.000 de investimento inicial estimado
- 45.000 doses de vacinas processadas mensalmente em São Carlos
- R\$ 312.000 de gasto energético mensal das UBS
- ROI de 157% em cinco anos
- R\$ 540.000 de economia anual

Estes valores carecem de fundamentação em dados primários verificáveis, representando estimativas sem base documental identificável.

## Análise Comparativa de Custos

A discrepância mais significativa identificada refere-se aos custos de implementação do sistema. Com base em preços reais de componentes IoT encontrados no mercado, foi possível calcular uma estimativa fundamentada para o projeto.

![Comparação entre Estimativa de Custo Original e Custo Baseado em Fontes Reais](https://pplx-res.cloudinary.com/image/upload/v1749079810/pplx_code_interpreter/85161fdd_y6cbam.jpg)

Comparação entre Estimativa de Custo Original e Custo Baseado em Fontes Reais

### Custos Baseados em Fontes Reais

Para 11 UBS de São Carlos:

- ESP32 (microcontrolador): R\$ 180,00 × 11 = R\$ 1.980,00 [^77]
- Sensor DHT22: R\$ 32,50 × 11 = R\$ 357,50 [^72][^75]
- Componentes adicionais: R\$ 550,00
- **Total hardware: R\$ 2.887,50**
- Software/desenvolvimento: R\$ 20.000,00 (estimativa)
- Implementação/treinamento: R\$ 15.000,00 (estimativa)
- **Custo total estimado: R\$ 37.887,50**

Esta estimativa baseada em fontes verificáveis é significativamente inferior aos R\$ 471.000 citados originalmente, representando uma diferença de R\$ 433.112,50.

## Sistemas de Monitoramento Implementados

A pesquisa identificou diversos sistemas de monitoramento de temperatura já implementados ou testados no Brasil, fornecendo referências reais para validação da proposta.

### Sistema UFSCar São Carlos (2021)

O Departamento de Computação da UFSCar desenvolveu um sistema de monitoramento 24 horas para vacinas COVID-19, utilizando termômetros eletrônicos que coletavam dados a cada 5 segundos e transmitiam via internet para o Data Center da universidade [^68]. O sistema emitia alertas quando a temperatura ultrapassava 8°C por mais de 1 minuto, sendo monitorado pela Guarda Municipal através de telões. Infelizmente, esta iniciativa foi descontinuada após o período pandêmico.

### Sistema Lages-SC (2023)

A Prefeitura de Lages implementou sistema de monitoramento online baseado em IoT para câmaras frias em UBS, utilizando sensores que verificam temperatura a cada 5 minutos e enviam notificações via dispositivos móveis [^43]. O sistema foi desenvolvido pela startup Circuits de Florianópolis, demonstrando a viabilidade de soluções similares.

### Outros Sistemas Documentados

Estudos acadêmicos documentam sistemas de baixo custo utilizando ESP32 e sensores DHT22, com custos variando entre R\$ 180,00 e R\$ 400,00 por unidade [^48][^61][^65]. Estas implementações confirmam a viabilidade técnica e econômica de soluções IoT para monitoramento de temperatura em estabelecimentos de saúde.

![Resumo da Verificação de Fontes dos Dados Numéricos](https://pplx-res.cloudinary.com/image/upload/v1749080053/pplx_code_interpreter/8c1af6f9_hrren3.jpg)

Resumo da Verificação de Fontes dos Dados Numéricos

## Conclusões e Recomendações

A verificação de fontes revelou que apenas 42,9% dos dados numéricos citados no relatório original possuem fundamentação verificável em fontes fidedignas. Esta taxa de verificação é insuficiente para sustentar as conclusões e projeções apresentadas, especialmente considerando que dados financeiros críticos carecem de fundamentação.

### Dados Confirmados de Alta Confiabilidade

- Perdas de vacinas no Brasil: 28 milhões de doses e R\$ 1,2 bilhão (TCU)
- Número de UBS em São Carlos: 11 unidades (Prefeitura)
- Economia energética hospitalar: 30% possível (ANEEL)
- Perdas por alteração de temperatura: 41,4% (SciELO)


### Recomendações para Fundamentação Adequada

**Para Dados Operacionais Locais:**

1. Solicitar à Secretaria Municipal de Saúde de São Carlos dados oficiais sobre volume mensal de doses aplicadas
2. Obter da concessionária de energia informações sobre consumo real das UBS
3. Consultar relatórios de custos operacionais das unidades

**Para Projeções Financeiras:**

1. Utilizar dados de projetos similares documentados como referência
2. Obter cotações reais de fornecedores de equipamentos IoT
3. Basear cálculos em casos de estudo documentados de eficiência energética

**Para Estatísticas de Perdas:**

1. Identificar e citar fonte primária dos percentuais de causas de perdas
2. Verificar estudos específicos sobre falhas na cadeia de frio
3. Consultar relatórios técnicos oficiais da ANVISA sobre conservação de imunobiológicos

A implementação de um sistema de monitoramento de temperatura para UBS permanece tecnicamente viável e economicamente justificável, mas requer fundamentação adequada em dados verificáveis para sustentar decisões de investimento público. O exemplo do sistema UFSCar demonstra tanto a viabilidade técnica quanto a necessidade de garantir sustentabilidade a longo prazo de tais iniciativas.

<div style="text-align: center">⁂</div>

[^1]: http://srvapp2s.urisan.tche.br/seer/index.php/gesto/article/view/1765

[^2]: https://ojs.brazilianjournals.com.br/ojs/index.php/BJHR/article/view/59914

[^3]: https://editora.univassouras.edu.br/index.php/RPU/article/view/4502

[^4]: http://www.scielo.br/scielo.php?script=sci_arttext\&pid=S1414-462X2013000400010\&lng=pt\&tlng=pt

[^5]: https://ojs.uel.br/revistas/uel/index.php/seminabio/article/view/47767

[^6]: https://www.bjstd.org/revista/article/view/1418

[^7]: https://www.saocarlosagora.com.br/saude/1618-doses-de-imunizantes-sao-aplicados-em-plantao-de-vacinacao/181255/

[^8]: http://saocarlos.sp.gov.br/index.php/noticias-2024/179063-sao-carlos-recebe-nova-vacina-para-imunizacao-de-rotina-contra-a-covid-19.html

[^9]: https://saocarlosnotoque.com/sabado-tera-plantao-de-vacinacao-em-sao-carlos/

[^10]: https://www.saocarlosagora.com.br/saude/unidades-de-saude-de-sao-carlos-estao-aplicando-a-vacina-bivalente/164870/

[^11]: https://cetesb.sp.gov.br/wp-content/uploads/sites/4/2015/02/ubs-interior-2012.pdf

[^12]: https://www.saocarlosagora.com.br/cidade/sao-carlos-recebe-novas-doses-de-vacina-contra-covid-19/177666/

[^13]: https://saocarlosemrede.com.br/saude-de-sao-carlos/

[^14]: https://saocarlosemrede.com.br/covid-19-13/

[^15]: https://www.saocarlosagora.com.br/editorias/coronavirus/covid-19-vacina-bivalente-comeca-a-ser-aplicada-nesta-terca-feira/156166/

[^16]: https://www.prefeitura.sp.gov.br/cidade/secretarias/upload/saude/2024_02_09_Relacao_UBS_Cidade_Sao_Paulo.pdf

[^17]: https://g1.globo.com/sp/sao-carlos-regiao/noticia/2024/05/03/vacina-contra-gripe-sao-carlos-e-regiao-liberam-doses-para-todos-os-publicos-veja-locais-e-horarios.ghtml

[^18]: https://periodicos.uniarp.edu.br/index.php/visao/article/view/3633

[^19]: https://bjihs.emnuvens.com.br/bjihs/article/view/4917

[^20]: https://periodicos.newsciencepubl.com/RABFV/article/view/1698

[^21]: http://www.scielo.br/scielo.php?script=sci_arttext\&pid=S0100-55022025000100203\&tlng=pt

[^22]: https://hrj.emnuvens.com.br/hrj/article/view/662

[^23]: https://ojs.revistacontribuciones.com/ojs/index.php/clcs/article/view/1942

[^24]: http://www.saocarlos.sp.gov.br/index.php/saude/115420-unidades-de-saude.html

[^25]: https://www.prefeitura.sp.gov.br/cidade/secretarias/upload/2024_05_08_Relacao_da_UBS_da_Cidade_de_Sao_Paulo.pdf

[^26]: https://g1.globo.com/sp/sao-carlos-regiao/noticia/2025/03/31/com-alta-da-dengue-sao-carlos-tera-quatro-unidades-de-saude-atendendo-ate-20h-veja-locais.ghtml

[^27]: https://www.santamaria.rs.gov.br/noticias/29109-com-investimento-de-r--3-milhoes-prefeitura-entrega-nova-edificacao-da-ubs-sao-carlos-para-servidores

[^28]: https://www.scielo.br/j/reben/a/4JjkNN4G5wF4Tcn3fsrwVCG/?format=pdf\&lang=pt

[^29]: https://www.estadao.com.br/blogs/blog/wp-content/uploads/sites/554/2019/07/Endereço-das-UBSs-de-São-Paulo.pdf

[^30]: https://idonline.emnuvens.com.br/id/article/download/572/782/1683

[^31]: https://www.scielo.br/j/reben/a/4JjkNN4G5wF4Tcn3fsrwVCG/?lang=pt

[^32]: https://revistaft.com.br/prevalencia-e-perfil-de-bacterias-resistentes-em-superficies-inanimadas-em-uma-unidade-basica-de-saude-em-cascavel-no-parana/

[^33]: https://ojs.focopublicacoes.com.br/foco/article/view/4324

[^34]: https://bjihs.emnuvens.com.br/bjihs/article/view/2962

[^35]: https://ojs.cuadernoseducacion.com/ojs/index.php/ced/article/view/7091

[^36]: https://revistaft.com.br/desafios-para-a-integralizacao-masculina-na-atencao-primaria-relato-de-experiencia-em-uma-unidade-basica-de-saude-no-municipio-de-altamira-para/

[^37]: https://periodicos.baraodemaua.br/index.php/cse/article/view/806

[^38]: https://revista.cromg.org.br/index.php/rcromg/article/view/330

[^39]: https://www.e-publicacoes.uerj.br/sustinere/article/view/76447

[^40]: https://www.apucarana.pr.gov.br/site/unidades-basicas-de-saude-ubs/

[^41]: https://g1.globo.com/economia/noticia/2022/08/30/aneel-aprova-plano-para-modernizar-rede-e-economizar-energia-eletrica-de-117-hospitais-publicos.ghtml

[^42]: https://www.portalsolar.com.br/como-calcular-o-consumo-de-energia-em-kwh

[^43]: https://www.saudelages.sc.gov.br/noticia/view?id=1399

[^44]: https://www.gov.br/aneel/pt-br/assuntos/noticias/2022/projeto-de-eficiencia-energetica-em-hospitais-para-enfrentamento-da-covid-19-e-concluido

[^45]: https://www.prefeitura.sp.gov.br/cidade/secretarias/upload/arquivos/secretarias/meio_ambiente/eixo_eco_economia/curso/Hospital_Conceicao.pdf

[^46]: https://www.curitiba.pr.gov.br/servicos/atendimento-pelo-sus-unidades-de-saude/242

[^47]: https://ieeexplore.ieee.org/document/9529396/

[^48]: https://focopublicacoes.com.br/foco/article/view/994

[^49]: https://scielo.pt/scielo.php?script=sci_arttext\&pid=S1646-98952024000300058\&lng=pt\&nrm=iso\&tlng=pt

[^50]: http://revistas.ufpr.br/rber/article/view/48172

[^51]: https://www.semanticscholar.org/paper/68d5ce17ca1ace17cdc60d0c5e1fdee80dcdcc21

[^52]: http://periodicos.ifsul.edu.br/index.php/educarmais/article/view/1614

[^53]: https://pecepoli.com.br/m_files/00074269_000444_monografia01.pdf

[^54]: https://ric.cps.sp.gov.br/bitstream/123456789/14564/1/Monitoramento de dispositivo para transporte de vacinas utilizando IoT Renan Figueiredo Chipranski MECATRONICA.pdf

[^55]: https://ppee.unb.br/wp-content/uploads/2024/11/Dissertacao_Mestrado___Bruno_Rabelo___Versao_Final__1_.pdf

[^56]: https://ciaca-conf.org/wp-content/uploads/2022/11/2_CIAWI2022_PT_F_042.pdf

[^57]: https://agenciabrasil.ebc.com.br/saude/noticia/2023-10/tcu-aponta-perdas-de-r-12-bilhao-com-vacinas-vencidas

[^58]: https://lume.ufrgs.br/bitstream/10183/211227/1/001115135.pdf

[^59]: https://institutoscientia.com/wp-content/uploads/2022/11/capitulo-livro-exatas-vol3-21.pdf

[^60]: https://veja.abril.com.br/saude/governo-desperdicou-r-12-bilhao-com-vacinas-vencidas-segundo-tcu/

[^61]: https://ppee.unb.br/wp-content/uploads/2023/01/SISTEMA-DE-BAIXO-CUSTO.pdf

[^62]: https://dspace.mackenzie.br/bitstreams/fdb2be1c-8fa1-4947-8434-60980b29909d/download

[^63]: https://www.gov.br/aneel/pt-br/assuntos/noticias/2022/aneel-aprova-14-propostas-de-projetos-de-eficiencia-energetica-em-hospitais-publicos-ou-certificados-pelo-cebas

[^64]: https://noticias.uol.com.br/colunas/carolina-brigido/2023/10/18/brasil-teve-prejuizo-de-r-12-bi-com-vacinas-vencidas-na-pandemia-diz-tcu.htm

[^65]: https://embarcados.com.br/estacao-de-medicao-de-temperatura-com-arduino-e-iot-configuracao/

[^66]: https://www.hexgreen.com.br/sistema-monitoramento-temperatura-clinicas-vacina

[^67]: https://ric.cps.sp.gov.br/bitstream/123456789/23272/1/informaticanegocios_2024_1_filipecostaule_iotcomoapoioametricasemonitoramentodetemperaturaemref.pdf

[^68]: https://g1.globo.com/sp/sao-carlos-regiao/noticia/2021/01/28/sistema-criado-na-ufscar-monitora-temperatura-de-local-onde-ficam-vacinas-em-sao-carlos.ghtml

[^69]: https://www.vencendoacovid19.ufscar.br/arquivos/boletim-epidemiologico-ufscar-5.pdf/@@download/file/Boletim epidemiológico UFSCar 5.pdf

[^70]: https://g1.globo.com/sp/sao-carlos-regiao/noticia/2021/10/25/covid-19-ufscar-adere-ao-uso-de-aplicativo-para-monitorar-estado-de-saude-dos-alunos.ghtml

[^71]: https://g1.globo.com/sp/sao-carlos-regiao/noticia/2021/01/18/ufscar-tem-laboratorio-para-desenvolver-vacinas-entenda-a-historia-e-criacao-de-imunizantes.ghtml

[^72]: https://teknimasmquinas.mercadoshops.com.br/MLB-1660842652-sensor-de-umidade-e-temperatura-dht22-am2302-esp32-esp8266-_JM

[^73]: https://www.soc.ufscar.br/consuni/2022/arquivos/consuni-264/alteracao-plano-pandemia.pdf

[^74]: https://g1.globo.com/sp/sao-carlos-regiao/edicao/2021/01/28/videos-reveja-as-reportagens-do-eptv1-desta-quinta-feira-28-de-janeiro.ghtml

[^75]: https://www.eletrogate.com/sensor-de-umidade-e-temperatura-dht22-am2302

[^76]: https://www.autocorerobotica.com.br/kit-controle-de-temperatura-esp32

[^77]: https://riu.ufam.edu.br/bitstream/prefix/6097/2/TCC_AbdelChabi.pdf

[^78]: https://shopee.com.br/DS18B20-Sensor-de-Temperatura-Prova-D-água-Para-Arduino-NodeMcu-ESP32-8266-Raspberry-i.318953938.7991501905

[^79]: https://files.abrhidro.org.br/Eventos/Trabalhos/142/XXIV-SBRH0877-1-20210630-183824.pdf

[^80]: https://www.usinainfo.com.br/blog/projeto-esp32-com-display-oled-e-sensor-am2302-dht22-medindo-temperatura-e-umidade/

[^81]: https://www.sermaker.com/produto/placa-esp32-wifi-com-sensor-de-umidade-e-temperatura-do-solo-e-dht11.html

[^82]: https://www.semanticscholar.org/paper/a4ef88688872f100473677debafcaee6edce92e3

[^83]: https://www.semanticscholar.org/paper/3ce42ef7d0de507acdb422a180735cf8e34b9170

[^84]: https://revista.fmc.br/ojs/index.php/anais/article/view/920

[^85]: http://www.scielo.br/scielo.php?script=sci_arttext\&pid=S0034-89101990000100009\&lng=pt\&tlng=pt

[^86]: https://www.instagram.com/p/DJ3vKUTNUfD/

[^87]: https://www.acidadeon.com/saocarlos/cotidiano/sao-carlos-realiza-neste-sabado-o-primeiro-dia-d-de-vacinacao-para-criancas-e-adolescentes/

[^88]: http://www.saocarlos.sp.gov.br/index.php/noticias-2024/177860-vacina-covid-passa-a-ser-obrigatorio.html

[^89]: https://regiaoemdestake.com.br/2025/03/07/secretaria-de-saude-de-sao-carlos-alerta-para-baixa-adesao-a-vacina-contra-dengue/

[^90]: https://www.prefeitura.poa.br/sms/noticias/primeiro-dia-da-operacao-inverno-em-unidades-de-saude-tem-mais-de-770-vacinas

[^91]: https://periodicos.utfpr.edu.br/rbqv/article/view/11650

[^92]: https://www.semanticscholar.org/paper/e6d94a12f0c6cd104934457241a765f192d9801c

[^93]: https://www.semanticscholar.org/paper/8b2deb2805ade7d6211fe9b7e485f542d9baaee5

[^94]: http://www.saocarlos.sp.gov.br/index.php/saude/115416-telefones-saude.html

[^95]: https://saocarlosemrede.com.br/ubs-de-santa-felicia-tem-novos-numeros-de-telefone/

[^96]: https://ojs.revistacontemporanea.com/ojs/index.php/home/article/view/3947

[^97]: https://ojs.brazilianjournals.com.br/ojs/index.php/BJHR/article/view/73084

[^98]: https://saocarlos.atende.net/cidadao/pagina/unidade-basica-de-saude-vereador-luis-arsenio-sander

[^99]: https://prefeitura.poa.br/carta-de-servicos/atencao-primaria-saude-unidades-de-saude

[^100]: https://saocarlos.atende.net

[^101]: https://www.semanticscholar.org/paper/f8248230ffd9f2ad788919b559c757791b4c4677

[^102]: https://www.semanticscholar.org/paper/5f20570816ec642c42cab9d35e2efdb36eda32b1

[^103]: https://www.semanticscholar.org/paper/778f53f5008c7518b81050428c399ff40ce4c677

[^104]: https://sol.sbc.org.br/index.php/semish/article/view/3432

[^105]: https://www.smartprojectsbrasil.com.br/sensor-de-umidade-e-temperatura-am2302-dht22

[^106]: https://sol.sbc.org.br/index.php/eripi/article/view/5173

[^107]: https://www.ufscar.br/covid19

[^108]: https://repositorio.ufsc.br/xmlui/bitstream/handle/123456789/263946/PEED1793-D.pdf?sequence=-1\&isAllowed=y

[^109]: https://ppl-ai-code-interpreter-files.s3.amazonaws.com/web/direct-files/36aa9d49608beadf9388dde12f1c2779/67dee404-676b-4b20-a662-312609d72b71/5bfb028e.csv

[^110]: https://ppl-ai-code-interpreter-files.s3.amazonaws.com/web/direct-files/36aa9d49608beadf9388dde12f1c2779/2156c8c2-6c21-4cb1-925e-6cc095ee8633/8127c2e1.csv

[^111]: https://ppl-ai-code-interpreter-files.s3.amazonaws.com/web/direct-files/36aa9d49608beadf9388dde12f1c2779/023484da-ce92-4570-9881-19e8719af5d8/bdfd354f.csv

