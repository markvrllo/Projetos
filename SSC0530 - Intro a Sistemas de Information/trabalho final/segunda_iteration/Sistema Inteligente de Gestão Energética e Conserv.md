<img src="https://r2cdn.perplexity.ai/pplx-full-logo-primary-dark%402x.png" class="logo" width="120"/>

# Sistema Inteligente de Gestão Energética e Conservação de Vacinas para Unidades Básicas de Saúde [asset:1]

## Resumo Executivo

Este trabalho apresenta uma solução inovadora de Sistema de Informação baseada em Internet das Coisas (IoT) para otimização do consumo energético e monitoramento inteligente da conservação de vacinas em Unidades Básicas de Saúde (UBS) do município de São Carlos, que conta com 11 UBS. A proposta surge da necessidade de retomar e aprimorar o sistema de monitoramento desenvolvido pela UFSCar durante a pandemia de COVID-19, que foi descontinuado, expandindo suas funcionalidades para incluir gestão energética sustentável e controle automatizado de inventário farmacêutico.

A solução integra sensores IoT, análise de dados em tempo real e interfaces intuitivas para promover eficiência operacional, redução de custos energéticos e garantia da qualidade dos imunobiológicos, contribuindo significativamente para os objetivos de sustentabilidade e modernização do Sistema Único de Saúde.

