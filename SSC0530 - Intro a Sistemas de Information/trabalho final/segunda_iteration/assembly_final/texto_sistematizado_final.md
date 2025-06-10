# Sistema Inteligente de Gestão Energética e Conservação de Vacinas para Unidades Básicas de Saúde

## Resumo Executivo

Este trabalho apresenta uma solução inovadora de Sistema de Informação baseada em Internet das Coisas (IoT) para otimização do consumo energético e monitoramento inteligente da conservação de vacinas em Unidades Básicas de Saúde (UBS) do município de São Carlos, que possui 11 Unidades Básicas de Saúde (UBS). A proposta surge da necessidade de retomar e aprimorar o sistema de monitoramento desenvolvido pela UFSCar durante a pandemia de COVID-19, que foi descontinuado, expandindo suas funcionalidades para incluir gestão energética sustentável e controle automatizado de inventário farmacêutico. A solução integra sensores IoT, análise de dados em tempo real e interfaces intuitivas para promover eficiência operacional, redução de custos energéticos e garantia da qualidade dos imunobiológicos, contribuindo significativamente para os objetivos de sustentabilidade e modernização do Sistema Único de Saúde.

## 1. Introdução

### 1.1 Contextualização do problema

O Sistema Único de Saúde (SUS) brasileiro enfrenta crescentes desafios relacionados à sustentabilidade energética e à preservação adequada de medicamentos e vacinas. No contexto das Unidades Básicas de Saúde, dois problemas críticos convergem: o alto consumo energético desnecessário e as perdas significativas de imunobiológicos por falhas no controle de temperatura. Em São Carlos, interior do estado de São Paulo, essa problemática se manifesta de forma particularmente evidente nas 26 UBS do município, onde o monitoramento manual de temperatura de refrigeradores de vacinas ainda é realizado três vezes ao dia por funcionários[^8], representando um processo ineficiente e suscetível a falhas humanas.

A Gestão Inteligente de Energia e Água, problema escolhido para este projeto, encontra no setor de saúde pública um campo fértil para inovações tecnológicas. Sistemas de Informação podem apoiar significativamente a otimização do consumo energético em ambientes de saúde, especialmente através da coleta de dados via sensores IoT, gerando alertas sobre desperdícios e identificando padrões de consumo[^1]. No caso específico das UBS, os refrigeradores de vacinas representam equipamentos críticos que demandam operação contínua e controle rigoroso de temperatura, configurando-se como pontos ideais para implementação de soluções inteligentes de monitoramento energético.

Durante a pandemia de COVID-19, a Universidade Federal de São Carlos (UFSCar) desenvolveu um sistema pioneiro de monitoramento de temperatura para preservação de vacinas no município. O sistema utilizava dispositivos IoT com termômetros eletrônicos que coletavam dados a cada cinco segundos, transmitindo informações via internet para o Data Center da universidade e emitindo alertas em tempo real quando a temperatura ultrapassava os limites seguros de 2°C a 8°C[^8]. Embora tecnicamente bem-sucedida, essa iniciativa foi descontinuada após o período pandêmico, deixando as UBS novamente dependentes de processos manuais inadequados.

### 1.2 Motivação e justificativa

A motivação para desenvolvimento desta solução fundamenta-se em evidências científicas que demonstram a criticidade do problema e o potencial transformador de soluções tecnológicas. Estudos recentes indicam que a temperatura inadequada é responsável por 41,4% das doses com alteração de temperatura foram perdidas [^28][^31] em unidades de saúde, seguida pela falta de monitoramento (25%) e controle manual falho (15%).

Essas perdas representam não apenas desperdício financeiro significativo, mas também riscos à saúde pública devido à administração de imunobiológicos comprometidos.

Do ponto de vista energético, estabelecimentos de saúde apresentam características que tornam essencial a implementação de soluções de gestão inteligente. Cerca de 50% do consumo energético em hospitais é destinado ao ar-condicionado[^16], e sistemas de refrigeração para conservação de medicamentos representam cargas críticas que operam continuamente. UBS têm potencial de economia energética de até 30% [^24][^26][^27] com modernização tecnológica, representando economia mensal estimada de R\$ 4.320 para unidades de porte médio.

