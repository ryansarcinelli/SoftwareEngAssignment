Projeto de Conexão de Computadores - Árvore de Caminho Mínimo de Borůvka
Descrição
Este projeto tem como objetivo calcular a quantidade mínima de cabos necessária para conectar todos os computadores em um laboratório de informática. Utilizando o algoritmo de Árvore de Caminho Mínimo de Borůvka, o programa encontra a solução mais eficiente para conectar os N computadores, com o menor comprimento total de cabos.

Instalação
Siga os passos abaixo para instalar e rodar o projeto em sua máquina:

Clone o repositório:

1- Clone o repositório:
git clone https://github.com/ryansarcinelli/SoftwareEngAssignment.git
Compile o projeto utilizando o make:

2- Compile o projeto utilizando o make:
make

3- O projeto sera executado e agora é so inserir o nome do arquivo de entrada:
entrada.txt


Como Usar

Crie um arquivo de entrada com as coordenadas dos computadores (x, y), conforme o formato especificado abaixo.
Execute o programa passando o nome do arquivo de entrada como parâmetro:


make
entrada.txt

O programa calculará e exibirá o comprimento total dos cabos necessários.



Formato do Arquivo de Entrada
Primeira linha: um número inteiro N representando a quantidade de computadores.
As próximas N linhas: coordenadas x e y dos computadores, separadas por espaço.
Exemplo de arquivo de entrada:

Exemplo de arquivo de entrada:
4
0 0
2 2
2 0
0 2

Exemplo de Saída
Após executar o programa com o exemplo de entrada acima, o resultado será:

Comprimento total dos cabos: 4.83


Funcionalidades:

-Cálculo da quantidade mínima de cabos necessária para conectar N computadores.
-Implementação do algoritmo de Árvore de Caminho Mínimo de Borůvka.
-Leitura de coordenadas dos computadores a partir de um arquivo de entrada.
-Saída formatada com precisão de duas casas decimais.


Estrutura do Projeto
O projeto está organizado da seguinte maneira:

main.c: Arquivo principal que executa o programa.
algoritmo.c e algoritmo_boruvka.h: Implementação do algoritmo de Borůvka.
arquivo.c e leitura_arquivo.h: Funções para leitura dos dados de entrada.
Makefile: Script para compilar o projeto.
README.md: Documentação do projeto.
DOCUMENTATION.md: Documentação detalhada do projeto.


Faça um fork do repositório.
Crie uma nova branch com sua funcionalidade: git checkout -b feature/nova-funcionalidade.
Faça commit das suas mudanças: git commit -m 'Adiciona nova funcionalidade'.
Envie para a branch principal: git push origin feature/nova-funcionalidade.
Crie um Pull Request.


Licença
Este projeto está licenciado sob a MIT License.

