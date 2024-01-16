### Terceiro trabalho prático de algoritmos e estrutura de dados 2. 

# Conversor de Código Morse Usando Árvores Binárias

## Objetivo
Desenvolver um programa que utilize árvores binárias para armazenar e pesquisar o Código Morse, convertendo mensagens de Morse para texto e vice-versa.

## Estrutura do Projeto
- **Construção da Árvore**:
  - Implementar um tipo abstrato de dados para a árvore.
  - Funções para inicializar, inserir nodos.
  - Procedimento para imprimir a árvore em pré-ordem.

- **Conversão de Mensagens**:
  1. Converter mensagens alfanuméricas para Morse, lendo de um arquivo e imprimindo ambas as formas.
  2. Converter mensagens em Morse para texto, com testes usando o arquivo `msg.txt`.

## Detalhes Adicionais
- Cada símbolo do alfabeto em Morse é codificado por pontos (.) e traços (-).
- Espaços são usados como separadores de símbolos; '/' como separador de palavras.
- O programa deve "descer" na árvore binária conforme lê os pontos e traços para encontrar o símbolo correspondente.
