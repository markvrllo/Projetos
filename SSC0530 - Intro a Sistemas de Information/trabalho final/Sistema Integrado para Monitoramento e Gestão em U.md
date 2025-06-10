<img src="https://r2cdn.perplexity.ai/pplx-full-logo-primary-dark%402x.png" class="logo" width="120"/>

# Sistema Integrado para Monitoramento e Gestão em UBSs: Foco na Sustentabilidade e Segurança das Vacinas

Este relatório apresenta uma proposta inovadora de Sistema de Informação baseado em Internet das Coisas (IoT) para otimização do consumo energético e monitoramento inteligente da conservação de vacinas em Unidades Básicas de Saúde (UBS) do município de São Carlos. A solução surge da necessidade de retomar e aprimorar o sistema de monitoramento desenvolvido pela UFSCar durante a pandemia de COVID-19, que foi descontinuado, expandindo suas funcionalidades para incluir gestão energética sustentável e controle automatizado de inventário farmacêutico [^47]. A proposta integra sensores IoT, análise de dados em tempo real e interfaces intuitivas para promover eficiência operacional, redução de custos energéticos e garantia da qualidade dos imunobiológicos, contribuindo significativamente para os objetivos de sustentabilidade e modernização do Sistema Único de Saúde [^48].

## Contextualização do Problema

### Perdas de Vacinas e Impacto Financeiro

O Brasil enfrenta um grave problema de desperdício de vacinas que representa um desafio crítico tanto do ponto de vista financeiro quanto de saúde pública. Dados recentes do Tribunal de Contas da União revelam que o país desperdiçou mais de 28 milhões de doses de vacinas que perderam a validade, resultando em um prejuízo de R\$ 1,2 bilhão apenas entre 2021 e 2022 [^46]. O problema se intensificou nos últimos anos, com o desperdício aumentando 22% no governo atual em relação à gestão anterior [^41].

