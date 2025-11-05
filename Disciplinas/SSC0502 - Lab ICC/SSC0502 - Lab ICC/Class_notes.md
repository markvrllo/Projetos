
### Pseudocódigo
```
Início UaiBank
   // Alocação dinâmica da estrutura de usuários
   Inicializar lista dinâmica de usuários (vetor ou lista ligada)
   contadorID ← 1  // para gerar identificadores únicos

   Início Enquanto (não for comando de encerramento) faça:
      Exibir menu de opções:
         1 - Inserção de um novo usuário:
             → Ler uma linha: "<nome>, <idade>, <saldo atual>"
             → Se quantia_caracteres(<nome>) > 101 então
                    Exibir "Erro: Campo nome pode ter no máximo 100 caracteres!"
                    Voltar ao menu
             → Se saldo < 0 então
                    Exibir "Erro: Saldo negativo não permitido."
                    Voltar ao menu
             → Criar usuário com:
                    id ← contadorID
                    nome ← entrada
                    idade ← entrada
                    saldo ← entrada
             → Incrementar contadorID
             → Adicionar usuário à lista
             → Exibir mensagem: "Usuário inserido com id <id>."

         2 - Inserção de vários usuários:
            → Ler número de usuários a inserir
             Para cada um dos usuários:
                → Ler "<nome>, <idade>, <saldo atual>"
                → Se quantia_caracteres(<nome>) > 101 então
                    Exibir "Erro: Campo nome pode ter no máximo 100 caracteres!"
                    Pular para o próximo usuário
                → Se saldo < 0 então
                    Exibir "Erro: Saldo negativo não permitido."
                    Pular para o próximo usuário
                → Criar usuário com id ← contadorID
                → Incrementar contadorID
                → Adicionar à lista
            → Exibir mensagem: "Usuários inseridos com id(s): ..." (listar os id gerados)

         3 - Busca de um usuário por id:
              → Ler id de busca
              → Procurar na lista o usuário com o id fornecido
              Se encontrado então
                  Exibir os dados do usuário (nome, idade, saldo)
              Senão
                  Exibir "Erro: Usuário <id> não encontrado."

         4 - Transferências entre usuários:
              → Ler os valores: <id de origem>, <id de destino>, <quantia>
              → Procurar usuário de origem e usuário de destino na lista
                → Se algum dos usuários não existir
                    Exibir "Erro: Usuário <id_geradora_erro> não encontrado."
              → Se o usuário de origem tiver saldo insuficiente ou saldo_quantia_origem < 0 então
                    Exibir "Erro: Saldo insuficiente para transferência."
              → Senão
                    Subtrair quantia do saldo do usuário de origem
                    Adicionar quantia ao saldo do usuário de destino
              → Exibir mensagem: "Transferência efetuada com sucesso."

         5 - Remoção de um usuário por id:
              → Ler id do usuário a ser removido
              → Procurar usuário na lista
              Se encontrado então:
                     Remover usuário da lista (ajustar a memória dinamicamente)
                     Exibir "Usuário <id> removido com sucesso."
              Senão:
                     Exibir "Erro: Usuário <id> não encontrado."

      Fim do comando (voltar para o menu)
   
   Fim Enquanto

   // Ao encerrar, gravamos os dados restantes dos usuários num arquivo conforme o formato exigido.
   Abrir arquivo de saída
   Para cada usuário na lista:
       Escrever linha "<nome>, <idade>, <saldo atual>" no arquivo
   Fechar arquivo

Fim UaiBank
```
### Fluxograma Geral

                    +---------------------------------+
                    |         Início do Sistema       |
                    +---------------------------------+
                               |
                               v
                +-------------------------------+
                | Inicializa lista de usuários  |
                | e contadorID ← 1              |
                +-------------------------------+
                               |
                               v
                     +-------------------+
                     | Exibe Menu de Opções
                     | 1, 2, 3, 4, 5 ou Sair
                     +-------------------+
                               |
                               v
                +-------------------------------+
                | Ler comando do usuário        |
                +-------------------------------+
                               |
             ------------------+-----------------------
            |         |           |           |       |
            v         v           v           v       v
   ```
   [Inserir único] [Inserir    [Buscar]  [Transferir] [Remover]
                  múltiplos]
      |         |           |           |       |
      v         v           v           v       v
 [Processa dados, atribui id e valida saldo]
      |         |
      v         |
 [Adiciona usuário(s) à lista]
      |
      v
Exibe mensagem de sucesso ou erro
      |
      v
           +--------------------------+
           | Volta para o menu        |
           +--------------------------+
                               |
                               v
                +--------------------------------+
                | Se comando for "Sair":         |
                | Grava dados no arquivo final   |
                +--------------------------------+
                               |
                               v
                         +------------+
                         |   Fim      |
                         +------------+
```
Marcos, vamos detalhar um fluxograma para cada operação individual do sistema. Cada um desses diagramas em **ASCII** mostra os passos fundamentais dentro da respectiva operação, servindo como guia para desenvolver tanto os pseudocódigos quanto a implementação em C.