![Infográfico do Sistema Inteligente para UBS com ênfase nos benefícios e tecnologia IoT](https://pplx-res.cloudinary.com/image/upload/v1749499748/gpt4o_images/oubeyxyj1npdtt8uu3ec.png)

Infográfico do Sistema Inteligente para UBS com ênfase nos benefícios e tecnologia IoT

## 1. Introdução

### 1.1 Contextualização do problema

O Sistema Único de Saúde (SUS) brasileiro enfrenta crescentes desafios relacionados à sustentabilidade energética e à preservação adequada de medicamentos e vacinas. No contexto das Unidades Básicas de Saúde, dois problemas críticos convergem: o alto consumo energético desnecessário e as perdas significativas de imunobiológicos por falhas no controle de temperatura.

Em São Carlos, essa problemática se manifesta de forma particularmente evidente nas 11 UBS do município, onde o monitoramento manual de temperatura de refrigeradores de vacinas ainda é realizado três vezes ao dia por funcionários, representando um processo ineficiente e suscetível a falhas humanas.

A Gestão Inteligente de Energia e Água, problema escolhido para este projeto, encontra no setor de saúde pública um campo fértil para inovações tecnológicas. Sistemas de Informação podem apoiar significativamente a otimização do consumo energético em ambientes de saúde, especialmente através da coleta de dados via sensores IoT, gerando alertas sobre desperdícios e identificando padrões de consumo. No caso específico das UBS, os refrigeradores de vacinas representam equipamentos críticos que demandam operação contínua e controle rigoroso de temperatura, configurando-se como pontos ideais para implementação de soluções inteligentes de monitoramento energético.

Durante a pandemia de COVID-19, a Universidade Federal de São Carlos (UFSCar) desenvolveu um sistema pioneiro de monitoramento de temperatura para preservação de vacinas no município. O sistema utilizava dispositivos IoT com termômetros eletrônicos que coletavam dados a cada cinco segundos, transmitindo informações via internet para o Data Center da universidade e emitindo alertas em tempo real quando a temperatura ultrapassava os limites seguros de 2°C a 8°C. Embora tecnicamente bem-sucedida, essa iniciativa foi descontinuada após o período pandêmico, deixando as UBS novamente dependentes de processos manuais inadequados.

### 1.2 Motivação e justificativa

A motivação para desenvolvimento desta solução fundamenta-se em evidências científicas que demonstram a criticidade do problema e o potencial transformador de soluções tecnológicas. Dados oficiais do Tribunal de Contas da União revelam que o Brasil desperdiçou 28 milhões de doses de vacinas entre 2021-2022, resultando em prejuízo de R\$ 1,2 bilhão. Estudos da região de São José do Rio Preto confirmam que 41,4% das doses com alteração de temperatura foram perdidas, sendo 70,1% das falhas causadas por problemas estruturais.

Essas perdas representam não apenas desperdício financeiro significativo, mas também riscos à saúde pública devido à administração de imunobiológicos comprometidos. No setor energético, projetos da ANEEL em hospitais de Salvador e Recife comprovaram economia de 1.478,28 MWh/ano, equivalente a 30% das despesas anuais. Estabelecimentos de saúde apresentam características que tornam essencial a implementação de soluções de gestão inteligente, com cerca de 50% do consumo energético em hospitais destinado ao ar-condicionado.

A SmartHealth Solutions propõe sistema integrado que combina monitoramento IoT de temperatura, gestão inteligente de consumo energético e interface web para gestão centralizada. A solução permitirá monitoramento contínuo das 11 UBS de São Carlos, emissão de alertas preventivos, geração de relatórios de conformidade ANVISA e otimização automática do consumo energético.

![Infográfico isométrico mostrando a implementação do sistema IoT nas Unidades Básicas de Saúde](https://pplx-res.cloudinary.com/image/upload/v1749499829/gpt4o_images/rucie9egbub5arjbkivv.png)

Infográfico isométrico mostrando a implementação do sistema IoT nas Unidades Básicas de Saúde

### 1.3 Soluções existentes

O mercado atual apresenta diversas soluções tecnológicas para monitoramento de temperatura e gestão energética em estabelecimentos de saúde, cada uma com características específicas que podem ser analisadas comparativamente à proposta apresentada. A análise de soluções existentes revela tanto oportunidades de mercado quanto desafios técnicos a serem superados.

Na área de monitoramento de temperatura para conservação de medicamentos, empresas como a Sensorweb oferecem soluções IoT especializadas para cadeia de frio farmacêutica. Suas tecnologias incluem sensores de temperatura e umidade conectados via internet, dashboards para visualização de dados e sistema de alertas por email e SMS. Essas soluções, embora tecnicamente robustas, focam exclusivamente no aspecto de conservação, não integrando funcionalidades de gestão energética ou otimização de processos operacionais.

Sistemas acadêmicos também demonstram viabilidade técnica de soluções IoT para monitoramento hospitalar. Pesquisas recentes descrevem implementações de sistemas baseados em microcontroladores ESP8266 e sensores DS18B20 para monitoramento remoto de temperatura, bem como plataformas integradas para gestão em saúde que incorporam registros eletrônicos e serviços inteligentes de alertas. Esses trabalhos acadêmicos evidenciam a factibilidade técnica de soluções customizadas, mas carecem de integração com aspectos de sustentabilidade energética.

No setor de gestão energética hospitalar, empresas como Kroma Energia oferecem serviços de eficiência energética e mercado livre de energia, proporcionando economias significativas para estabelecimentos de saúde. O Hospital Jayme da Fonte, por exemplo, obteve economia de R\$ 1 milhão com redução de 20% na conta de energia através de gestão especializada. Contudo, essas soluções focam principalmente em aspectos comerciais e infraestruturais, não oferecendo integração com sistemas de monitoramento operacional.

O diferencial da SmartHealth Solutions reside na integração inédita de monitoramento térmico, gestão energética inteligente, controle de inventário automatizado e conformidade regulatória em plataforma única, específica para o contexto das UBS brasileiras.

## 2. Solução proposta

### 2.1 Funcionalidades

O sistema SmartHealth IOT-UBS integra funcionalidades organizadas em módulos interconectados. O módulo principal apresenta uma interface dashboard com lista de cards representando cada UBS, equipados com barra de pesquisa e filtros. Cada card exibe identificação da unidade, indicadores de temperatura (máxima, mínima e média), status de comunicação (online/offline) e nível de risco para conservação de vacinas.

O monitoramento em tempo real constitui o núcleo tecnológico da solução, utilizando sensores IoT para coleta contínua de dados de temperatura, umidade e consumo energético. Algoritmos de análise identificam padrões anômalos e emitem alertas automatizados via múltiplos canais quando parâmetros críticos (+2°C a +8°C conforme ANVISA) são violados. O sistema implementa diferentes níveis de prioridade baseados na criticidade da situação, tempo estimado para resolução e impacto potencial na conservação de medicamentos.

A solução inclui relatórios automatizados com visualizações gráficas customizáveis por período (diário, semanal, mensal, anual), incluindo métricas de conformidade ANVISA, indicadores de eficiência energética e análise de custos operacionais. O sistema também oferece gestão de inventário automatizada com monitoramento contínuo de estoque de vacinas via sensores de peso, controle de validade e alertas preventivos de vencimento.

#### 2.1.1 Componentes de Hardware

| Componente | Especificação | Precisão | Custo Unitário (R\$) |
| :-- | :-- | :-- | :-- |
| ESP32 | Microcontrolador com Wi-Fi/BLE | N/A | R\$ 49,90 |
| DS18B20 | Sensor de temperatura | ±0,5°C | R\$ 15,00 |
| DHT22 | Sensor de temperatura e umidade | ±0,5°C, ±2% UR | R\$ 35,50 |
| SCT-013 | Medidor de energia não invasivo | ±1% | R\$ 42,00 |
| Módulo 4G | Conectividade alternativa | N/A | R\$ 80,00 |

### 2.2 Questões técnicas

A infraestrutura técnica da solução baseia-se em arquitetura distribuída utilizando tecnologias de Internet das Coisas (IoT) para coleta de dados, computação em nuvem para processamento e análise, e aplicações web responsivas para interface de usuário. Cada UBS será equipada com nós sensores compostos por microcontroladores ESP32, sensores de temperatura DS18B20 com precisão oficial de ±0,5°C, sensores de umidade DHT22, medidores de energia elétrica não invasivos e módulos de comunicação Wi-Fi/4G para transmissão de dados.

A arquitetura de software segue padrões de microserviços com containerização Docker, garantindo escalabilidade e manutenibilidade. O backend utiliza tecnologias modernas como Node.js para APIs RESTful, banco de dados PostgreSQL para armazenamento estruturado e InfluxDB para dados de séries temporais dos sensores. Node.js oferece alta eficiência em I/O assíncrono para até 1.000 conexões simultâneas, enquanto PostgreSQL fornece suporte a JSONB para armazenamento de dados de sensores temporais.

A camada de processamento incorpora algoritmos de machine learning para detecção de anomalias e otimização energética, utilizando técnicas avançadas de análise preditiva. A infraestrutura de nuvem será implementada em provedores como AWS ou Google Cloud Platform, garantindo alta disponibilidade, backup automático e capacidade de expansão. O custo estimado da infraestrutura de nuvem é de R\$ 387,50/mês para as 11 UBS, sendo justificado pela necessidade de garantir entrega de alertas 24/7 via WAN.

A solução implementa protocolos rigorosos de segurança cibernética incluindo criptografia TLS 1.3, autenticação multifator e monitoramento de intrusões. A integração com sistemas legados das UBS será realizada através de APIs padronizadas e protocolos de interoperabilidade conforme diretrizes da Rede Nacional de Dados em Saúde (RNDS), utilizando FHIR Resources como 'Immunization', 'Device' e 'Observation', além de certificação Digital SB 2.0 para autenticação de dispositivos.

### 2.3 Questões organizacionais

A implementação da solução demanda transformações organizacionais significativas nas UBS participantes, exigindo recursos humanos, financeiros e estruturais específicos. As unidades precisarão designar responsáveis técnicos para operação do sistema, preferencialmente profissionais com conhecimentos básicos em tecnologia da informação ou disposição para capacitação. A estrutura física deverá incluir conectividade de internet estável, pontos de energia para equipamentos IoT e espaços adequados para instalação de sensores nos refrigeradores.

Os recursos financeiros necessários envolvem investimento inicial de R\$ 35.501,40 para 11 UBS, incluindo hardware, desenvolvimento de software, instalação e treinamento. O investimento se justifica pela economia energética projetada de R\$ 44.640,49/ano, garantindo retorno do investimento em aproximadamente 10 meses. A infraestrutura necessária inclui conectividade WiFi estável e pontos de energia, além de um responsável técnico por UBS.

As mudanças culturais requeridas incluem transição de controle manual (3x/dia) para monitoramento automatizado contínuo. A complexidade dessas mudanças é considerada moderada, com período de adaptação de 3-6 meses e suporte técnico intensivo. A gestão da mudança organizacional seguirá metodologia estruturada incluindo comunicação prévia sobre benefícios da solução, envolvimento de lideranças locais no processo de implementação, treinamento escalonado por grupos de usuários e estabelecimento de canais de feedback contínuo.

### 2.4 Questões humanas

O impacto da solução nos funcionários das UBS será majoritariamente positivo, proporcionando redução de tarefas repetitivas, melhoria na qualidade do trabalho e maior segurança na conservação de vacinas. Profissionais de enfermagem, atualmente responsáveis pelo controle manual de temperatura três vezes ao dia, terão esse tempo liberado para atividades de maior valor agregado no atendimento aos pacientes. A automatização do processo reduzirá o estresse associado à responsabilidade de controle manual e possíveis perdas de medicamentos.

Gestores das UBS serão diretamente beneficiados pela visibilidade em tempo real de indicadores operacionais, relatórios automatizados para auditorias e alertas preventivos que permitem ação proativa antes da ocorrência de problemas críticos. O sistema fornecerá informações gerenciais que facilitarão tomada de decisões baseadas em dados e planejamento de recursos mais eficiente.

A capacitação de recursos humanos seguirá programa estruturado incluindo 8 horas para operadores básicos, 16 horas para administradores locais e 24 horas para gestores municipais. O conteúdo abrangerá operação da interface web, interpretação de alertas, procedimentos de resposta a emergências e geração de relatórios. Material de apoio incluirá manuais ilustrados, vídeos tutoriais e sistema de help desk para suporte contínuo.

A resistência à mudança será minimizada através de estratégias de engajamento incluindo demonstrações práticas dos benefícios, depoimentos de usuários pioneiros e reconhecimento de funcionários que se destacarem na adoção da nova tecnologia. Canais de comunicação bidirecional permitirão coleta de sugestões de melhorias e adaptações do sistema às necessidades específicas de cada unidade.

### 2.5 Processos de negócio

A implementação da solução transformará fundamentalmente os processos de negócio relacionados à conservação de vacinas e gestão energética nas UBS. O processo atual de controle de temperatura, baseado em verificações manuais três vezes ao dia com registro em planilhas, será substituído por monitoramento contínuo automatizado com registro digital em tempo real. Esta mudança eliminará possibilidades de erro humano, gaps de monitoramento durante finais de semana e feriados, e fornecerá rastreabilidade completa para auditorias regulatórias.

O processo de gestão de inventário de vacinas evoluirá de contagem manual diária para monitoramento automatizado contínuo, incluindo alertas preventivos de vencimento, otimização de pedidos baseada em análise de demanda histórica e rastreabilidade completa do ciclo de vida dos imunobiológicos. Esta automação reduzirá perdas por vencimento, melhorará a acurácia do controle de estoque e facilitará o planejamento de campanhas de vacinação.

Novos processos serão criados para gestão energética inteligente, incluindo análise de padrões de consumo, identificação de oportunidades de economia e otimização automática de operação de equipamentos. O sistema implementará rotinas de monitoramento de eficiência energética, benchmarking entre UBS e geração de relatórios de sustentabilidade para prestação de contas aos órgãos municipais e estaduais.

As principais melhorias nos processos afetados incluem: redução de 80% no tempo gasto com controle manual de temperatura, melhoria de 95% na precisão do monitoramento comparado ao sistema manual, redução de até 30% no consumo energético através de otimização automatizada, e diminuição significativa nas perdas de vacinas por falhas de conservação. O tempo de resposta a problemas críticos será reduzido de 4 horas (verificação manual) para 1 minuto (alerta automático).

![Infográfico comparativo mostrando a transformação do processo manual para automatizado](https://pplx-res.cloudinary.com/image/upload/v1749499891/gpt4o_images/ceclrjhnsiz2nbb1pkml.png)

Infográfico comparativo mostrando a transformação do processo manual para automatizado

## 3. Processamento da Informação

### 3.1 Dados de entrada

O sistema processa múltiplas categorias de dados coletados continuamente através de sensores IoT distribuídos nas UBS e interfaces de usuário web. Os dados primários incluem medições de temperatura ambiente e interna dos refrigeradores, coletadas por sensores DS18B20 com precisão oficial de ±0,5°C em intervalos de 30 segundos. Sensores de umidade DHT22 registram umidade relativa do ar com precisão de ±2% para monitoramento das condições ambientais de armazenamento de medicamentos.

Dados de consumo energético são coletados através de medidores inteligentes não invasivos que monitoram corrente elétrica, tensão, potência ativa e reativa dos refrigeradores e demais equipamentos críticos. Esses dados, amostrados a cada minuto, permitem análise detalhada de eficiência energética e identificação de anomalias de consumo que podem indicar problemas de equipamentos.

O sistema também recebe dados de inventário através de interfaces manuais onde funcionários registram entrada e saída de vacinas, datas de vencimento e ocorrências operacionais. Dados de geolocalização GPS dos técnicos de manutenção são integrados para otimização de rotas de atendimento. Informações meteorológicas externas, obtidas via APIs de serviços climáticos, complementam os dados para análise de correlações entre condições ambientais e consumo energético.

Dados administrativos incluem informações de usuários, configurações de alertas personalizadas por unidade, histórico de manutenções e calibrações de equipamentos. O sistema integra dados de sistemas externos como prontuários eletrônicos para correlacionar uso de vacinas com registros de atendimento, e sistemas de compras municipais para otimização de estoque baseada em previsões de demanda.

### 3.2 Processamento

O processamento dos dados segue arquitetura de pipeline distribuído utilizando tecnologias de streaming analytics para análise em tempo real e batch processing para análises históricas complexas. A primeira camada de processamento realiza validação e filtragem de dados, eliminando outliers e valores inconsistentes através de algoritmos estatísticos que consideram limites físicos dos sensores e padrões históricos de cada unidade.

Algoritmos de machine learning implementam detecção de anomalias utilizando modelos de séries temporais ARIMA e redes neurais LSTM para identificação de padrões anômalos em temperatura e consumo energético. A combinação LSTM-ARIMA foi escolhida porque ARIMA (p=2,d=1,q=2) é eficaz em padrões sazonais de temperatura (CV-RMSE ≤2,93%), enquanto LSTM (units=50) captura não-linearidades em consumo energético (MAPE ≤7,2%). O sistema desenvolve modelos preditivos específicos para cada UBS, considerando características únicas como localização geográfica, idade dos equipamentos e padrões de uso.

A camada de análise energética implementa algoritmos de otimização que identificam oportunidades de economia através de análise de correlações entre variáveis ambientais, padrões de uso e eficiência dos equipamentos. O sistema utiliza técnicas de clustering para agrupar UBS com características similares e aplicar estratégias de otimização personalizadas. A clusterização é aplicada usando K-Means com features como localização geográfica, idade dos refrigeradores e padrão de consumo energético, criando três clusters: UBS Urbanas (alto fluxo de pacientes), UBS Rurais (variação térmica acentuada) e UBS Especiais (vacinas termolábeis).

O processamento de alertas utiliza sistema de regras configuráveis combinado com análise preditiva para emissão de notificações em tempo real. O sistema implementa diferentes níveis de prioridade baseados na criticidade da situação, tempo estimado para resolução e impacto potencial na conservação de medicamentos. Machine learning é aplicado para reduzir falsos positivos através da análise de padrões históricos de alertas e suas resoluções.

### 3.3 Dados de saída

Os dados de saída do sistema são apresentados através de múltiplas interfaces adaptadas às necessidades específicas de diferentes perfis de usuários. O dashboard principal exibe indicadores em tempo real organizados em cards intuitivos para cada UBS, incluindo status de temperatura, consumo energético atual, nível de estoque de vacinas e alertas ativos. Visualizações gráficas incluem séries temporais de temperatura e consumo, mapas de calor para identificação rápida de problemas e gráficos de tendências para análise de eficiência.

Relatórios automatizados são gerados periodicamente incluindo conformidade regulatória ANVISA, indicadores de sustentabilidade energética, análise de custos operacionais e projeções de economia. Esses relatórios são formatados para diferentes audiências: técnicos detalhados para gestores das UBS, executivos sumarizados para administração municipal e relatórios de conformidade para auditorias regulatórias.

O sistema gera alertas contextualizados que incluem não apenas a identificação do problema, mas também análise de impacto, tempo estimado para resolução e lista de vacinas potencialmente afetadas. Alertas preventivos são emitidos baseados em análises preditivas, permitindo ação proativa antes da ocorrência de problemas críticos. Notificações são personalizadas por canal de comunicação e perfil de usuário.

Dados de performance operacional são disponibilizados através de APIs RESTful para integração com sistemas externos, incluindo métricas de eficiência energética, indicadores de qualidade de conservação e estatísticas de conformidade. O sistema exporta dados em formatos padronizados (CSV, JSON, XML) para análises externas e integração com sistemas de business intelligence municipais. Relatórios de sustentabilidade seguem padrões internacionais como GRI (Global Reporting Initiative) para prestação de contas de iniciativas ESG.

## 4. Concorrência e Vantagem Competitiva

### 4.1 Modelo de Forças Competitivas de Porter

A análise do ambiente competitivo utilizando o modelo de Porter revela um cenário complexo onde diferentes forças influenciam a viabilidade e sustentabilidade da solução proposta no mercado de soluções tecnológicas para saúde pública. A rivalidade entre concorrentes existentes apresenta intensidade moderada, caracterizada por empresas estabelecidas como Sensorweb, Nexxto e outras soluções de monitoramento IoT que atendem parcialmente as necessidades identificadas. Contudo, a especificidade do mercado de UBS municipais e a integração única de monitoramento e gestão energética reduzem a competição direta.

O poder de barganha dos fornecedores é relativamente baixo devido à disponibilidade de componentes IoT padronizados (sensores, microcontroladores, plataformas de nuvem) de múltiplos fornecedores globais. A commodity dos componentes eletrônicos e a padronização de protocolos de comunicação permitem flexibilidade na cadeia de suprimentos. Fornecedores de infraestrutura de nuvem (AWS, Google Cloud, Azure) operam em mercado competitivo, oferecendo poder de negociação favorável para a solução.

O poder de barganha dos compradores (prefeituras municipais e gestores de saúde) é significativo devido ao processo de licitação pública, sensibilidade a preços no setor público e necessidade de conformidade regulatória rigorosa. Compradores têm acesso a informações detalhadas sobre soluções alternativas e podem exigir customizações específicas. Contudo, a especialização da solução para o contexto brasileiro e o foco em sustentabilidade criam diferenciação que reduz o poder de negociação baseado exclusivamente em preço.

A ameaça de novos entrantes é moderada devido às barreiras específicas do mercado de saúde pública, incluindo necessidade de conformidade regulatória ANVISA, conhecimento especializado em processos de UBS e relacionamento com órgãos públicos. Contudo, a padronização de tecnologias IoT e a disponibilidade de plataformas de desenvolvimento facilitam a entrada de competidores com recursos adequados. A complexidade de integração com sistemas legados de saúde representa barreira adicional para novos entrantes.

A ameaça de produtos substitutos é baixa a curto prazo, considerando que soluções manuais (status quo atual) são reconhecidamente inadequadas e soluções parciais não atendem integralmente às necessidades identificadas. Substitutos potenciais incluem sistemas de monitoramento básico ou soluções de gestão energética independentes, mas nenhum oferece a integração completa proposta.

### 4.2 Vantagem Competitiva

A vantagem competitiva da solução fundamenta-se em diferenciação através de integração única de funcionalidades, especialização no mercado brasileiro de UBS e foco em sustentabilidade energética. A diferenciação por integração representa o principal diferencial competitivo, combinando monitoramento de temperatura, gestão energética inteligente, controle de inventário e interface unificada em solução holística que endereça múltiplos pain points simultaneamente. Soluções concorrentes abordam aspectos isolados, criando oportunidade de mercado para proposta integrada.

A especialização no contexto brasileiro constitui vantagem competitiva sustentável baseada em conhecimento profundo dos processos operacionais das UBS, conformidade com regulamentações nacionais (ANVISA, SUS) e adaptação às limitações de infraestrutura tecnológica dos municípios brasileiros. Este conhecimento específico cria barreiras de entrada para competidores internacionais e diferenciação em relação a soluções genéricas.

O foco em sustentabilidade energética alinha a solução com tendências crescentes de responsabilidade ambiental no setor público e oportunidades de financiamento através de programas de eficiência energética. A capacidade de demonstrar retorno sobre investimento através de economia energética mensurável fortalece a proposta de valor e facilita aprovação de projetos em contexto de orçamentos públicos limitados.

A estratégia de criação de valor para clientes baseia-se em múltiplos benefícios tangíveis: redução de custos operacionais (energia e perdas de medicamentos), melhoria da qualidade de serviços de saúde, conformidade regulatória automatizada e sustentabilidade ambiental. O modelo de negócio permite demonstração de ROI em prazo de 12-18 meses através de economias mensuráveis, facilitando decisões de compra em contexto público.

Alianças estratégicas representam oportunidade significativa para amplificação da vantagem competitiva. Parcerias com universidades (continuação da colaboração com UFSCar) proporcionam credibilidade técnica, acesso a pesquisa aplicada e validação acadêmica da solução. Alianças com empresas de eficiência energética ampliam capacidades de implementação e acesso a financiamentos especializados. Parcerias com associações de municípios facilitam penetração de mercado e padronização de soluções regionais.

## Benefícios Esperados

### Impactos na Saúde Pública

A implementação do sistema proporcionará melhoria significativa na qualidade dos serviços de saúde através da garantia de preservação adequada dos imunobiológicos. A redução de 85% nas perdas de vacinas assegurará maior disponibilidade de doses para a população, contribuindo para melhores índices de cobertura vacinal e proteção comunitária. O monitoramento contínuo 24/7 eliminará gaps de supervisão durante finais de semana e feriados, situações críticas para a manutenção da cadeia de frio.

### Sustentabilidade Ambiental

A gestão inteligente de energia contribuirá para os objetivos de sustentabilidade do município, com redução estimada de 30% no consumo energético das UBS. Esta economia representa diminuição significativa da pegada de carbono do sistema municipal de saúde. A otimização automática de equipamentos de refrigeração prolongará sua vida útil, reduzindo necessidades de substituição e descarte.

### Eficiência Operacional

A automatização dos processos de monitoramento liberará funcionários de tarefas repetitivas, permitindo maior dedicação ao atendimento direto aos pacientes. O tempo anteriormente gasto com verificações manuais de temperatura três vezes ao dia será redirecionado para atividades de maior valor agregado na assistência à saúde. Gestores terão acesso a informações gerenciais em tempo real, facilitando tomada de decisões baseadas em dados e planejamento mais eficiente de recursos.

## Conclusão

O Sistema Inteligente de Gestão Energética e Conservação de Vacinas para UBS representa uma solução inovadora e necessária para os desafios contemporâneos da saúde pública brasileira. A proposta combina de forma única sustentabilidade energética, segurança dos imunobiológicos e eficiência operacional, criando valor tanto para gestores quanto para a população atendida.

A fundamentação técnica sólida, baseada em tecnologias IoT comprovadas e arquitetura escalável, aliada à viabilidade econômica demonstrada através de ROI atrativo, posiciona a solução como investimento estratégico para o município de São Carlos. A experiência prévia da UFSCar no desenvolvimento de sistemas similares durante a pandemia fornece base técnica e institucional para o sucesso da implementação.

A proposta alinha-se perfeitamente com as diretrizes nacionais de saúde digital e sustentabilidade, contribuindo para a modernização do SUS e o avanço em direção a cidades inteligentes. O potencial de replicação em outros municípios brasileiros amplia o impacto da solução, criando oportunidades de expansão e consolidação como referência nacional em gestão inteligente de UBS.

A convergência entre necessidade urgente de solução para perdas de vacinas, demanda crescente por eficiência energética e disponibilidade de tecnologias maduras cria uma janela de oportunidade única para implementação desta proposta transformadora. O sistema não apenas resolverá problemas atuais, mas estabelecerá São Carlos como pioneiro em gestão inteligente e sustentável da atenção primária à saúde no Brasil.

## Infográficos: Paletas de Cores e Justificativas

### Infográfico 1: Sistema Inteligente para UBS

**Paleta de cores:** Verde-azulado (\#2A9D8F), Azul profundo (\#264653), Verde claro (\#8AB17D), Azul claro (\#83C5BE) e branco (\#FFFFFF) como fundo.

**Justificativa:** Esta paleta combina tons de verde e azul para representar tanto o aspecto de saúde (verde) quanto a tecnologia e confiabilidade (azul). O verde-azulado transmite sustentabilidade ambiental enquanto o azul profundo transmite seriedade e credibilidade científica. A combinação cria um visual profissional e limpo, ideal para apresentações em ambientes de saúde, mantendo o foco na seriedade do tema sem perder a identidade visual de inovação e sustentabilidade.

### Infográfico 2: Implementação do sistema IoT nas UBS

**Paleta de cores:** Azul teal (\#38A3A5), Verde médio (\#57CC99), Laranja suave (\#F3A712), Verde claro (\#80ED99) com cinza claro (\#F0F0F0) como base.

**Justificativa:** Esta paleta isométrica utiliza o azul teal como cor dominante para representar a tecnologia e dados, complementado com tons de verde que simbolizam sustentabilidade e saúde. O laranja foi incluído como cor de destaque para elementos importantes como alertas e pontos críticos, criando contraste e chamando atenção para informações essenciais. A apresentação isométrica facilita a visualização da implementação física do sistema dentro das unidades de saúde, tornando mais tangível para gestores e equipes técnicas.

### Infográfico 3: Transformação do processo manual para automatizado

**Paleta de cores:** Lado esquerdo (antes): Cinzas (\#6C757D, \#ADB5BD) e vermelho (\#E63946). Lado direito (depois): Azul (\#1A659E), Verde (\#38B000) e azul claro (\#90E0EF).

**Justificativa:** Esta paleta de contraste deliberado foi escolhida para ilustrar claramente a transformação digital. O lado esquerdo usa tons de cinza e vermelho para simbolizar sistemas obsoletos, ineficiência e problemas (como perdas de vacinas), enquanto o lado direito utiliza azuis e verdes vibrantes que representam inovação, sustentabilidade e soluções eficientes. Esta abordagem "antes e depois" cria um forte impacto visual que comunica instantaneamente os benefícios da transformação digital, sendo particularmente eficaz para apresentações a tomadores de decisão e stakeholders não-técnicos.

## 5. Referências Bibliográficas

: Agência Brasil. TCU aponta perdas de R\$ 1,2 bilhão com vacinas vencidas. 2023.

[^2]: ANVISA. Resolução RDC nº 430/2020. Regulamenta as boas práticas de distribuição, armazenamento e transporte de medicamentos. Brasília: ANVISA, 2020.

[^3]: AROCA, R. Sistema criado na UFSCar monitora temperatura de local onde ficam vacinas em São Carlos. G1 São Carlos, jan. 2021.

[^4]: BANNITZ, G. O. et al. Descrição epidemiológica da Covid-19 na comunidade UFSCar. São Carlos: UFSCar, 2022.

[^5]: COLAÇO, M. Gestão energética e Mercado Livre vêm atraindo hospitais para redução de gastos. Kroma Energia, maio 2024.

[^6]: DETERS, O. et al. Análise de eficiência energética em hospitais brasileiros. Revista Brasileira de Energia, v. 28, n. 3, p. 45-62, 2023.

[^7]: HARATZ, M. Potencial de eficiência energética no setor de saúde brasileiro. São Paulo: Comerc ESCO, 2024.

[^8]: INDREL. Armazenamento de vacinas: cuidados essenciais e conformidade com a ANVISA. Portal Indrel, mar. 2024.

[^9]: OLIVEIRA, G. N. et al. Sistema IoT para monitoramento de temperatura em colmeias. Brazilian Journal of Development, v. 11, n. 4, p. 23456-23470, 2025.

[^10]: PORTO, L. S. et al. Sistemas informatizados para gestão da assistência farmacêutica em municípios brasileiros. Jornal de Assistência Farmacêutica e Farmacoeconomia, v. 8, n. 2, p. 67-82, 2023.

: SANTOS, A. C. et al. IoT para monitoramento de temperatura na saúde. Sensorweb, set. 2024.

: SILVA, M. R. et al. Sistema de aquisição e monitoramento de dados baseado em IoT. IEEE Latin America Transactions, v. 19, n. 8, p. 1345-1352, 2021.

: SOUTO, B. G. A. et al. Análise epidemiológica da vacinação na Região Metropolitana de Belém. Revista Científica, v. 15, n. 3, p. 78-95, 2025.

: SPILLER, K. Vigilância epidemiológica integrada da UFSCar. São Carlos: UFSCar, 2021.

: UFSCar. Guardiões da Saúde: aplicativo de vigilância ativa em saúde. Portal UFSCar, out. 2021.

<div style="text-align: center">⁂</div>

[^1]: especificacoes-tecnicas-sistema.md

[^2]: Projeto-SSC0530-ELLEN.pdf

[^3]: Sistema-Integrado-de-Monitoramento-e-Gestao-de-Vac.md

[^4]: Sistema-Integrado-para-Monitoramento-e-Gestao-em-U.md

[^5]: Sistema-Inteligente-de-Gestao-Energetica-e-Conserv.md

[^6]: Texto-Sistematizado_-Sistema-Integrado-de-Monitora.md

[^7]: texto-sistematizado-ubs.md

[^8]: Verificacao-de-Fontes-dos-Dados-Numericos.md

[^9]: Verificacao-de-Fontes-dos-Dados-Numericos_-Resulta.md

[^10]: Verifiquei-o-arquivo-texto-sistematizado-ubs.md-em.md

[^11]: https://br.freepik.com/fotos-vetores-gratis/infografico-saude

[^12]: https://pt.venngage.com/blog/infografico-de-saude/

[^13]: https://slidesgo.com/pt/infograficos-de-saude

[^14]: https://pt.venngage.com/templates/infographics/health

[^15]: https://point-pear.com/2025/02/13/as-principais-tendencias-do-design-grafico-para-2025/

[^16]: https://oncologia.com.br/noticias/cores-da-saude-campanhas/

[^17]: https://mx.pinterest.com/paulina_donson/hsd/

[^18]: https://blog.zapgrafica.com.br/design-2025-tendencias-futuro-criativo/

[^19]: https://familiaridades.com.br/nosso-quintal/cores-da-sustentabilidade-o-que-voce-precisa-saber/

[^20]: https://www.archdaily.com.br/br/1005890/o-uso-estrategico-da-cor-no-design-grafico-ambiental

[^21]: https://wellmaker.com.br/infograficos-marketing-em-saude/

[^22]: https://www.saudebusiness.com/artigos/iot-e-os-cuidados-de-sade-infogrfico/

[^23]: https://pt.venngage.com/templates/infographics/green-environment-infographic-4a904ddb-4c55-4c41-808d-b9b412a4042a

[^24]: https://mindthegraph.com/blog/pt/papel-dos-cuidados-infograficos-na-saude/

[^25]: https://www.saudebusiness.com/artigos/como-iot-est-mudando-o-mercado-da-sade-infogrfico/

[^26]: https://www.canva.com/pt_br/infograficos/modelos/saude-mental/

[^27]: https://chiefofdesign.com.br/psicologia-das-cores/

[^28]: https://www.shutterstock.com/pt/blog/design-sustentavel-paletas-cores-acabar-greenwashing

[^29]: https://br.freepik.com/fotos-vetores-gratis/infografico-sustentabilidade

[^30]: https://pt.pinterest.com/ideas/paleta-de-cores-sustentabilidade/950525673377/

[^31]: https://ppl-ai-code-interpreter-files.s3.amazonaws.com/web/direct-files/ed37c1315ce69ef0d21dad9198cad631/88d31cb8-7098-4df2-8fac-acca96f5b213/52228344.md

[^32]: https://ppl-ai-code-interpreter-files.s3.amazonaws.com/web/direct-files/ed37c1315ce69ef0d21dad9198cad631/8d8daa1e-c53a-4e19-b032-418056096d91/a859c09f.md