A proposta de solução em alto nível consiste em um Sistema de Informação integrado que combina monitoramento IoT de temperatura e umidade, gestão inteligente do consumo energético, controle automatizado de inventário de vacinas e interface web responsiva para gestão centralizada. O sistema permitirá monitoramento em tempo real de todas as UBS do município, emissão de alertas preventivos, geração de relatórios de conformidade regulatória e otimização automática do consumo energético através de algoritmos de machine learning.

### 1.3 Soluções existentes

O mercado atual apresenta diversas soluções tecnológicas para monitoramento de temperatura e gestão energética em estabelecimentos de saúde, cada uma com características específicas que podem ser analisadas comparativamente à proposta apresentada. A análise de soluções existentes revela tanto oportunidades de mercado quanto desafios técnicos a serem superados.

Na área de monitoramento de temperatura para conservação de medicamentos, empresas como a Sensorweb oferecem soluções IoT especializadas para cadeia de frio farmacêutica. Suas tecnologias incluem sensores de temperatura e umidade conectados via internet, dashboards para visualização de dados e sistema de alertas por email e SMS[^25][^26]. Essas soluções, embora tecnicamente robustas, focam exclusivamente no aspecto de conservação, não integrando funcionalidades de gestão energética ou otimização de processos operacionais.

Sistemas acadêmicos também demonstram viabilidade técnica de soluções IoT para monitoramento hospitalar. Pesquisas recentes descrevem implementações de sistemas baseados em microcontroladores ESP8266 e sensores DS18B20 para monitoramento remoto de temperatura[^17][^27], bem como plataformas integradas para gestão em saúde que incorporam registros eletrônicos e serviços inteligentes de alertas[^24]. Esses trabalhos acadêmicos evidenciam a factibilidade técnica de soluções customizadas, mas carecem de integração com aspectos de sustentabilidade energética.

No setor de gestão energética hospitalar, empresas como Kroma Energia oferecem serviços de eficiência energética e mercado livre de energia, proporcionando economias significativas para estabelecimentos de saúde. O Hospital Jayme da Fonte, por exemplo, obteve economia de R\$ 1 milhão com redução de 20% na conta de energia através de gestão especializada[^13]. Contudo, essas soluções focam principalmente em aspectos comerciais e infraestruturais, não oferecendo integração com sistemas de monitoramento operacional.

O diferencial da solução proposta reside na integração inédita de múltiplas funcionalidades em uma plataforma única: monitoramento de temperatura, gestão energética inteligente, controle de inventário automatizado e interface unificada para gestão municipal. Enquanto soluções existentes abordam aspectos isolados do problema, nossa proposta oferece uma visão holística que combina sustentabilidade, eficiência operacional e conformidade regulatória em um sistema específico para o contexto das UBS brasileiras.

## 2. Solução proposta

### 2.1 Funcionalidades

O sistema proposto integra funcionalidades abrangentes organizadas em módulos interconectados que atendem às necessidades específicas de gestão sustentável das UBS. O módulo principal apresenta uma interface tipo dashboard com lista de cards representando cada unidade de saúde do município, equipados com barra de pesquisa e filtros avançados. Cada card exibe identificação da instituição, indicadores de temperatura (máxima, mínima e média), status de comunicação (online/offline) e nível de risco para conservação de vacinas, com sistema de priorização automática que eleva cards com problemas para o topo da lista.

A funcionalidade de monitoramento em tempo real constitui o núcleo tecnológico da solução, utilizando sensores IoT para coleta contínua de dados de temperatura, umidade e consumo energético. O sistema processa essas informações através de algoritmos de análise que identificam padrões anômalos, tendências de consumo e situações de risco iminente. Alertas automatizados são enviados via múltiplos canais (email, SMS, push notifications) quando parâmetros críticos são violados, incluindo estimativas de tempo restante para resolução antes que vacinas sejam comprometidas.

O módulo de relatórios oferece visualizações gráficas e textuais customizáveis por período (diário, semanal, mensal, anual), permitindo análise histórica independente da data atual. Relatórios incluem métricas de conformidade regulatória ANVISA, indicadores de eficiência energética, custos operacionais e projeções de economia. A funcionalidade de gestão de inventário automatizada utiliza sensores de peso ou sistemas de código de barras para monitoramento em tempo real de estoque de vacinas, com controle de validade e alertas preventivos de vencimento.