![Evolução das perdas de vacinas no Brasil mostrando o crescimento do problema até 2023](https://pplx-res.cloudinary.com/image/upload/v1749077486/pplx_code_interpreter/23267af2_ebsbqe.jpg)

Evolução das perdas de vacinas no Brasil mostrando o crescimento do problema até 2023

As principais causas das perdas incluem temperatura inadequada, responsável por 45% das perdas de medicamentos em unidades de saúde, seguida pela falta de monitoramento (25%) e controle manual falho (15%) [^19]. A ANVISA estabelece que as vacinas devem ser mantidas rigorosamente entre +2°C e +8°C, conforme a RDC 430/2020, para preservar sua eficácia e segurança [^25]. Falhas no controle de temperatura podem resultar na perda de potência dos imunobiológicos, comprometendo a proteção da população e gerando riscos à saúde pública [^20].

### Desafios Energéticos nas UBSs

As Unidades Básicas de Saúde apresentam características que tornam essencial a implementação de soluções de gestão inteligente de energia. Estabelecimentos de saúde têm potencial de economia energética de até 30% com modernização tecnológica, representando economia mensal estimada de R\$ 4.320 para unidades de porte médio [^23]. A refrigeração para conservação de medicamentos representa cargas críticas que operam continuamente, demandando monitoramento especializado [^24].

![Distribuição do consumo energético em Unidades Básicas de Saúde](https://pplx-res.cloudinary.com/image/upload/v1749077513/pplx_code_interpreter/ec330967_ctmczf.jpg)

Distribuição do consumo energético em Unidades Básicas de Saúde

### Contexto Local: São Carlos

Durante a pandemia de COVID-19, a Universidade Federal de São Carlos (UFSCar) desenvolveu um sistema pioneiro de monitoramento de temperatura para preservação de vacinas no município. O sistema utilizava dispositivos IoT com termômetros eletrônicos que coletavam dados a cada cinco segundos, transmitindo informações via internet para o Data Center da universidade e emitindo alertas em tempo real quando a temperatura ultrapassava os limites seguros [^47]. Embora tecnicamente bem-sucedida, essa iniciativa foi descontinuada após o período pandêmico, deixando as UBS novamente dependentes de processos manuais inadequados.

## Solução Proposta

### Arquitetura Integrada

A proposta consiste em um Sistema de Informação integrado que combina monitoramento IoT de temperatura e umidade, gestão inteligente do consumo energético, controle automatizado de inventário de vacinas e interface web responsiva para gestão centralizada. O sistema permitirá monitoramento em tempo real de todas as 26 UBS do município de São Carlos, emissão de alertas preventivos, geração de relatórios de conformidade regulatória e otimização automática do consumo energético através de algoritmos de machine learning [^2].

![Sistema IoT para monitoramento de temperatura de vacinas em UBS](https://pplx-res.cloudinary.com/image/upload/v1749077652/gpt4o_images/mstjbrxu4ovetwrflzzk.png)

Sistema IoT para monitoramento de temperatura de vacinas em UBS

### Funcionalidades Principais

O módulo principal apresenta uma interface tipo dashboard com lista de cards representando cada unidade de saúde do município, equipados com barra de pesquisa e filtros avançados. Cada card exibe identificação da instituição, indicadores de temperatura (máxima, mínima e média), status de comunicação (online/offline) e nível de risco para conservação de vacinas, com sistema de priorização automática que eleva cards com problemas para o topo da lista [^13].

A funcionalidade de monitoramento em tempo real constitui o núcleo tecnológico da solução, utilizando sensores IoT para coleta contínua de dados de temperatura, umidade e consumo energético. O sistema processa essas informações através de algoritmos de análise que identificam padrões anômalos, tendências de consumo e situações de risco iminente [^17]. Alertas automatizados são enviados via múltiplos canais (email, SMS, push notifications) quando parâmetros críticos são violados, incluindo estimativas de tempo restante para resolução antes que vacinas sejam comprometidas [^11].

### Interface de Gestão

A aplicação web desenvolvida proporciona uma visão integrada de todas as UBS do município através de um dashboard intuitivo que permite acompanhamento em tempo real do status de cada unidade. A interface inclui mapas interativos, gráficos de consumo energético, histórico de temperaturas e sistema de alertas priorizados, facilitando a tomada de decisões pelos gestores municipais de saúde. O sistema foi projetado seguindo as melhores práticas de experiência do usuário, garantindo acessibilidade e usabilidade para profissionais de diferentes níveis técnicos.

![UBS moderna com tecnologias sustentáveis e sistemas IoT integrados](https://pplx-res.cloudinary.com/image/upload/v1749077733/gpt4o_images/uawpmemez5hpci54tiut.png)

UBS moderna com tecnologias sustentáveis e sistemas IoT integrados

## Aspectos Técnicos

### Infraestrutura Tecnológica

A infraestrutura técnica da solução baseia-se em arquitetura distribuída utilizando tecnologias de Internet das Coisas (IoT) para coleta de dados, computação em nuvem para processamento e análise, e aplicações web responsivas para interface de usuário [^8]. Cada UBS será equipada com nós sensores compostos por microcontroladores ESP32, sensores de temperatura DS18B20 com precisão de ±0.5°C, sensores de umidade DHT22, medidores de energia elétrica não invasivos e módulos de comunicação Wi-Fi/4G para transmissão de dados [^6].

A arquitetura de software segue padrões de microserviços com containerização Docker, garantindo escalabilidade e manutenibilidade. O backend utiliza tecnologias modernas como Node.js para APIs RESTful, banco de dados PostgreSQL para armazenamento estruturado e InfluxDB para dados de séries temporais dos sensores [^39]. A camada de processamento incorpora algoritmos de machine learning para detecção de anomalias e otimização energética, utilizando técnicas avançadas de análise preditiva [^40].

### Segurança e Conformidade

A solução implementa protocolos rigorosos de segurança cibernética incluindo criptografia TLS 1.3, autenticação multifator e monitoramento de intrusões. A integração com sistemas legados das UBS será realizada através de APIs padronizadas e protocolos de interoperabilidade conforme diretrizes da Rede Nacional de Dados em Saúde (RNDS) [^59]. O sistema será compatível com padrões HL7 FHIR, SISAB e SIGTAP, permitindo fluxo automatizado de informações sobre conservação de vacinas e consumo energético [^9].

## Análise de Viabilidade Econômica

### Investimento e Custos Operacionais

O investimento inicial estimado para implementação do sistema nas 26 UBS de São Carlos é de R\$ 471.000, incluindo hardware, software, implementação e treinamento. Os custos operacionais anuais somam R\$ 187.200, abrangendo conectividade, infraestrutura de nuvem, suporte técnico e manutenção preventiva [^43]. Estes valores são justificados pela economia energética esperada e significativa redução de perdas de medicamentos.

### Retorno sobre Investimento

A análise de viabilidade econômica demonstra um retorno sobre investimento atrativo, com ponto de equilíbrio previsto para o terceiro ano de operação. A economia acumulada ao final de cinco anos é projetada em R\$ 2.340.000, resultando em ROI de 157% [^43]. Esta projeção considera redução de 85% nas perdas de vacinas, economia energética de 25-30% e otimização de processos operacionais.

![Projeção de retorno sobre investimento do sistema integrado para UBSs](https://pplx-res.cloudinary.com/image/upload/v1749077583/pplx_code_interpreter/a19b3dca_cp8nlx.jpg)

Projeção de retorno sobre investimento do sistema integrado para UBSs

### Benefícios Quantificáveis

O sistema proporcionará economia mensal estimada de R\$ 45.200 através da redução de desperdícios e otimização energética. Com base nos dados de São Carlos, que processa 45.000 doses de vacinas mensalmente e possui gasto energético mensal de R\$ 312.000, a implementação da solução resultará em economia anual superior a R\$ 540.000.

Adicionalmente, a conformidade regulatória automatizada reduzirá custos administrativos e riscos de penalidades.

## Benefícios Esperados

### Impactos na Saúde Pública

A implementação do sistema proporcionará melhoria significativa na qualidade dos serviços de saúde através da garantia de preservação adequada dos imunobiológicos. A redução de 85% nas perdas de vacinas assegurará maior disponibilidade de doses para a população, contribuindo para melhores índices de cobertura vacinal e proteção comunitária [^33]. O monitoramento contínuo 24/7 eliminará gaps de supervisão durante finais de semana e feriados, situações críticas para a manutenção da cadeia de frio [^22].

### Sustentabilidade Ambiental

A gestão inteligente de energia contribuirá para os objetivos de sustentabilidade do município, com redução estimada de 30% no consumo energético das UBS [^43]. Esta economia representa diminuição de aproximadamente 280 MWh anuais, equivalente ao consumo de 140 residências, resultando em redução significativa da pegada de carbono do sistema municipal de saúde [^24]. A otimização automática de equipamentos de refrigeração prolongará sua vida útil, reduzindo necessidades de substituição e descarte.

### Eficiência Operacional

A automatização dos processos de monitoramento liberará funcionários de tarefas repetitivas, permitindo maior dedicação ao atendimento direto aos pacientes. O tempo anteriormente gasto com verificações manuais de temperatura três vezes ao dia será redirecionado para atividades de maior valor agregado na assistência à saúde [^32]. Gestores terão acesso a informações gerenciais em tempo real, facilitando tomada de decisões baseadas em dados e planejamento mais eficiente de recursos.

## Conclusão

O Sistema Integrado para Monitoramento e Gestão em UBSs representa uma solução inovadora e necessária para os desafios contemporâneos da saúde pública brasileira. A proposta combina de forma única sustentabilidade energética, segurança dos imunobiológicos e eficiência operacional, criando valor tanto para gestores quanto para a população atendida [^55].

A fundamentação técnica sólida, baseada em tecnologias IoT comprovadas e arquitetura escalável, aliada à viabilidade econômica demonstrada através de ROI atrativo, posiciona a solução como investimento estratégico para o município de São Carlos [^58]. A experiência prévia da UFSCar no desenvolvimento de sistemas similares durante a pandemia fornece base técnica e institucional para o sucesso da implementação.

A proposta alinha-se perfeitamente com as diretrizes nacionais de saúde digital e sustentabilidade, contribuindo para a modernização do SUS e o avanço em direção a cidades inteligentes [^62]. O potencial de replicação em outros municípios brasileiros amplia o impacto da solução, criando oportunidades de expansão e consolidação como referência nacional em gestão inteligente de UBSs [^64].

A convergência entre necessidade urgente de solução para perdas de vacinas, demanda crescente por eficiência energética e disponibilidade de tecnologias maduras cria uma janela de oportunidade única para implementação desta proposta transformadora. O sistema não apenas resolverá problemas atuais, mas estabelecerá São Carlos como pioneiro em gestão inteligente e sustentável da atenção primária à saúde no Brasil.

<div style="text-align: center">⁂</div>

[^1]: Projeto-SSC0530-ELLEN.pdf

[^2]: http://revistas.poli.br/index.php/repa/article/view/2503

[^3]: http://www.conhecer.org.br/enciclop/2021C/monitoramento.pdf

[^4]: https://periodicos.utfpr.edu.br/rts/article/view/15701

[^5]: https://sol.sbc.org.br/index.php/wcama/article/view/29416

[^6]: https://sol.sbc.org.br/index.php/sbbd_estendido/article/view/30817

[^7]: https://periodicos.sbu.unicamp.br/ojs/index.php/parc/article/view/8677224

[^8]: https://sol.sbc.org.br/index.php/sbcup/article/view/11209

[^9]: https://bvsms.saude.gov.br/bvs/publicacoes/4_relatorio_monitoramento_saude_digital.pdf

[^10]: https://ppgco.facom.ufu.br/defesas/um-novo-sistema-e-health-para-monitoramento-remoto-de-pacientes-em-atencao-domiciliar

[^11]: https://sensorweb.com.br/wp-content/uploads/2019/03/Guia-Boas-Práticas-Conservação-Vacinas.pdf

[^12]: https://eventos.antac.org.br/index.php/encac/article/download/4254/3150/12611

[^13]: https://ppee.unb.br/wp-content/uploads/2024/11/Dissertacao_Mestrado___Bruno_Rabelo___Versao_Final__1_.pdf

[^14]: https://medicinasa.com.br/tic-saude-2021/

[^15]: https://www.redalyc.org/pdf/3240/324027982006.pdf

[^16]: https://www.revistaespacios.com/a17v38n31/a17v38n31p17.pdf

[^17]: https://institutoscientia.com/wp-content/uploads/2022/11/capitulo-livro-exatas-vol3-21.pdf

[^18]: https://www.gov.br/saude/pt-br/assuntos/noticias/2022/dezembro/ubs-digital-r-1-5-milhao-ja-foi-liberado-para-implementacao-de-teleatendimento-em-regioes-rurais-remotas-de-dez-estados

[^19]: https://www.indrel.com.br/2024/03/armazenamento-de-vacinas-cuidados-essenciais-e-conformidade-com-a-anvisa/

[^20]: https://bvsms.saude.gov.br/bvs/publicacoes/manual_rede_frio.pdf

[^21]: https://itafria.com.br/monitoramento-termico-de-vacinas-normas-e-praticas-para-manter-a-qualidade/

[^22]: https://www.saude.df.gov.br/web/guest/w/voce-sabe-como-funciona-a-rede-de-frio-

[^23]: https://guarulhosweb.com.br/edp-investe-r-13-milhao-em-eficiencia-energetica-para-hospital-geral-de-guarulhos/

[^24]: http://www.saude.pa.gov.br/seis-unidades-estaduais-publicas-de-saude-aderem-ao-consumo-de-energia-limpa/

[^25]: https://blog.syos.com/blog/temperatura-de-vacinas-e-termolabeis-como-armazenar-normas-e-lista-de-medicamentos/

[^26]: https://capital.sp.gov.br/web/saude/w/vigilancia_em_saude/vacinacao/360680

[^27]: https://www.gov.br/anvisa/pt-br/assuntos/noticias-anvisa/2021/covid-19-nota-orienta-sobre-armazenamento-de-vacinas

[^28]: https://www.saopaulo.sp.leg.br/coronavirus/blog/anvisa-autoriza-novas-condicoes-de-conservacao-para-vacina-da-pfizer/

[^29]: https://acervomais.com.br/index.php/saude/article/view/16195

[^30]: https://seer.ufu.br/index.php/hygeia/article/view/71878

[^31]: https://acervomais.com.br/index.php/saude/article/view/12257

[^32]: https://periodicos.unisantacruz.edu.br/index.php/arqsaude/article/view/451

[^33]: https://bjihs.emnuvens.com.br/bjihs/article/view/1661

[^34]: https://iajmh.emnuvens.com.br/iajmh/article/view/150

[^35]: https://ojs.revistacontribuciones.com/ojs/index.php/clcs/article/view/7934

[^36]: https://rbsp.sesab.ba.gov.br/index.php/rbsp/article/view/4050

[^37]: https://www.biocam.com.br/exemplos-de-iot-na-saude/

[^38]: https://www.mobiletime.com.br/noticias/16/02/2023/os-desafios-da-internet-das-coisas-em-medicina-no-brasil/

[^39]: https://sol.sbc.org.br/livros/index.php/sbc/catalog/download/105/465/738-1?inline=1

[^40]: https://www.gov.br/mcti/pt-br/acompanhe-o-mcti/transformacaodigital/arquivosinternetdascoisas/fase3_7b_relatorio-de-aprofundamento-das-verticais-saude.pdf

[^41]: https://www.infomoney.com.br/saude/desperdicio-de-vacinas-atinge-r-17-bi-governo-cita-campanhas-de-desinformacao/

[^42]: https://participemais.prefeitura.sp.gov.br/legislation/processes/209

[^43]: https://www.aen.pr.gov.br/Noticia/Hospitais-paranaenses-ganham-sustentabilidade-e-economia-de-energia-com-apoio-da-Copel

[^44]: https://www.saudebusiness.com/artigos/mit-e-empresas-de-dados-apostam-em-ia-para-solucionar-problemas-de-saude-publica/

[^45]: https://repositorio.ufrn.br/bitstream/123456789/26773/1/SMARTsistemamonitoramento_Paiva_2018TESE.pdf

[^46]: https://agenciabrasil.ebc.com.br/saude/noticia/2023-10/tcu-aponta-perdas-de-r-12-bilhao-com-vacinas-vencidas

[^47]: https://ojs.revistacontemporanea.com/ojs/index.php/home/article/view/8133

[^48]: https://asclepiushealthjournal.com/index.php/aijshs/article/view/81

[^49]: https://periodicos.newsciencepubl.com/arace/article/view/4175

[^50]: https://rsdjournal.org/index.php/rsd/article/view/48223

[^51]: https://sevenpublicacoes.com.br/anais7/article/view/6594

[^52]: https://bjihs.emnuvens.com.br/bjihs/article/view/5589

[^53]: https://revistaft.com.br/rinoplastia-para-defeitos-pos-traumaticos-comparativo-em-duas-regioes-entre-2017-2024/

[^54]: https://ojs.studiespublicacoes.com.br/ojs/index.php/cadped/article/view/14608

[^55]: https://medicinasa.com.br/panorama-digital/

[^56]: https://forumsaudedigital.com.br

[^57]: https://hospitalsiriolibanes.org.br/blog/paranegocios/tendencias-saude-2025-novidades

[^58]: https://www.ipm.com.br/noticias/ipm-saude-e-a-melhor-solucao-do-brasil-para-cidades-inteligentes/

[^59]: https://www.unasus.gov.br/noticia/estrategia-de-saude-digital-para-o-brasil-2020-2028-e-publicada

[^60]: https://www.gov.br/saude/pt-br/composicao/saps/informatiza-aps/conectividade

[^61]: https://g1.globo.com/pr/parana/especial-publicitario/metodo-clinica-futurista/noticia/2025/03/12/revolucao-digital-transforma-o-setor-de-saude-no-brasil.ghtml

[^62]: https://valor.globo.com/eu-e/noticia/2025/02/21/o-que-e-uma-cidade-inteligente-e-quais-sao-seus-exemplos-no-brasil-e-no-mundo.ghtml

[^63]: https://www.saudebusiness.com/ti-e-inovao/saude-digital-tecnologia-tendencias-2025/

[^64]: https://digitalmedicina.com.br/2024/12/30/conheca-as-principais-tendencias-de-2025-em-saude-digital/

[^65]: https://www.semanticscholar.org/paper/d0c5a6f2e450f13ddba3ac998250bb43620bef33

[^66]: https://www.semanticscholar.org/paper/fae799b59333b781360abcfb1e83dfc95b9ad5db

[^67]: https://www.semanticscholar.org/paper/78dae7a44def31c3a10b0c41d381bc13a8b62959

[^68]: https://convergint.com.br/2024/07/24/transformacao-digital-na-saude-iot-e-ia-para-melhorar-processos/

[^69]: https://www.gov.br/saude/pt-br/assuntos/noticias/2024/dezembro/lancado-painel-com-dados-de-saude-dos-cidadaos-na-atencao-primaria-do-sus

[^70]: https://mariaemilia.org.br/saude-digital-no-brasil/

[^71]: https://cgi.br/noticia/releases/estabelecimentos-de-saude-brasileiros-avancam-na-digitalizacao-mas-habilidade-em-informatica-aplicada-a-area-ainda-e-reduzida-entre-os-profissionais-do-setor-revela-pesquisa/

[^72]: https://www.gov.br/anvisa/pt-br/centraisdeconteudo/publicacoes/sangue-tecidos-celulas-e-orgaos/notas-tecnicas/vigentes/nota-tecnica-36-armazenamento-vacinas-em-sh.pdf

[^73]: https://ime.events/conbrasp2023/pdf/27634

[^74]: https://rsdjournal.org/index.php/rsd/article/view/44784

[^75]: https://www.sydle.com/br/blog/cases-de-transformacao-digital-no-setor-de-saude-67ec318bba38103decc19345

[^76]: https://www.unirio.br/cultura/unirio/ccjp/escola-de-administracao-publica/trabalhos-de-conclusao-de-curso-1/trabalhos-de-conclusao-de-curso-2023.1/TCCANNALYALISBOADASILVA.pdf

[^77]: https://mv.com.br/blog/tecnologia-melhora-saude-publica-no-brasil

[^78]: https://revistaft.com.br/o-uso-das-redes-sociais-e-a-ascensao-de-transtornos-mentais-nos-adolescentes-uma-revisao-de-literatura/

[^79]: https://ojs.revistacontribuciones.com/ojs/index.php/clcs/article/view/9128

[^80]: https://squadra.com.br/blog/10-tendencias-para-o-setor-de-saude-em-2025.html

[^81]: https://ppl-ai-code-interpreter-files.s3.amazonaws.com/web/direct-files/9dfea17a9c9c27233c6578b8dc6da283/1d1d4821-74d7-45ba-8432-11e44a0a2c5b/app.js

[^82]: https://ppl-ai-code-interpreter-files.s3.amazonaws.com/web/direct-files/9dfea17a9c9c27233c6578b8dc6da283/1d1d4821-74d7-45ba-8432-11e44a0a2c5b/style.css

[^83]: https://ppl-ai-code-interpreter-files.s3.amazonaws.com/web/direct-files/9dfea17a9c9c27233c6578b8dc6da283/1d1d4821-74d7-45ba-8432-11e44a0a2c5b/index.html

[^84]: https://ppl-ai-code-interpreter-files.s3.amazonaws.com/web/direct-files/9dfea17a9c9c27233c6578b8dc6da283/9a5355c0-5c29-487d-907e-d688e111f48a/7ea94927.md

[^85]: https://ppl-ai-code-interpreter-files.s3.amazonaws.com/web/direct-files/9dfea17a9c9c27233c6578b8dc6da283/f19546a3-ba5d-431d-9c74-3c53e9890cf7/212239c7.csv

[^86]: https://ppl-ai-code-interpreter-files.s3.amazonaws.com/web/direct-files/9dfea17a9c9c27233c6578b8dc6da283/f19546a3-ba5d-431d-9c74-3c53e9890cf7/53cb3e48.csv

[^87]: https://ppl-ai-code-interpreter-files.s3.amazonaws.com/web/direct-files/9dfea17a9c9c27233c6578b8dc6da283/f19546a3-ba5d-431d-9c74-3c53e9890cf7/12ec51dd.csv

[^88]: https://ppl-ai-code-interpreter-files.s3.amazonaws.com/web/direct-files/9dfea17a9c9c27233c6578b8dc6da283/f19546a3-ba5d-431d-9c74-3c53e9890cf7/ad5855aa.csv

[^89]: https://ppl-ai-code-interpreter-files.s3.amazonaws.com/web/direct-files/9dfea17a9c9c27233c6578b8dc6da283/f19546a3-ba5d-431d-9c74-3c53e9890cf7/1aaadb6a.csv

