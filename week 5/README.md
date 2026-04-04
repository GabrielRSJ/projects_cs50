# 🦆 WEEK 5 - CS50: Data Structures

![CS50](https://img.shields.io/badge/CS50-Harvard-blue)
![Progress](https://img.shields.io/badge/Progress-Week_5-yellow)
![Status](https://img.shields.io/badge/Status-In_Progress-orange)

---

## 📝 O que aprendi

Essa semana foi sobre **estruturas de dados** — como organizar e armazenar informações de forma eficiente para que o computador consiga acessar, buscar e modificar dados rapidamente.

Aprendi que a escolha da estrutura certa pode fazer um programa rodar em segundos em vez de horas.

**Conceitos principais:**

- **Listas ligadas (linked lists):** Uma sequência de nós onde cada um aponta para o próximo
- **Árvores (trees):** Estruturas hierárquicas com um nó raiz e nós filhos
- **Árvores binárias de busca (BST):** Cada nó tem no máximo dois filhos — esquerdo (menor) e direito (maior)
- **Tabelas hash (hash tables):** Usam uma função hash para mapear chaves para índices — busca em O(1)!
- **Tries:** Estrutura otimizada para strings, onde cada nó representa uma letra
- **Pilhas (stacks) e Filas (queues):** Estruturas com regras específicas (LIFO e FIFO)

---

## 🧠 Conceitos que pratiquei

| Conceito | Como usei |
|----------|-----------|
| **Listas ligadas** | Criei nós com `typedef struct`, aloquei memória com `malloc` e encadeei os elementos |
| **Árvores binárias** | Implementei busca recursiva: se menor, vai pra esquerda; se maior, vai pra direita |
| **Tabelas hash** | Usei uma função hash simples para distribuir palavras em um array de listas ligadas |
| **Tries** | Armazenei palavras letra por letra, usando `calloc` para alocar os nós |
| **Recursão em estruturas** | Percorri árvores e tries com funções que chamam a si mesmas |
| **Gerenciamento de memória** | Liberei toda memória alocada com `free` e usei Valgrind para verificar vazamentos |

---

## 🏗️ Projetos que desenvolvi

### 1. Inheritance (simulação genética)

Programa que simula a herança genética: cada pessoa herda um alelo (gene) de cada um dos pais, com probabilidades baseadas no DNA.

**Conceitos aplicados:**
- Estruturas aninhadas (pessoa com mãe, pai e alelos)
- Alocação dinâmica com `malloc`
- Recursão para criar a árvore familiar
- Liberação de memória após o uso

**Desafio:** Entender como a recursão funcionava para criar e liberar toda a árvore de pessoas.

---

### 2. Speller (corretor ortográfico) — o grande desafio! ⭐

O projeto mais importante da semana (e talvez do curso!). Implementei um corretor ortográfico que carrega um dicionário de palavras na memória e verifica se as palavras de um texto estão corretas.

**Estruturas que implementei:**
- **Tabela hash:** Usei 26 listas ligadas (uma para cada letra inicial)
- **Lista ligada:** Cada nó contém uma palavra e um ponteiro para o próximo
- **Função hash:** Calculei o índice baseado no valor ASCII da primeira letra

**Funções que implementei:**
- `load()` — carregar dicionário na memória
- `check()` — verificar se uma palavra está no dicionário
- `size()` — contar quantas palavras foram carregadas
- `unload()` — liberar toda a memória alocada

**Desafios:**
- Escolher a estrutura certa para buscar palavras rapidamente
- Otimizar a função hash para distribuir bem as palavras
- Garantir que não havia vazamentos de memória (Valgrind)
- Balancear tempo de execução com memória usada

**Resultado:** Consegui um dicionário de 143.091 palavras rodando em menos de 0.05 segundos! 🚀

---

## 💡 Desafios que enfrentei

- **Entender listas ligadas:** No começo, visualizar que cada nó tem um ponteiro para o próximo foi abstrato. Depois de desenhar no papel, clicou
- **Recursão em árvores:** Percorrer uma árvore recursivamente exigiu pensar de forma diferente — o que é o caso base? O que é o passo recursivo?
- **Função hash:** Criar uma função que distribui palavras uniformemente sem consumir muita memória foi um desafio de otimização
- **Speller - vazamentos de memória:** Levei horas ajustando o `unload()` para liberar toda a lista ligada sem perder nenhum nó
- **Valgrind:** Aprendi a ler os relatórios: "definitely lost" significa que esqueci de dar `free` em algum lugar
- **Balancear tempo vs memória:** Tabela hash maior = mais rápida mas gasta mais memória. Tive que achar o equilíbrio certo

---

## 📦 Como executar

### Inheritance

cd week5/inheritance
make inheritance
./inheritance

codigo: https://github.com/GabrielRSJ/projects_cs50/blob/main/week%205/inheritance.c