O sistema incorpora funcionalidades de comunicação integrada entre administradores municipais e gestores das UBS, permitindo registro de ocorrências, solicitação de suporte técnico e compartilhamento de relatórios. Funcionalidades administrativas incluem gestão de usuários com diferentes níveis de acesso, configuração de parâmetros de monitoramento personalizados por unidade e integração com sistemas externos como prontuários eletrônicos e sistemas de compras municipais.

### 2.2 Questões técnicas

A infraestrutura técnica da solução baseia-se em arquitetura distribuída utilizando tecnologias de Internet das Coisas (IoT) para coleta de dados, computação em nuvem para processamento e análise, e aplicações web responsivas para interface de usuário. Cada UBS será equipada com nós sensores compostos por microcontroladores ESP32 ou similares, sensores de temperatura DS18B20 ou DHT22, sensores de umidade, medidores de energia elétrica não invasivos e módulos de comunicação Wi-Fi/4G para transmissão de dados.

A arquitetura de software segue padrões de microserviços com containerização Docker, garantindo escalabilidade e manutenibilidade. O backend utiliza tecnologias modernas como Node.js ou Python Django para APIs RESTful, banco de dados PostgreSQL para armazenamento estruturado e InfluxDB para dados de séries temporais dos sensores. A camada de processamento incorpora algoritmos de machine learning para detecção de anomalias e otimização energética, utilizando bibliotecas como TensorFlow ou scikit-learn.

A infraestrutura de nuvem será implementada em provedores como AWS ou Google Cloud Platform, garantindo alta disponibilidade, backup automático e capacidade de expansão. Protocolos de comunicação incluem MQTT para transmissão eficiente de dados dos sensores, HTTPS para APIs web e WebSockets para atualizações em tempo real no dashboard. Sistemas de segurança cibernética incluem criptografia end-to-end, autenticação multifator e monitoramento de intrusões.

A integração com sistemas legados das UBS será realizada através de APIs padronizadas e protocolos de interoperabilidade conforme diretrizes da Rede Nacional de Dados em Saúde (RNDS)[^32]. A solução será compatível com sistemas de gestão farmacêutica existentes e prontuários eletrônicos, permitindo fluxo automatizado de informações sobre conservação de vacinas e consumo energético.

### 2.3 Questões organizacionais

A implementação da solução demanda transformações organizacionais significativas nas UBS participantes, exigindo recursos humanos, financeiros e estruturais específicos. As unidades precisarão designar responsáveis técnicos para operação do sistema, preferencialmente profissionais com conhecimentos básicos em tecnologia da informação ou disposição para capacitação. A estrutura física deverá incluir conectividade de internet estável, pontos de energia para equipamentos IoT e espaços adequados para instalação de sensores nos refrigeradores.

Os recursos financeiros necessários envolvem investimento inicial em hardware (sensores, gateways, equipamentos de rede), licenciamento de software, infraestrutura de nuvem e treinamento de pessoal. Estimativas indicam custo inicial de aproximadamente R\$ 15.000 por UBS para equipamentos e R\$ 5.000 anuais para operação e manutenção, valores que se justificam pela economia energética esperada e redução de perdas de medicamentos.

As mudanças culturais requeridas incluem transição de processos manuais para digitais, aceitação de monitoramento automatizado e desenvolvimento de rotinas de resposta a alertas eletrônicos. A complexidade dessas mudanças é considerada moderada, dado que profissionais de saúde já utilizam tecnologias digitais em suas atividades diárias. Contudo, será necessário período de adaptação de 3-6 meses com suporte técnico intensivo.

A gestão da mudança organizacional seguirá metodologia estruturada incluindo comunicação prévia sobre benefícios da solução, envolvimento de lideranças locais no processo de implementação, treinamento escalonado por grupos de usuários e estabelecimento de canais de feedback contínuo. Indicadores de sucesso da mudança incluirão taxa de adoção do sistema, redução de registros manuais de temperatura e melhoria nos índices de conformidade regulatória.

### 2.4 Questões humanas

O impacto da solução nos funcionários das UBS será majoritariamente positivo, proporcionando redução de tarefas repetitivas, melhoria na qualidade do trabalho e maior segurança na conservação de vacinas. Profissionais de enfermagem, atualmente responsáveis pelo controle manual de temperatura três vezes ao dia, terão esse tempo liberado para atividades de maior valor agregado no atendimento aos pacientes. A automatização do processo reduzirá o estresse associado à responsabilidade de controle manual e possíveis perdas de medicamentos.

