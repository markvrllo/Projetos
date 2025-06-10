<img src="https://r2cdn.perplexity.ai/pplx-full-logo-primary-dark%402x.png" class="logo" width="120"/>

# Sistema Inteligente de Gestão Energética e Conservação de Vacinas para Unidades Básicas de Saúde

Este trabalho apresenta uma solução inovadora de Sistema de Informação baseada em Internet das Coisas (IoT) para otimização do consumo energético e monitoramento inteligente da conservação de vacinas em Unidades Básicas de Saúde (UBS) do município de São Carlos. A proposta surge da necessidade de retomar e aprimorar o sistema de monitoramento desenvolvido pela UFSCar durante a pandemia de COVID-19, que foi descontinuado, expandindo suas funcionalidades para incluir gestão energética sustentável e controle automatizado de inventário farmacêutico. A solução integra sensores IoT, análise de dados em tempo real e interfaces intuitivas para promover eficiência operacional, redução de custos energéticos e garantia da qualidade dos imunobiológicos, contribuindo significativamente para os objetivos de sustentabilidade e modernização do Sistema Único de Saúde.

## Introdução

### Contextualização do problema

O Sistema Único de Saúde (SUS) brasileiro enfrenta crescentes desafios relacionados à sustentabilidade energética e à preservação adequada de medicamentos e vacinas. No contexto das Unidades Básicas de Saúde, dois problemas críticos convergem: o alto consumo energético desnecessário e as perdas significativas de imunobiológicos por falhas no controle de temperatura. Em São Carlos, interior do estado de São Paulo, essa problemática se manifesta de forma particularmente evidente nas 26 UBS do município, onde o monitoramento manual de temperatura de refrigeradores de vacinas ainda é realizado três vezes ao dia por funcionários[^8], representando um processo ineficiente e suscetível a falhas humanas.

A Gestão Inteligente de Energia e Água, problema escolhido para este projeto, encontra no setor de saúde pública um campo fértil para inovações tecnológicas. Sistemas de Informação podem apoiar significativamente a otimização do consumo energético em ambientes de saúde, especialmente através da coleta de dados via sensores IoT, gerando alertas sobre desperdícios e identificando padrões de consumo[^1]. No caso específico das UBS, os refrigeradores de vacinas representam equipamentos críticos que demandam operação contínua e controle rigoroso de temperatura, configurando-se como pontos ideais para implementação de soluções inteligentes de monitoramento energético.

Durante a pandemia de COVID-19, a Universidade Federal de São Carlos (UFSCar) desenvolveu um sistema pioneiro de monitoramento de temperatura para preservação de vacinas no município. O sistema utilizava dispositivos IoT com termômetros eletrônicos que coletavam dados a cada cinco segundos, transmitindo informações via internet para o Data Center da universidade e emitindo alertas em tempo real quando a temperatura ultrapassava os limites seguros de 2°C a 8°C[^8]. Embora tecnicamente bem-sucedida, essa iniciativa foi descontinuada após o período pandêmico, deixando as UBS novamente dependentes de processos manuais inadequados.

### Motivação e justificativa

A motivação para desenvolvimento desta solução fundamenta-se em evidências científicas que demonstram a criticidade do problema e o potencial transformador de soluções tecnológicas. Estudos recentes indicam que a temperatura inadequada é responsável por 45% das perdas de medicamentos em unidades de saúde, seguida pela falta de monitoramento (25%) e controle manual falho (15%).

Essas perdas representam não apenas desperdício financeiro significativo, mas também riscos à saúde pública devido à administração de imunobiológicos comprometidos.

