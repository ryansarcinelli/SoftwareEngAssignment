
# DOCUMENTATION.md

## Estrutura do Código

O projeto é composto pelos seguintes arquivos:

- **`arquivo.c` e `arquivo.h`**: Responsáveis pela leitura e manipulação dos dados de entrada (pontos fornecidos pelo usuário).
- **`algoritmo.c` e `algoritmo.h`**: Implementam o algoritmo para calcular a Árvore Geradora Mínima (AGM) a partir dos pontos fornecidos.
- **`main.c`**: Integra a leitura dos pontos e a execução do algoritmo da AGM. Este arquivo contém a função principal do programa.
- **`Makefile`**: Automação do processo de compilação e geração do executável.

## Dependências

Para compilar e executar o projeto, você precisará do seguinte:

- **Compilador C**: Certifique-se de ter o GCC ou outro compilador C instalado em seu sistema.
- **Make**: Ferramenta necessária para rodar o `Makefile`.

## Como Executar o Projeto

### Passo 1: Clonar o Repositório

Primeiro, clone o repositório para o seu ambiente local:

```bash
git clone git@github.com:ryansarcinelli/SoftwareEngAssignment.git
cd nome-do-diretorio
```

### Passo 2: Compilar o Projeto

#### Usando o Makefile

Compile o projeto utilizando o Makefile com o seguinte comando no terminal:

```bash
make
```

Esse comando irá compilar os arquivos `.c` e gerar o executável.

#### Caso não tenha a ferramenta Make

Se você não tiver o Make instalado, pode compilar manualmente usando o GCC com o seguinte comando:

```bash
gcc main.c algoritmo.c arquivo.c -o arvore
```

Isso irá gerar o executável chamado `arvore`.

### Passo 3: Preparar o Arquivo de Entrada

Crie um arquivo `.txt` contendo os pontos a serem processados, no seguinte formato:

```
[número de pontos]
[coordenada X1] [coordenada Y1]
[coordenada X2] [coordenada Y2]
...
[coordenada Xn] [coordenada Yn]
```

**Exemplo**:

```
4
1 1
5 1
1 5
5 5
```

### Passo 4: Executar o Programa

Para executar o programa, utilize um dos seguintes comandos, dependendo da forma de compilação:

#### Usando o Makefile

```bash
./nome-do-executavel nome-do-arquivo.txt
```

Substitua `nome-do-executavel` pelo nome do arquivo executável gerado (por exemplo, `arvore`) e `nome-do-arquivo.txt` pelo arquivo de entrada contendo os pontos.

#### Caso tenha compilado manualmente

```bash
./arvore nome-do-arquivo.txt
```

### Exemplo de Execução

Suponha que o arquivo `pontos.txt` contenha o seguinte:

```
4
1 1
5 1
1 5
5 5
```

Você executaria o programa da seguinte forma:

```bash
./arvore pontos.txt
```

O programa calculará a árvore geradora mínima para os pontos fornecidos e exibirá o resultado no terminal.

## Estrutura dos Arquivos

- **`arquivo.c` e `arquivo.h`**: Responsáveis pela função de leitura dos pontos no arquivo de entrada.
  - **Função**: `leituraArquivo`
    - **Descrição**: Lê os pontos a partir de um arquivo de texto e armazena as coordenadas.

- **`algoritmo.c` e `algoritmo.h`**: Implementam o cálculo da árvore geradora mínima.
  - **Função**: `calculaArvoreGeradoraMinima`
    - **Descrição**: Calcula a AGM utilizando os pontos lidos.

- **`main.c`**: Função principal que executa a leitura dos dados e o algoritmo de árvore geradora mínima.
  - **Função**: `main`
    - **Descrição**: Integra as funções de leitura e processamento, exibindo o resultado final.

## Autor
Lukas Rodrigies Basilio e Ryan Carlos Sarcinelli