Gestores das UBS serão diretamente beneficiados pela visibilidade em tempo real de indicadores operacionais, relatórios automatizados para auditorias e alertas preventivos que permitem ação proativa antes da ocorrência de problemas críticos. O sistema fornecerá informações gerenciais que facilitarão tomada de decisões baseadas em dados e planejamento de recursos mais eficiente.

A capacitação de recursos humanos seguirá programa estruturado incluindo treinamento inicial de 8 horas para operadores básicos, 16 horas para administradores locais e 24 horas para gestores municipais. O conteúdo abrangerá operação da interface web, interpretação de alertas, procedimentos de resposta a emergências e geração de relatórios. Material de apoio incluirá manuais ilustrados, vídeos tutoriais e sistema de help desk para suporte contínuo.

A resistência à mudança será minimizada através de estratégias de engajamento incluindo demonstrações práticas dos benefícios, depoimentos de usuários pioneiros e reconhecimento de funcionários que se destacarem na adoção da nova tecnologia. Canais de comunicação bidirecional permitirão coleta de sugestões de melhorias e adaptações do sistema às necessidades específicas de cada unidade.

### 2.5 Processos de negócio

A implementação da solução transformará fundamentalmente os processos de negócio relacionados à conservação de vacinas e gestão energética nas UBS. O processo atual de controle de temperatura, baseado em verificações manuais três vezes ao dia com registro em planilhas, será substituído por monitoramento contínuo automatizado com registro digital em tempo real. Esta mudança eliminará possibilidades de erro humano, gaps de monitoramento durante finais de semana e feriados, e fornecerá rastreabilidade completa para auditorias regulatórias.

O processo de gestão de inventário de vacinas evoluirá de contagem manual diária para monitoramento automatizado contínuo, incluindo alertas preventivos de vencimento, otimização de pedidos baseada em análise de demanda histórica e rastreabilidade completa do ciclo de vida dos imunobiológicos. Esta automação reduzirá perdas por vencimento, melhorará a acurácia do controle de estoque e facilitará o planejamento de campanhas de vacinação.

Novos processos serão criados para gestão energética inteligente, incluindo análise de padrões de consumo, identificação de oportunidades de economia e otimização automática de operação de equipamentos. O sistema implementará rotinas de monitoramento de eficiência energética, benchmarking entre UBS e geração de relatórios de sustentabilidade para prestação de contas aos órgãos municipais e estaduais.

As principais melhorias nos processos afetados incluem: redução de 80% no tempo gasto com controle manual de temperatura, melhoria de 95% na precisão do monitoramento comparado ao sistema manual

, redução de até 30% no consumo energético através de otimização automatizada, e diminuição significativa nas perdas de vacinas por falhas de conservação. O tempo de resposta a problemas críticos será reduzido de 4 horas (verificação manual) para 1 minuto (alerta automático).

## 3. Processamento da Informação

### 3.1 Dados de entrada

O sistema processa múltiplas categorias de dados coletados continuamente através de sensores IoT distribuídos nas UBS e interfaces de usuário web. Os dados primários incluem medições de temperatura ambiente e interna dos refrigeradores, coletadas por sensores DS18B20 com precisão oficial de ±0,5°C [^55][^59] de ±0.5°C em intervalos de 30 segundos. Sensores de umidade DHT22 registram umidade relativa do ar com precisão de ±2% para monitoramento das condições ambientais de armazenamento de medicamentos.

Dados de consumo energético são coletados através de medidores inteligentes não invasivos que monitoram corrente elétrica, tensão, potência ativa e reativa dos refrigeradores e demais equipamentos críticos. Esses dados, amostrados a cada minuto, permitem análise detalhada de eficiência energética e identificação de anomalias de consumo que podem indicar problemas de equipamentos.

O sistema também recebe dados de inventário através de interfaces manuais onde funcionários registram entrada e saída de vacinas, datas de vencimento e ocorrências operacionais. Dados de geolocalização GPS dos técnicos de manutenção são integrados para otimização de rotas de atendimento. Informações meteorológicas externas, obtidas via APIs de serviços climáticos, complementam os dados para análise de correlações entre condições ambientais e consumo energético.