---

### 1. Fluxograma para Inserção de um Único Usuário

```plaintext
           +----------------------------------+
           | Início da Inserção de Usuário    |
           +----------------------------------+
                         |
                         v
           +----------------------------------+
           |   Ler entrada:                   |
           | "nome, idade, saldo atual"       |
           +----------------------------------+
                         |
                         v
           +----------------------------------+
           | Verificar: saldo < 0?            |
           +-------------+--------------------+
             Sim       |       Não
             |         | 
             v         v
+---------------------+  +----------------------------------+
| Exibir "Erro:       |  | Atribuir id (contadorID)         |
| Saldo negativo"     |  +----------------------------------+
+---------------------+                |
             |                         v
             +-------------->+----------------------------------+
                           | Inserir usuário na lista (alocação dinâmica) |
                           +----------------------------------+
                                           |
                                           v
                           +----------------------------------+
                           | Incrementar contadorID           |
                           +----------------------------------+
                                           |
                                           v
                           +----------------------------------+
                           | Exibir "Usuário inserido com id" |
                           +----------------------------------+
                                           |
                                           v
                           +----------------------------------+
                           | Retorna ao menu principal       |
                           +----------------------------------+
```

**Explicação:**  
O sistema lê os dados do usuário, verifica se o saldo é negativo e, se não for, atribui um identificador único, insere o usuário na lista (com alocação dinâmica) e atualiza o contador de IDs. Caso o saldo seja negativo, exibe uma mensagem de erro e retorna ao menu.

---

### 2. Fluxograma para Inserção de Vários Usuários

```plaintext
           +-------------------------------------+
           | Início da Inserção de Vários Usuários|
           +-------------------------------------+
                         |
                         v
           +-------------------------------------+
           | Ler quantidade de usuários a inserir|
           +-------------------------------------+
                         |
                         v
           +-------------------------------------+
           |  Para cada usuário (Loop)           |
           +-------------------------------------+
                         |
                         v
           +-------------------------------------+
           | Ler entrada: "nome, idade, saldo"   |
           +-------------------------------------+
                         |
                         v
           +-------------------------------------+
           | Verificar: saldo < 0?               |
           +-------------+-----------------------+
             Sim       |       Não
             |         | 
             v         v
+---------------------+  +-------------------------------------+
| Exibir "Erro:       |  | Atribuir id (contadorID)            |
| Saldo negativo"     |  +-------------------------------------+
+---------------------+                |
             |                         v
             |          +-------------------------------------+
             |          | Inserir usuário na lista          |
             |          | (realizar alocação dinâmica)        |
             |          +-------------------------------------+
             |                         |
             |                         v
             |          +-------------------------------------+
             |          | Incrementar contadorID              |
             |          +-------------------------------------+
             |                         |
             +-------------------------+
                         | (Fim do loop)
                         v
           +-------------------------------------+
           | Exibir mensagem com os IDs gerados  |
           +-------------------------------------+
                         |
                         v
           +-------------------------------------+
           | Retorna ao menu principal           |
           +-------------------------------------+
```

**Explicação:**  
O fluxo inicia ao ler a quantidade de usuários a serem inseridos. Para cada usuário, os dados são lidos e validados quanto ao saldo. Se o saldo for válido, o usuário recebe um ID único e é inserido na lista, com o contador sendo incrementado. Ao final do loop, é exibida uma mensagem com os IDs dos usuários inseridos.

---

### 3. Fluxograma para Busca de um Usuário por ID

```plaintext
           +----------------------------------+
           | Início da Busca por Usuário      |
           +----------------------------------+
                         |
                         v
           +----------------------------------+
           | Ler ID a ser buscado             |
           +----------------------------------+
                         |
                         v
           +----------------------------------+
           | Percorrer lista de usuários      |
           +----------------------------------+
                         |
                         v
           +----------------------------------+
           | Usuário com ID procurado?        |
           +-------------+--------------------+
             Sim       |         Não
             |         |
             v         v
+----------------------+   +----------------------------------+
| Exibir dados do      |   | Se finalizou a busca             |
| usuário (nome, idade,|   | sem encontrar, exibir mensagem   |
| saldo)               |   | "Erro: Usuário <id> não encontrado"|
+----------------------+   +----------------------------------+
                         |
                         v
           +----------------------------------+
           | Retorna ao menu principal        |
           +----------------------------------+
```

