# get_next_line

O projeto **get_next_line** faz parte do currículo da 42 School e tem como objetivo implementar uma função em C que permite a leitura de linhas de um ficheiro ou da entrada padrão, de forma eficiente e contínua. Esta função simula o comportamento da função padrão de leitura, mas oferece maior flexibilidade ao lidar com diferentes descritores de ficheiros e buffers de tamanho variável.

## Funcionalidade

A função `get_next_line` permite:
- Ler uma linha de um ficheiro ou da entrada padrão por chamada, sem perder dados entre as chamadas subsequentes.
- Suportar múltiplos descritores de ficheiros abertos simultaneamente.
- Gerir buffers de qualquer tamanho, mantendo a eficiência na alocação e gestão de memória.

## Como Usar

git clone [https://github.com/pnovato/get_next_line.git](https://github.com/pnovato/get_next_line)

cd get_next_line

gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c main.c

./a.out

## Estrutura do Projeto
get_next_line/

├── get_next_line.c         # Função principal que implementa a lógica de leitura de linhas

├── get_next_line_utils.c   # Funções auxiliares para gestão de memória e strings

├── get_next_line.h         # Header file com protótipos e definições

└── main.c                  # Arquivo principal de teste

## Conceitos Importantes

Durante o desenvolvimento deste projeto, foram abordados e consolidados conceitos fundamentais, como:

  Manipulação de descritores de ficheiros através da função read.
  Alocação dinâmica de memória com malloc e gestão eficiente de buffers.
  Manipulação de strings e arrays, com especial atenção à performance e à integridade dos dados.
  Gestão de múltiplos ficheiros abertos, utilizando uma tabela de descritores.
  

## Feito com ❤️ como parte do percurso na 42 School.

Gostaste deste `README`? Queres que acrescente ou modifique algo?