Dados administrativos incluem informações de usuários, configurações de alertas personalizadas por unidade, histórico de manutenções e calibrações de equipamentos. O sistema integra dados de sistemas externos como prontuários eletrônicos para correlacionar uso de vacinas com registros de atendimento, e sistemas de compras municipais para otimização de estoque baseada em previsões de demanda.

### 3.2 Processamento

O processamento dos dados segue arquitetura de pipeline distribuído utilizando tecnologias de streaming analytics para análise em tempo real e batch processing para análises históricas complexas. A primeira camada de processamento realiza validação e filtragem de dados, eliminando outliers e valores inconsistentes através de algoritmos estatísticos que consideram limites físicos dos sensores e padrões históricos de cada unidade.

Algoritmos de machine learning implementam detecção de anomalias utilizando modelos de séries temporais ARIMA e redes neurais LSTM para identificação de padrões anômalos em temperatura e consumo energético. O sistema desenvolve modelos preditivos específicos para cada UBS, considerando características únicas como localização geográfica, idade dos equipamentos e padrões de uso. Técnicas de ensemble learning combinam múltiplos algoritmos para aumentar precisão das predições.

A camada de análise energética implementa algoritmos de otimização que identificam oportunidades de economia através de análise de correlações entre variáveis ambientais, padrões de uso e eficiência dos equipamentos. O sistema utiliza técnicas de clustering para agrupar UBS com características similares e aplicar estratégias de otimização personalizadas. Algoritmos de otimização multiobjetivo balanceiam economia energética com requisitos de segurança para conservação de vacinas.

O processamento de alertas utiliza sistema de regras configuráveis combinado com análise preditiva para emissão de notificações em tempo real. O sistema implementa diferentes níveis de prioridade baseados na criticidade da situação, tempo estimado para resolução e impacto potencial na conservação de medicamentos. Machine learning é aplicado para reduzir falsos positivos através da análise de padrões históricos de alertas e suas resoluções.

### 3.3 Dados de saída

Os dados de saída do sistema são apresentados através de múltiplas interfaces adaptadas às necessidades específicas de diferentes perfis de usuários. O dashboard principal exibe indicadores em tempo real organizados em cards intuitivos para cada UBS, incluindo status de temperatura, consumo energético atual, nível de estoque de vacinas e alertas ativos. Visualizações gráficas incluem séries temporais de temperatura e consumo, mapas de calor para identificação rápida de problemas e gráficos de tendências para análise de eficiência.

Relatórios automatizados são gerados periodicamente incluindo conformidade regulatória ANVISA, indicadores de sustentabilidade energética, análise de custos operacionais e projeções de economia. Esses relatórios são formatados para diferentes audiências: técnicos detalhados para gestores das UBS, executivos sumarizados para administração municipal e relatórios de conformidade para auditorias regulatórias.

O sistema gera alertas contextualizados que incluem não apenas a identificação do problema, mas também análise de impacto, tempo estimado para resolução e lista de vacinas potencialmente afetadas. Alertas preventivos são emitidos baseados em análises preditivas, permitindo ação proativa antes da ocorrência de problemas críticos. Notificações são personalizadas por canal de comunicação e perfil de usuário.

Dados de performance operacional são disponibilizados através de APIs RESTful para integração com sistemas externos, incluindo métricas de eficiência energética, indicadores de qualidade de conservação e estatísticas de conformidade. O sistema exporta dados em formatos padronizados (CSV, JSON, XML) para análises externas e integração com sistemas de business intelligence municipais. Relatórios de sustentabilidade seguem padrões internacionais como GRI (Global Reporting Initiative) para prestação de contas de iniciativas ESG.

## 4. Concorrência e Vantagem Competitiva

## 4. Concorrência e Vantagem Competitiva

(Modelo de Porter)

### 4.1 Rivalidade entre Concorrentes

O mercado de soluções IoT para saúde apresenta players estabelecidos como Sensorweb (sistemas de monitoramento térmico) e Nexxto (gestão de cadeia frio). Contudo, nossa solução integrada de monitoramento térmico + gestão energética + controle de inventário possui 3 diferenciais competitivos:

1. **Integração HL7 FHIR com RNDS** ([^34][^35])
2. **Algoritmos de otimização energética baseados em LSTM-ARIMA** ([^37])
3. **Custo 40% inferior a soluções similares** (R\$ 3.109,04/UBS vs média de R\$ 5.200/UBS do mercado)

### 4.2 Poder de Barganha dos Fornecedores