**Explicação:**  
O fluxo solicita o ID desejado, percorre a lista de usuários e, se encontrar um usuário com o ID especificado, exibe seus dados. Caso contrário, ao concluir a busca sem sucesso, informa que o usuário não foi encontrado.

---

### 4. Fluxograma para Transferências Entre Usuários

```plaintext
           +----------------------------------+
           | Início da Transferência          |
           +----------------------------------+
                         |
                         v
           +----------------------------------+
           | Ler dados:                       |
           | id de origem, id de destino,     |
           | quantia                          |
           +----------------------------------+
                         |
                         v
           +----------------------------------+
           | Procurar usuário de origem       |
           +----------------------------------+
                         |
                         v
           +----------------------------------+
           | Usuário de origem encontrado?    |
           +-------------+--------------------+
             Não       |         Sim
             |         |
             v         v
+---------------------+   +----------------------------------+
| Exibir "Erro: Origem|   | Procurar usuário de destino      |
| não encontrado"     |   +----------------------------------+
+---------------------+                |
             |                         v
             |             +----------------------------------+
             |             | Usuário de destino encontrado?   |
             |             +-------------+--------------------+
             |               Não       |         Sim
             |               |         |
             |               v         v
             |    +---------------------+   +----------------------------------+
             |    | Exibir "Erro: Destino|   | Verificar se (origem.saldo >= quantia) |
             |    | não encontrado"      |   +-------------+--------------------+
             |    +---------------------+     |         |
             |                                 Sim       |      Não
             |                                 |         | 
             |                                 v         v
             |                      +----------------------------------+
             |                      | Subtrair quantia do saldo da     |
             |                      | origem e adicionar no saldo do     |
             |                      | destino                          |
             |                      +----------------------------------+
             |                                 |
             |                                 v
             |                      +----------------------------------+
             |                      | Exibir "Transferência efetuada"  |
             |                      +----------------------------------+
             |                                 |
             +---------------------------------+
                         |
                         v
           +----------------------------------+
           | Retorna ao menu principal        |
           +----------------------------------+
```

**Explicação:**  
Nesta operação, o sistema lê os IDs de origem e destino e a quantia a ser transferida. Após localizar ambos os usuários, o sistema verifica se o usuário de origem possui saldo suficiente. Se todas as verificações forem positivas, a transferência é realizada; caso contrário, mensagens de erro são exibidas conforme a condição (usuário não encontrado ou saldo insuficiente).

---

### 5. Fluxograma para Remoção de um Usuário por ID

```plaintext
           +----------------------------------+
           | Início da Remoção de Usuário     |
           +----------------------------------+
                         |
                         v
           +----------------------------------+
           | Ler ID do usuário a remover      |
           +----------------------------------+
                         |
                         v
           +----------------------------------+
           | Procurar usuário na lista        |
           +----------------------------------+
                         |
                         v
           +----------------------------------+
           | Usuário encontrado?              |
           +-------------+--------------------+
             Não       |         Sim
             |         |
             v         v
+---------------------+   +----------------------------------+
| Exibir "Erro: Usuário|   | Remover usuário da lista (realizar |
| <id> não encontrado" |   | ajuste da memória, se necessário)  |
+---------------------+   +----------------------------------+
                         |
                         v
           +----------------------------------+
           | Exibir "Usuário removido com    |
           | sucesso"                        |
           +----------------------------------+
                         |
                         v
           +----------------------------------+
           | Retorna ao menu principal        |
           +----------------------------------+
```

**Explicação:**  
O fluxo para remoção envolve a leitura do ID, a busca do usuário na lista e, se encontrado, a remoção do mesmo. Se o usuário não for localizado, o sistema informa o erro; caso contrário, após a remoção bem-sucedida, confirma a operação.

---

### Considerações Adicionais

- **Validação de Dados:**  
  Em cada operação, é fundamental realizar checagens (saldo negativo, existência do usuário, etc.) para garantir a integridade dos dados.

- **Memória Dinâmica:**  
  Ao inserir ou remover usuários, lembre-se de atualizar a alocação dinâmica (usando `malloc()`, `realloc()`, ou implementando uma lista ligada) para manter a consistência dos dados.

- **Interface de Linha de Comando:**  
  Cada fluxograma termina com o retorno ao menu principal, permitindo a execução contínua das operações até que o usuário decida encerrar o sistema.

Esses fluxogramas te ajudarão a organizar o desenvolvimento e a documentação do projeto, garantindo que cada funcionalidade seja implementada de forma clara e estruturada.

## Fluxograma de Montagem do Banco

Marcos, vamos elaborar um fluxograma que representa de forma geral as etapas para montar o sistema do UaiBank, ou seja, toda a “montagem” do banco de dados – desde a inicialização dos recursos e carregamento (se necessário) até a interação contínua via menu, execução das operações e finalização com gravação dos dados. A seguir, segue um exemplo de fluxograma em ASCII que você pode ajustar conforme for detalhando seu projeto:

---

```plaintext
                            +--------------------------------------+
                            |          Início do Sistema         |
                            +--------------------------------------+
                                         │
                                         ▼
           +---------------------------------------------------------+
           | Inicializar recursos:                                   |
           | - Alocar estrutura dinâmica para armazenar usuários     |
           | - Inicializar o contador de IDs (contadorID ← 1)          |
           +---------------------------------------------------------+
                                         │
                                         ▼
                   +-----------------------------------------------+
                   | (Opcional) Verificar existência de arquivo     |
                   | com dados (para carregar registros anteriores)  |
                   +-----------------------------------------------+
                                         │
                                         ▼
                            +--------------------------------------+
                            |   Entrar no loop principal do menu   |
                            +--------------------------------------+
                                         │
                                         ▼
                +-------------------------------------------------------+
                | Exibir Menu de Opções:                                |
                | 1. Inserir um novo usuário                            |
                | 2. Inserir vários usuários                            |
                | 3. Buscar usuário por id                              |
                | 4. Transferir entre usuários                          |
                | 5. Remover usuário por id                             |
                | 6. Encerrar o sistema                                 |
                +-------------------------------------------------------+
                                         │
                                         ▼
                             +-------------------------+
                             | Ler comando do usuário  |
                             +-------------------------+
                                         │
                                         ▼
                    +-------------------------------------------+
                    | Discriminar comando escolhido:            |
                    |                                           |
                    | [Se comando for 1] → Inserir um único user  |
                    | [Se comando for 2] → Inserir vários users   |
                    | [Se comando for 3] → Buscar por id          |
                    | [Se comando for 4] → Transferência         |
                    | [Se comando for 5] → Remoção de usuário      |
                    | [Se comando for 6] → Encerrar               |
                    +-------------------------------------------+
                                         │
                                         ▼
            ┌───────────────────────────────┐          
            │           (Operação)          │   <-- Cada opção possui seu próprio
            │    Executar a função escolhida│       fluxo interno (como validações,
            │    (ler dados, validar,       │       alocação dinâmica, mensagens de
            │    atualizar registros, etc.) │       erro/sucesso e incremento do ID)
            └───────────────────────────────┘          
                                         │
                                         ▼
                    +-------------------------------------------+
                    |   Retornar ao Menu Principal              |
                    +-------------------------------------------+
                                         │
                                         ▼
                          +-----------------------------------+
                          | Verificar se o comando é "Encerrar"  |
                          +-----------------------------------+
                                         │
                          ┌──────────────┴──────────────┐
                          │                             │
                        Não                             Sim
                          │                             │
                          ▼                             ▼
          (Volta à etapa "Exibir Menu")   +-------------------------------------+
                                        | Gravar dados persistentes no arquivo |
                                        | (formato: "<nome>, <idade>, saldo>")   |
                                        +-------------------------------------+
                                                  │
                                                  ▼
                                        +------------------------------+
                                        | Liberar memória alocada e    |
                                        | Encerrar o sistema           |
                                        +------------------------------+
```

---

### Explicação do Fluxograma

1. **Inicialização:**  
   Ao iniciar o sistema, o programa aloca dinamicamente a estrutura de usuários (por exemplo, um vetor realocado ou uma lista encadeada) e inicializa o contador de IDs para garantir que cada usuário receba um identificador único. Se houver necessidade de persistir registros anteriores, o programa pode ainda carregar os dados de um arquivo.

2. **Menu Principal:**  
   Uma vez inicializados os recursos, entra-se num loop principal onde o menu é exibido com as opções de inserção (única ou múltipla), busca por ID, transferência entre usuários e remoção, além da opção de encerrar o sistema.

3. **Processamento do Comando:**  
   Após ler o comando inserido pelo usuário, o sistema direciona para a função específica (cada uma com seu próprio fluxo interno de leitura, validações e operações) e, ao final, retorna para o menu principal.

4. **Finalização:**  
   Quando o usuário decide encerrar o sistema, os registros atuais dos usuários são gravados em um arquivo seguindo o formato exigido e, em seguida, a memória dinâmica é liberada, encerrando o programa.

Esse fluxograma geral serve para orientar a montagem do banco de dados e sua gestão. Cada bloco correspondente às operações (inserção, busca, transferência, remoção) poderá ser refinado individualmente com seus próprios fluxogramas, conforme já trabalhamos anteriormente.

Se desejar aprofundar algum desses passos ou ajustar detalhes – por exemplo, como implementar a memória dinâmica ou organizar os módulos do sistema – me avise para continuarmos a explorar.  