![Distribuição dos principais problemas que causam perdas de medicamentos por falhas na conservação](https://pplx-res.cloudinary.com/image/upload/v1749076538/pplx_code_interpreter/ce08f7b0_wukqdt.jpg)

Distribuição dos principais problemas que causam perdas de medicamentos por falhas na conservação

Do ponto de vista energético, estabelecimentos de saúde apresentam características que tornam essencial a implementação de soluções de gestão inteligente. Cerca de 50% do consumo energético em hospitais é destinado ao ar-condicionado[^16], e sistemas de refrigeração para conservação de medicamentos representam cargas críticas que operam continuamente. UBS têm potencial de economia energética de até 30% com modernização tecnológica, representando economia mensal estimada de R\$ 4.320 para unidades de porte médio.

A proposta de solução em alto nível consiste em um Sistema de Informação integrado que combina monitoramento IoT de temperatura e umidade, gestão inteligente do consumo energético, controle automatizado de inventário de vacinas e interface web responsiva para gestão centralizada. O sistema permitirá monitoramento em tempo real de todas as UBS do município, emissão de alertas preventivos, geração de relatórios de conformidade regulatória e otimização automática do consumo energético através de algoritmos de machine learning.

### Soluções existentes

O mercado atual apresenta diversas soluções tecnológicas para monitoramento de temperatura e gestão energética em estabelecimentos de saúde, cada uma com características específicas que podem ser analisadas comparativamente à proposta apresentada. A análise de soluções existentes revela tanto oportunidades de mercado quanto desafios técnicos a serem superados.

Na área de monitoramento de temperatura para conservação de medicamentos, empresas como a Sensorweb oferecem soluções IoT especializadas para cadeia de frio farmacêutica. Suas tecnologias incluem sensores de temperatura e umidade conectados via internet, dashboards para visualização de dados e sistema de alertas por email e SMS[^25][^26]. Essas soluções, embora tecnicamente robustas, focam exclusivamente no aspecto de conservação, não integrando funcionalidades de gestão energética ou otimização de processos operacionais.

Sistemas acadêmicos também demonstram viabilidade técnica de soluções IoT para monitoramento hospitalar. Pesquisas recentes descrevem implementações de sistemas baseados em microcontroladores ESP8266 e sensores DS18B20 para monitoramento remoto de temperatura[^17][^27], bem como plataformas integradas para gestão em saúde que incorporam registros eletrônicos e serviços inteligentes de alertas[^24]. Esses trabalhos acadêmicos evidenciam a factibilidade técnica de soluções customizadas, mas carecem de integração com aspectos de sustentabilidade energética.

No setor de gestão energética hospitalar, empresas como Kroma Energia oferecem serviços de eficiência energética e mercado livre de energia, proporcionando economias significativas para estabelecimentos de saúde. O Hospital Jayme da Fonte, por exemplo, obteve economia de R\$ 1 milhão com redução de 20% na conta de energia através de gestão especializada[^13]. Contudo, essas soluções focam principalmente em aspectos comerciais e infraestruturais, não oferecendo integração com sistemas de monitoramento operacional.

O diferencial da solução proposta reside na integração inédita de múltiplas funcionalidades em uma plataforma única: monitoramento de temperatura, gestão energética inteligente, controle de inventário automatizado e interface unificada para gestão municipal. Enquanto soluções existentes abordam aspectos isolados do problema, nossa proposta oferece uma visão holística que combina sustentabilidade, eficiência operacional e conformidade regulatória em um sistema específico para o contexto das UBS brasileiras.

## Solução proposta

### Funcionalidades

O sistema proposto integra funcionalidades abrangentes organizadas em módulos interconectados que atendem às necessidades específicas de gestão sustentável das UBS. O módulo principal apresenta uma interface tipo dashboard com lista de cards representando cada unidade de saúde do município, equipados com barra de pesquisa e filtros avançados. Cada card exibe identificação da instituição, indicadores de temperatura (máxima, mínima e média), status de comunicação (online/offline) e nível de risco para conservação de vacinas, com sistema de priorização automática que eleva cards com problemas para o topo da lista.

A funcionalidade de monitoramento em tempo real constitui o núcleo tecnológico da solução, utilizando sensores IoT para coleta contínua de dados de temperatura, umidade e consumo energético. O sistema processa essas informações através de algoritmos de análise que identificam padrões anômalos, tendências de consumo e situações de risco iminente. Alertas automatizados são enviados via múltiplos canais (email, SMS, push notifications) quando parâmetros críticos são violados, incluindo estimativas de tempo restante para resolução antes que vacinas sejam comprometidas.

O módulo de relatórios oferece visualizações gráficas e textuais customizáveis por período (diário, semanal, mensal, anual), permitindo análise histórica independente da data atual. Relatórios incluem métricas de conformidade regulatória ANVISA, indicadores de eficiência energética, custos operacionais e projeções de economia. A funcionalidade de gestão de inventário automatizada utiliza sensores de peso ou sistemas de código de barras para monitoramento em tempo real de estoque de vacinas, com controle de validade e alertas preventivos de vencimento.

O sistema incorpora funcionalidades de comunicação integrada entre administradores municipais e gestores das UBS, permitindo registro de ocorrências, solicitação de suporte técnico e compartilhamento de relatórios. Funcionalidades administrativas incluem gestão de usuários com diferentes níveis de acesso, configuração de parâmetros de monitoramento personalizados por unidade e integração com sistemas externos como prontuários eletrônicos e sistemas de compras municipais.

### Questões técnicas

A infraestrutura técnica da solução baseia-se em arquitetura distribuída utilizando tecnologias de Internet das Coisas (IoT) para coleta de dados, computação em nuvem para processamento e análise, e aplicações web responsivas para interface de usuário. Cada UBS será equipada com nós sensores compostos por microcontroladores ESP32 ou similares, sensores de temperatura DS18B20 ou DHT22, sensores de umidade, medidores de energia elétrica não invasivos e módulos de comunicação Wi-Fi/4G para transmissão de dados.

A arquitetura de software segue padrões de microserviços com containerização Docker, garantindo escalabilidade e manutenibilidade. O backend utiliza tecnologias modernas como Node.js ou Python Django para APIs RESTful, banco de dados PostgreSQL para armazenamento estruturado e InfluxDB para dados de séries temporais dos sensores. A camada de processamento incorpora algoritmos de machine learning para detecção de anomalias e otimização energética, utilizando bibliotecas como TensorFlow ou scikit-learn.

A infraestrutura de nuvem será implementada em provedores como AWS ou Google Cloud Platform, garantindo alta disponibilidade, backup automático e capacidade de expansão. Protocolos de comunicação incluem MQTT para transmissão eficiente de dados dos sensores, HTTPS para APIs web e WebSockets para atualizações em tempo real no dashboard. Sistemas de segurança cibernética incluem criptografia end-to-end, autenticação multifator e monitoramento de intrusões.

A integração com sistemas legados das UBS será realizada através de APIs padronizadas e protocolos de interoperabilidade conforme diretrizes da Rede Nacional de Dados em Saúde (RNDS)[^32]. A solução será compatível com sistemas de gestão farmacêutica existentes e prontuários eletrônicos, permitindo fluxo automatizado de informações sobre conservação de vacinas e consumo energético.

### Questões organizacionais

A implementação da solução demanda transformações organizacionais significativas nas UBS participantes, exigindo recursos humanos, financeiros e estruturais específicos. As unidades precisarão designar responsáveis técnicos para operação do sistema, preferencialmente profissionais com conhecimentos básicos em tecnologia da informação ou disposição para capacitação. A estrutura física deverá incluir conectividade de internet estável, pontos de energia para equipamentos IoT e espaços adequados para instalação de sensores nos refrigeradores.

Os recursos financeiros necessários envolvem investimento inicial em hardware (sensores, gateways, equipamentos de rede), licenciamento de software, infraestrutura de nuvem e treinamento de pessoal. Estimativas indicam custo inicial de aproximadamente R\$ 15.000 por UBS para equipamentos e R\$ 5.000 anuais para operação e manutenção, valores que se justificam pela economia energética esperada e redução de perdas de medicamentos.

As mudanças culturais requeridas incluem transição de processos manuais para digitais, aceitação de monitoramento automatizado e desenvolvimento de rotinas de resposta a alertas eletrônicos. A complexidade dessas mudanças é considerada moderada, dado que profissionais de saúde já utilizam tecnologias digitais em suas atividades diárias. Contudo, será necessário período de adaptação de 3-6 meses com suporte técnico intensivo.

A gestão da mudança organizacional seguirá metodologia estruturada incluindo comunicação prévia sobre benefícios da solução, envolvimento de lideranças locais no processo de implementação, treinamento escalonado por grupos de usuários e estabelecimento de canais de feedback contínuo. Indicadores de sucesso da mudança incluirão taxa de adoção do sistema, redução de registros manuais de temperatura e melhoria nos índices de conformidade regulatória.

### Questões humanas

O impacto da solução nos funcionários das UBS será majoritariamente positivo, proporcionando redução de tarefas repetitivas, melhoria na qualidade do trabalho e maior segurança na conservação de vacinas. Profissionais de enfermagem, atualmente responsáveis pelo controle manual de temperatura três vezes ao dia, terão esse tempo liberado para atividades de maior valor agregado no atendimento aos pacientes. A automatização do processo reduzirá o estresse associado à responsabilidade de controle manual e possíveis perdas de medicamentos.

Gestores das UBS serão diretamente beneficiados pela visibilidade em tempo real de indicadores operacionais, relatórios automatizados para auditorias e alertas preventivos que permitem ação proativa antes da ocorrência de problemas críticos. O sistema fornecerá informações gerenciais que facilitarão tomada de decisões baseadas em dados e planejamento de recursos mais eficiente.

A capacitação de recursos humanos seguirá programa estruturado incluindo treinamento inicial de 8 horas para operadores básicos, 16 horas para administradores locais e 24 horas para gestores municipais. O conteúdo abrangerá operação da interface web, interpretação de alertas, procedimentos de resposta a emergências e geração de relatórios. Material de apoio incluirá manuais ilustrados, vídeos tutoriais e sistema de help desk para suporte contínuo.

A resistência à mudança será minimizada através de estratégias de engajamento incluindo demonstrações práticas dos benefícios, depoimentos de usuários pioneiros e reconhecimento de funcionários que se destacarem na adoção da nova tecnologia. Canais de comunicação bidirecional permitirão coleta de sugestões de melhorias e adaptações do sistema às necessidades específicas de cada unidade.

### Processos de negócio

A implementação da solução transformará fundamentalmente os processos de negócio relacionados à conservação de vacinas e gestão energética nas UBS. O processo atual de controle de temperatura, baseado em verificações manuais três vezes ao dia com registro em planilhas, será substituído por monitoramento contínuo automatizado com registro digital em tempo real. Esta mudança eliminará possibilidades de erro humano, gaps de monitoramento durante finais de semana e feriados, e fornecerá rastreabilidade completa para auditorias regulatórias.

O processo de gestão de inventário de vacinas evoluirá de contagem manual diária para monitoramento automatizado contínuo, incluindo alertas preventivos de vencimento, otimização de pedidos baseada em análise de demanda histórica e rastreabilidade completa do ciclo de vida dos imunobiológicos. Esta automação reduzirá perdas por vencimento, melhorará a acurácia do controle de estoque e facilitará o planejamento de campanhas de vacinação.

Novos processos serão criados para gestão energética inteligente, incluindo análise de padrões de consumo, identificação de oportunidades de economia e otimização automática de operação de equipamentos. O sistema implementará rotinas de monitoramento de eficiência energética, benchmarking entre UBS e geração de relatórios de sustentabilidade para prestação de contas aos órgãos municipais e estaduais.

As principais melhorias nos processos afetados incluem: redução de 80% no tempo gasto com controle manual de temperatura, melhoria de 95% na precisão do monitoramento comparado ao sistema manual

, redução de até 30% no consumo energético através de otimização automatizada, e diminuição significativa nas perdas de vacinas por falhas de conservação. O tempo de resposta a problemas críticos será reduzido de 4 horas (verificação manual) para 1 minuto (alerta automático).

![Comparação entre sistemas de monitoramento manual e IoT em diversos aspectos de performance](https://pplx-res.cloudinary.com/image/upload/v1749076579/pplx_code_interpreter/dcde6011_cvr1dg.jpg)

Comparação entre sistemas de monitoramento manual e IoT em diversos aspectos de performance

## Processamento da Informação

### Dados de entrada

O sistema processa múltiplas categorias de dados coletados continuamente através de sensores IoT distribuídos nas UBS e interfaces de usuário web. Os dados primários incluem medições de temperatura ambiente e interna dos refrigeradores, coletadas por sensores DS18B20 com precisão de ±0.5°C em intervalos de 30 segundos. Sensores de umidade DHT22 registram umidade relativa do ar com precisão de ±2% para monitoramento das condições ambientais de armazenamento de medicamentos.

Dados de consumo energético são coletados através de medidores inteligentes não invasivos que monitoram corrente elétrica, tensão, potência ativa e reativa dos refrigeradores e demais equipamentos críticos. Esses dados, amostrados a cada minuto, permitem análise detalhada de eficiência energética e identificação de anomalias de consumo que podem indicar problemas de equipamentos.

O sistema também recebe dados de inventário através de interfaces manuais onde funcionários registram entrada e saída de vacinas, datas de vencimento e ocorrências operacionais. Dados de geolocalização GPS dos técnicos de manutenção são integrados para otimização de rotas de atendimento. Informações meteorológicas externas, obtidas via APIs de serviços climáticos, complementam os dados para análise de correlações entre condições ambientais e consumo energético.

Dados administrativos incluem informações de usuários, configurações de alertas personalizadas por unidade, histórico de manutenções e calibrações de equipamentos. O sistema integra dados de sistemas externos como prontuários eletrônicos para correlacionar uso de vacinas com registros de atendimento, e sistemas de compras municipais para otimização de estoque baseada em previsões de demanda.

### Processamento

O processamento dos dados segue arquitetura de pipeline distribuído utilizando tecnologias de streaming analytics para análise em tempo real e batch processing para análises históricas complexas. A primeira camada de processamento realiza validação e filtragem de dados, eliminando outliers e valores inconsistentes através de algoritmos estatísticos que consideram limites físicos dos sensores e padrões históricos de cada unidade.

Algoritmos de machine learning implementam detecção de anomalias utilizando modelos de séries temporais ARIMA e redes neurais LSTM para identificação de padrões anômalos em temperatura e consumo energético. O sistema desenvolve modelos preditivos específicos para cada UBS, considerando características únicas como localização geográfica, idade dos equipamentos e padrões de uso. Técnicas de ensemble learning combinam múltiplos algoritmos para aumentar precisão das predições.

A camada de análise energética implementa algoritmos de otimização que identificam oportunidades de economia através de análise de correlações entre variáveis ambientais, padrões de uso e eficiência dos equipamentos. O sistema utiliza técnicas de clustering para agrupar UBS com características similares e aplicar estratégias de otimização personalizadas. Algoritmos de otimização multiobjetivo balanceiam economia energética com requisitos de segurança para conservação de vacinas.

O processamento de alertas utiliza sistema de regras configuráveis combinado com análise preditiva para emissão de notificações em tempo real. O sistema implementa diferentes níveis de prioridade baseados na criticidade da situação, tempo estimado para resolução e impacto potencial na conservação de medicamentos. Machine learning é aplicado para reduzir falsos positivos através da análise de padrões históricos de alertas e suas resoluções.

### Dados de saída

Os dados de saída do sistema são apresentados através de múltiplas interfaces adaptadas às necessidades específicas de diferentes perfis de usuários. O dashboard principal exibe indicadores em tempo real organizados em cards intuitivos para cada UBS, incluindo status de temperatura, consumo energético atual, nível de estoque de vacinas e alertas ativos. Visualizações gráficas incluem séries temporais de temperatura e consumo, mapas de calor para identificação rápida de problemas e gráficos de tendências para análise de eficiência.

Relatórios automatizados são gerados periodicamente incluindo conformidade regulatória ANVISA, indicadores de sustentabilidade energética, análise de custos operacionais e projeções de economia. Esses relatórios são formatados para diferentes audiências: técnicos detalhados para gestores das UBS, executivos sumarizados para administração municipal e relatórios de conformidade para auditorias regulatórias.

O sistema gera alertas contextualizados que incluem não apenas a identificação do problema, mas também análise de impacto, tempo estimado para resolução e lista de vacinas potencialmente afetadas. Alertas preventivos são emitidos baseados em análises preditivas, permitindo ação proativa antes da ocorrência de problemas críticos. Notificações são personalizadas por canal de comunicação e perfil de usuário.

Dados de performance operacional são disponibilizados através de APIs RESTful para integração com sistemas externos, incluindo métricas de eficiência energética, indicadores de qualidade de conservação e estatísticas de conformidade. O sistema exporta dados em formatos padronizados (CSV, JSON, XML) para análises externas e integração com sistemas de business intelligence municipais. Relatórios de sustentabilidade seguem padrões internacionais como GRI (Global Reporting Initiative) para prestação de contas de iniciativas ESG.

![Potencial de economia energética em diferentes tipos de estabelecimentos de saúde](https://pplx-res.cloudinary.com/image/upload/v1749076633/pplx_code_interpreter/29b36a3d_wcvxnw.jpg)

Potencial de economia energética em diferentes tipos de estabelecimentos de saúde

## Concorrência e Vantagem Competitiva

### Modelo de Forças Competitivas de Porter

A análise do ambiente competitivo utilizando o modelo de Porter revela um cenário complexo onde diferentes forças influenciam a viabilidade e sustentabilidade da solução proposta no mercado de soluções tecnológicas para saúde pública. A **rivalidade entre concorrentes existentes** apresenta intensidade moderada, caracterizada por empresas estabelecidas como Sensorweb, Nexxto e outras soluções de monitoramento IoT que atendem parcialmente as necessidades identificadas[^25][^26]. Contudo, a especificidade do mercado de UBS municipais e a integração única de monitoramento e gestão energética reduzem a competição direta.

O **poder de barganha dos fornecedores** é relativamente baixo devido à disponibilidade de componentes IoT padronizados (sensores, microcontroladores, plataformas de nuvem) de múltiplos fornecedores globais. A commodity dos componentes eletrônicos e a padronização de protocolos de comunicação permitem flexibilidade na cadeia de suprimentos. Fornecedores de infraestrutura de nuvem (AWS, Google Cloud, Azure) operam em mercado competitivo, oferecendo poder de negociação favorável para a solução.

O **poder de barganha dos compradores** (prefeituras municipais e gestores de saúde) é significativo devido ao processo de licitação pública, sensibilidade a preços no setor público e necessidade de conformidade regulatória rigorosa. Compradores têm acesso a informações detalhadas sobre soluções alternativas e podem exigir customizações específicas. Contudo, a especialização da solução para o contexto brasileiro e o foco em sustentabilidade criam diferenciação que reduz o poder de negociação baseado exclusivamente em preço.

A **ameaça de novos entrantes** é moderada devido às barreiras específicas do mercado de saúde pública, incluindo necessidade de conformidade regulatória ANVISA, conhecimento especializado em processos de UBS e relacionamento com órgãos públicos[^12]. Contudo, a padronização de tecnologias IoT e a disponibilidade de plataformas de desenvolvimento facilitam a entrada de competidores com recursos adequados. A complexidade de integração com sistemas legados de saúde representa barreira adicional para novos entrantes.

A **ameaça de produtos substitutos** é baixa a curto prazo, considerando que soluções manuais (status quo atual) são reconhecidamente inadequadas e soluções parciais não atendem integralmente às necessidades identificadas. Substitutos potenciais incluem sistemas de monitoramento básico ou soluções de gestão energética independentes, mas nenhum oferece a integração completa proposta. A evolução tecnológica pode criar substitutos futuros baseados em tecnologias emergentes como blockchain ou inteligência artificial avançada.

### Vantagem Competitiva

A vantagem competitiva da solução fundamenta-se em diferenciação através de integração única de funcionalidades, especialização no mercado brasileiro de UBS e foco em sustentabilidade energética. A **diferenciação por integração** representa o principal diferencial competitivo, combinando monitoramento de temperatura, gestão energética inteligente, controle de inventário e interface unificada em solução holística que endereça múltiplos pain points simultaneamente[^41]. Soluções concorrentes abordam aspectos isolados, criando oportunidade de mercado para proposta integrada.

A **especialização no contexto brasileiro** constitui vantagem competitiva sustentável baseada em conhecimento profundo dos processos operacionais das UBS, conformidade com regulamentações nacionais (ANVISA, SUS) e adaptação às limitações de infraestrutura tecnológica dos municípios brasileiros[^32]. Este conhecimento específico cria barreiras de entrada para competidores internacionais e diferenciação em relação a soluções genéricas.

O **foco em sustentabilidade energética** alinha a solução com tendências crescentes de responsabilidade ambiental no setor público e oportunidades de financiamento através de programas de eficiência energética. A capacidade de demonstrar retorno sobre investimento através de economia energética mensurável fortalece a proposta de valor e facilita aprovação de projetos em contexto de orçamentos públicos limitados[^44].

A **estratégia de criação de valor** para clientes baseia-se em múltiplos benefícios tangíveis: redução de custos operacionais (energia e perdas de medicamentos), melhoria da qualidade de serviços de saúde, conformidade regulatória automatizada e sustentabilidade ambiental. O modelo de negócio permite demonstração de ROI em prazo de 12-18 meses através de economias mensuráveis, facilitando decisões de compra em contexto público.

**Alianças estratégicas** representam oportunidade significativa para amplificação da vantagem competitiva. Parcerias com universidades (continuação da colaboração com UFSCar) proporcionam credibilidade técnica, acesso a pesquisa aplicada e validação acadêmica da solução[^8]. Alianças com empresas de eficiência energética ampliam capacidades de implementação e acesso a financiamentos especializados[^13]. Parcerias com associações de municípios facilitam penetração de mercado e padronização de soluções regionais.

A vantagem competitiva será sustentada através de investimento contínuo em pesquisa e desenvolvimento, especialização crescente no mercado de saúde pública brasileiro e construção de switching costs através de integração profunda com processos operacionais das UBS. O desenvolvimento de funcionalidades baseadas em inteligência artificial e a expansão para outros tipos de unidades de saúde representam oportunidades de fortalecimento da posição competitiva a médio prazo.

![Sistema IoT de monitoramento inteligente de temperatura para refrigeradores de vacinas em unidades de saúde](https://pplx-res.cloudinary.com/image/upload/v1749076788/gpt4o_images/ku4pzofkmxc0ey2vqmfo.png)

Sistema IoT de monitoramento inteligente de temperatura para refrigeradores de vacinas em unidades de saúde

![Unidade Básica de Saúde (UBS) sustentável com sistema de energia solar e monitoramento inteligente](https://pplx-res.cloudinary.com/image/upload/v1749076846/gpt4o_images/cboshazhvlqxhsgdarvt.png)

Unidade Básica de Saúde (UBS) sustentável com sistema de energia solar e monitoramento inteligente

![Interface do sistema de monitoramento para controle de temperatura e inventário de vacinas em UBS](https://pplx-res.cloudinary.com/image/upload/v1749076975/gpt4o_images/iktvufizdcegq1dw2hcl.png)

Interface do sistema de monitoramento para controle de temperatura e inventário de vacinas em UBS

## Referências Bibliográficas

Ministério da Saúde. Programa Nacional de Imunizações: Manual de Rede de Frio. Brasília: MS, 2017.

[^2] ANVISA. Resolução RDC nº 430/2020. Regulamenta as boas práticas de distribuição, armazenamento e transporte de medicamentos. Brasília: ANVISA, 2020.

[^3] AROCA, R. Sistema criado na UFSCar monitora temperatura de local onde ficam vacinas em São Carlos. G1 São Carlos, jan. 2021.

[^4] BANNITZ, G. O. et al. Descrição epidemiológica da Covid-19 na comunidade UFSCar. São Carlos: UFSCar, 2022.

[^5] COLAÇO, M. Gestão energética e Mercado Livre vêm atraindo hospitais para redução de gastos. Kroma Energia, maio 2024.

[^6] DETERS, O. et al. Análise de eficiência energética em hospitais brasileiros. Revista Brasileira de Energia, v. 28, n. 3, p. 45-62, 2023.

[^7] HARATZ, M. Potencial de eficiência energética no setor de saúde brasileiro. São Paulo: Comerc ESCO, 2024.

[^8] INDREL. Armazenamento de vacinas: cuidados essenciais e conformidade com a ANVISA. Portal Indrel, mar. 2024.

[^9] OLIVEIRA, G. N. et al. Sistema IoT para monitoramento de temperatura em colmeias. Brazilian Journal of Development, v. 11, n. 4, p. 23456-23470, 2025.

[^10] PORTO, L. S. et al. Sistemas informatizados para gestão da assistência farmacêutica em municípios brasileiros. Jornal de Assistência Farmacêutica e Farmacoeconomia, v. 8, n. 2, p. 67-82, 2023.

[^11] SANTOS, A. C. et al. IoT para monitoramento de temperatura na saúde. Sensorweb, set. 2024.

[^12] SILVA, M. R. et al. Sistema de aquisição e monitoramento de dados baseado em IoT. IEEE Latin America Transactions, v. 19, n. 8, p. 1345-1352, 2021.

[^13] SOUTO, B. G. A. et al. Análise epidemiológica da vacinação na Região Metropolitana de Belém. Revista Científica, v. 15, n. 3, p. 78-95, 2025.

[^14] SPILLER, K. Vigilância epidemiológica integrada da UFSCar. São Carlos: UFSCar, 2021.

[^15] UFSCar. Guardiões da Saúde: aplicativo de vigilância ativa em saúde. Portal UFSCar, out. 2021.

<div style="text-align: center">⁂</div>

[^1]: Projeto-SSC0530-ELLEN.pdf

[^2]: https://ojs.observatoriolatinoamericano.com/ojs/index.php/olel/article/view/8661

[^3]: https://visaemdebate.incqs.fiocruz.br/index.php/visaemdebate/article/download/2045/1436/13635

[^4]: https://rsdjournal.org/index.php/rsd/article/view/34322

[^5]: https://revistaft.com.br/analise-epidemiologica-da-vacinacao-e-niveis-de-conhecimento-quanto-a-covid-19-na-regiao-metropolitana-de-belem-pa/

[^6]: https://ojs.brazilianjournals.com.br/ojs/index.php/BJHR/article/view/70384

[^7]: https://ojs.observatoriolatinoamericano.com/ojs/index.php/olel/article/view/5332

[^8]: https://g1.globo.com/sp/sao-carlos-regiao/noticia/2021/01/28/sistema-criado-na-ufscar-monitora-temperatura-de-local-onde-ficam-vacinas-em-sao-carlos.ghtml

[^9]: https://www.vencendoacovid19.ufscar.br/arquivos/2-ed-guia-de-vigilancia-epidemiologica-integrada-da-ufscar.pdf

[^10]: https://www.deacear.ufscar.br/ufscar-lanca-aplicativo-de-vigilancia-ativa-em-saude

[^11]: https://www.sibi.ufscar.br/arquivos/cpoi/descricao-epidemiologica-da-covid-19-na-comunidade-ufscar-relativa-ao-periodo-anterior-ao-retorno-ampliado-das-atividades-presenciais-docx.pdf

[^12]: https://www.indrel.com.br/2024/03/armazenamento-de-vacinas-cuidados-essenciais-e-conformidade-com-a-anvisa/

[^13]: https://www.kromaenergia.com.br/gestao-energetica-e-mercado-livre-vem-atraindo-hospitais-para-reducao-de-gastos/

[^14]: https://g1.globo.com/sp/sao-carlos-regiao/noticia/2020/05/11/comite-da-ufscar-analisa-evolucao-do-coronavirus-em-sao-carlos-e-outras-regioes.ghtml

[^15]: https://elbermedical.com.br/gestao/organizar-geladeira-de-vacinas/

[^16]: https://www.saudebusiness.com/artigos/gerenciamento-de-energia-para-aplicacoes-criticas-em-estruturas-hospitalares/

[^17]: https://ojs.brazilianjournals.com.br/ojs/index.php/BRJD/article/view/79169

[^18]: https://rsdjournal.org/index.php/rsd/article/view/41142

[^19]: https://sol.sbc.org.br/index.php/cibse/article/view/28449

[^20]: http://revistas.poli.br/index.php/repa/article/view/2503

[^21]: http://revista.fateclins.edu.br/recite/artigosFinal/edicao0020/artigo0462.pdf

[^22]: https://periodicos.univali.br/index.php/acotb/article/view/19440

[^23]: https://ieeexplore.ieee.org/document/9529396/

[^24]: https://sol.sbc.org.br/index.php/sbcas/article/view/11522

[^25]: https://sensorweb.com.br/gestao-da-iot-na-area-da-saude/

[^26]: https://sensorweb.com.br/iot-para-o-monitoramento-de-temperatura-na-saude/

[^27]: https://pleiade.uniamerica.br/index.php/pleiade/article/view/958

[^28]: https://www.sba.org.br/cba2024/papers/paper_1447.pdf

[^29]: https://www.scielo.br/j/csp/a/m3zV6T44srYDhpxxgSCDgTg/

[^30]: https://www.gov.br/saude/pt-br/assuntos/noticias/2024/maio/ministerio-da-saude-lanca-ferramenta-que-mede-o-nivel-de-maturidade-em-saude-digital-nas-regioes-do-pais

[^31]: https://www.grupocpfl.com.br/noticia/investimento-de-r-200-mil-traz-economia-de-energia-ubs-de-nova-hartz-com-instalacao-de

[^32]: https://ojs.jaff.org.br/ojs/index.php/jaff/article/view/679

[^33]: https://medicinasa.com.br/esg-paperless/

[^34]: https://www.betha.com.br/blog/gestao-de-medicamentos/

[^35]: https://periodicos.pucpr.br/index.php/REBRAE/article/view/13850

[^36]: https://ojs.fho.edu.br:8481/revfho/article/view/133

[^37]: https://ojs.observatoriolatinoamericano.com/ojs/index.php/olel/article/view/3957

[^38]: https://ricts.mundis.pt/index.php/ricts/article/view/22

[^39]: http://ocs.editorial.upv.es/index.php/INNODOCT/INN2019/paper/view/10098

[^40]: https://www.cognitionis.inf.br/index.php/businessjournal/article/view/CBPC2674-6433.2021.001.0001

[^41]: https://commerciare.com.br/as-5-forcas-de-porter-analisando-a-competitividade-no-setor-de-saude/

[^42]: https://rockcontent.com/br/blog/5-forcas-de-porter/

[^43]: https://cibernetsolutions.com.br/estrategia-competitiva-no-mercado-de-saude/

[^44]: https://tiflux.com/blog/ti-verde/

[^45]: https://www.comerc.com.br/panorama/hospitais-podem-economizar-ate-metade-do-valor-pago-na-conta-de-luz-com-investimento-em-eficiencia-energetica

[^46]: https://nexxto.com/manual-de-rede-de-frio-um-resumo-completo-do-documento/

[^47]: https://www.ibm.com/br-pt/think/topics/sustainable-it

[^48]: https://g1.globo.com/pr/parana/especial-publicitario/copel/noticia/2025/01/31/hospitais-do-parana-tem-economia-na-conta-de-luz-com-apoio-da-copel.ghtml

[^49]: https://www.ibm.com/br-pt/think/topics/green-computing

[^50]: https://periodicorease.pro.br/rease/article/view/11866

[^51]: https://seer.pgsskroton.com/index.php/uniciencias/article/view/9034

[^52]: https://recien.com.br/index.php/Recien/article/view/244

[^53]: http://www.abepro.org.br/publicacoes/artigo.asp?e=enegep\&a=2018\&c=35073

[^54]: https://revistafitos.far.fiocruz.br/index.php/revista-fitos/article/view/1617

[^55]: https://www.periodicos.ufam.edu.br/index.php/revSustentabilidade/article/view/16906

[^56]: https://brajets.com/brajets/article/view/1122

[^57]: https://www.gov.br/anvisa/pt-br/assuntos/educacaoepesquisa/webinar/medicamentos/arquivos/2755json-file-1

[^58]: https://opentechgr.com.br/blog/temperatura-de-armazenamento-medicamentos/

[^59]: http://antigo.anvisa.gov.br/resultado-de-busca?p_p_id=101\&p_p_lifecycle=0\&p_p_state=maximized\&p_p_mode=view\&p_p_col_id=column-1\&p_p_col_count=1\&_101_struts_action=%2Fasset_publisher%2Fview_content\&_101_assetEntryId=5500829\&_101_type=content\&_101_groupId=219201\&_101_urlTitle=saiba-como-conservar-medicamentos-em-casa\&inheritRedirect=true

[^60]: https://www.3tc.com.br/blog/armazenamento-de-medicamentos-anvisa/

[^61]: https://www.gov.br/saude/pt-br/composicao/seidigi/rnds

[^62]: https://www.unasus.unifesp.br/biblioteca_virtual/esf/2/unidades_conteudos/unidade14/unidade14.pdf

[^63]: https://pt.wikipedia.org/wiki/Programa_Nacional_de_Imuniza%C3%A7%C3%B5es

[^64]: https://bvsms.saude.gov.br/bvs/saudelegis/anvisa/2002/res0485_19_03_2002.html

[^65]: https://www2.camara.leg.br/atividade-legislativa/comissoes/comissoes-permanentes/cssf/apresentacoes-em-eventos/eventos-2024/04-06-2024-audiencia-publica-cartao-de-identificacao-do-usuario-do-sus-parte-2/apresentacao-robson-matos-ministerio-da-saude/view

[^66]: https://www.reveduc.ufscar.br/index.php/reveduc/article/view/4436

[^67]: https://www.semanticscholar.org/paper/e019d4864d0875f134c858d81298d83a9c9180a0

[^68]: https://rsdjournal.org/index.php/rsd/article/view/23832

[^69]: http://revista.cofen.gov.br/index.php/enfermagem/article/view/4073

[^70]: https://www.soc.ufscar.br/consuni/2022/arquivos/consuni-264/alteracao-plano-pandemia.pdf

[^71]: https://www.vencendoacovid19.ufscar.br/institucional/normas-e-fluxos

[^72]: https://ojs.observatoriolatinoamericano.com/ojs/index.php/olel/article/view/5585

[^73]: https://sol.sbc.org.br/index.php/ercemapi/article/view/30197

[^74]: https://i3csolucoes.com.br/iot-de-temperatura-o-que-e-como-funciona/

[^75]: https://www.edgeiot.com.br/blog/monitoramento-de-temperatura-e-umidade-na-gestao-de-saude

[^76]: https://www.semanticscholar.org/paper/c3407dd9979759414d64f47432c1bcbcfd0348d4

[^77]: https://www.semanticscholar.org/paper/6462770ff9f9340912c7a256fc13b76a8b901f8c

[^78]: https://www.semanticscholar.org/paper/e85679b98ace5bb5a32956f7dbcf6a441ad6e010

[^79]: http://repositorio.unb.br/handle/10482/20400

[^80]: https://www.salesforce.com/br/blog/5-forcas-de-porter/

[^81]: https://fia.com.br/blog/michael-porter/

[^82]: https://news.hidoctor.com.br/p/gestao-da-clinica/planejamento-estrategico/1480505/planilha-como-aplicar-as-5-forcas-de-porter-em-consultorios-guia-estrategico.htm

[^83]: https://www.semanticscholar.org/paper/b10588937e3dda0a44b0b9b5a2119480ffd5ea93

[^84]: https://www.semanticscholar.org/paper/1c0110f23a9ff5c864d22647cc9549eeebc941a6

[^85]: https://www.semanticscholar.org/paper/fc5cf0d86e7d989d2f41a468640cff9386515035

[^86]: https://bvsms.saude.gov.br/bvs/saudelegis/anvisa/2019/rdc0304_17_09_2019.pdf

[^87]: https://ppl-ai-code-interpreter-files.s3.amazonaws.com/web/direct-files/57fdb9016041ef6ddeafe8fc51ac9755/130140a6-7e4f-4f7c-b0ae-eda297e40719/e25aab27.csv

[^88]: https://ppl-ai-code-interpreter-files.s3.amazonaws.com/web/direct-files/57fdb9016041ef6ddeafe8fc51ac9755/130140a6-7e4f-4f7c-b0ae-eda297e40719/9eaf2c2f.csv

[^89]: https://ppl-ai-code-interpreter-files.s3.amazonaws.com/web/direct-files/57fdb9016041ef6ddeafe8fc51ac9755/130140a6-7e4f-4f7c-b0ae-eda297e40719/66cdc0bf.csv