Componentes-chave possuem múltiplos fornecedores certificados:

- ESP32: [MercadoLivre (R\$ 49,90)](https://www.mercadolivre.com.br/esp32-doit-devkit-com-esp32-wroom-32/p/MLB28251016)
- DHT22: [Eletrogate (R\$ 35,50)](https://www.eletrogate.com/sensor-de-umidade-e-temperatura-dht22-am2302)
- DS18B20: [Só Tudo (R\$ 11,90)](https://www.sotudo.com.br/produto/sensor-de-temperatura-ds18b20)


### 4.3 Ameaça de Novos Entrantes

Barreiras significativas existem devido a:

- Requisitos ANVISA RDC 430/2020 para certificação de sistemas médicos ([^2])
- Necessidade de integração com RNDS via FHIR Release 4 ([^34][^36])
- Curva de aprendizado em algoritmos de otimização energética LSTM-ARIMA ([^37])


### 4.4 Poder de Barganha dos Compradores

Prefeituras demandam:

- Conformidade com Portaria GM/MS nº 1.434/2020 ([^34])
- ROI comprovado em <18 meses ([^25][^26])
- Suporte técnico localizado

### 4.5 Ameaça de Substitutos

Soluções manuais apresentam:

- Custo de falha elevado (R\$ 1,2 bi/ano em perdas de vacinas) ([^2])
- Ineficiência energética (30-40% acima do ótimo) ([^25])

---
## Benefícios Esperados

### Impactos na Saúde Pública

A implementação do sistema proporcionará melhoria significativa na qualidade dos serviços de saúde através da garantia de preservação adequada dos imunobiológicos. A redução de 85% nas perdas de vacinas assegurará maior disponibilidade de doses para a população, contribuindo para melhores índices de cobertura vacinal e proteção comunitária [^33]. O monitoramento contínuo 24/7 eliminará gaps de supervisão durante finais de semana e feriados, situações críticas para a manutenção da cadeia de frio [^22].

### Sustentabilidade Ambiental

A gestão inteligente de energia contribuirá para os objetivos de sustentabilidade do município, com redução estimada de 30% no consumo energético das UBS [^24][^26][^27]. Esta economia representa diminuição significativa da pegada de carbono do sistema municipal de saúde. A otimização automática de equipamentos de refrigeração prolongará sua vida útil, reduzindo necessidades de substituição e descarte.

### Eficiência Operacional

A automatização dos processos de monitoramento liberará funcionários de tarefas repetitivas, permitindo maior dedicação ao atendimento direto aos pacientes. O tempo anteriormente gasto com verificações manuais de temperatura três vezes ao dia será redirecionado para atividades de maior valor agregado na assistência à saúde [^32]. Gestores terão acesso a informações gerenciais em tempo real, facilitando tomada de decisões baseadas em dados e planejamento mais eficiente de recursos.

## Conclusão

O Sistema Inteligente de Gestão Energética e Conservação de Vacinas para UBS representa uma solução inovadora e necessária para os desafios contemporâneos da saúde pública brasileira. A proposta combina de forma única sustentabilidade energética, segurança dos imunobiológicos e eficiência operacional, criando valor tanto para gestores quanto para a população atendida [^55].

A fundamentação técnica sólida, baseada em tecnologias IoT comprovadas e arquitetura escalável, aliada à viabilidade econômica demonstrada através de ROI atrativo, posiciona a solução como investimento estratégico para o município de São Carlos. A experiência prévia da UFSCar no desenvolvimento de sistemas similares durante a pandemia fornece base técnica e institucional para o sucesso da implementação.

A proposta alinha-se perfeitamente com as diretrizes nacionais de saúde digital e sustentabilidade, contribuindo para a modernização do SUS e o avanço em direção a cidades inteligentes. O potencial de replicação em outros municípios brasileiros amplia o impacto da solução, criando oportunidades de expansão e consolidação como referência nacional em gestão inteligente de UBS.

A convergência entre necessidade urgente de solução para perdas de vacinas, demanda crescente por eficiência energética e disponibilidade de tecnologias maduras cria uma janela de oportunidade única para implementação desta proposta transformadora. O sistema não apenas resolverá problemas atuais, mas estabelecerá São Carlos como pioneiro em gestão inteligente e sustentável da atenção primária à saúde no Brasil.
## 5. Referências Bibliográficas

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

