# 🦆 WEEK 6 - CS50: Python

![CS50](https://img.shields.io/badge/CS50-Harvard-blue)
![Progress](https://img.shields.io/badge/Progress-Week_6-yellow)
![Status](https://img.shields.io/badge/Status-In_Progress-orange)

---

## 📝 O que aprendi

Essa semana foi sobre **Python** — como escrever código na linguagem Python, fazendo o mesmo processo de adaptação do Scratch para C, só que agora de C para Python.

Aprendi que Python tem muita inspiração da linguagem C, mas com uma sintaxe muito mais amigável e dinâmica.

**Conceitos principais:**

- **Variáveis:** Diferente do C, em Python não é necessário definir o tipo
- **Sintaxe:** Apresenta uma sintaxe bem mais simples que C, usando palavras em inglês ao invés de símbolos como `&&`
- **Listas:** Se assemelham a arrays, porém funcionam bem melhor e são mais dinâmicas
- **Tuplas:** Listas só que imutáveis
- **Dicionários:** Se assemelham a tabelas hash, só que em Python
- **Compreensão de listas:** Forma concisa de criar listas baseadas em listas existentes
- **Tratamento de erros (`try/except`):** Diferente do C, Python permite capturar exceções de forma elegante

---

## 🧠 Conceitos que pratiquei

| Conceito | Como usei |
|----------|-----------|
| **Variáveis sem tipo** | Declarei `x = 5` sem precisar especificar `int` |
| **Listas** | Usei `lista.append()`, `len(lista)`, fatiamento `lista[1:3]` |
| **Tuplas** | Armazenei coordenadas como `(x, y)` que não podem ser alteradas |
| **Dicionários** | Criei `{"nome": "Maria", "idade": 25}` para acesso rápido por chave |
| **Compreensão de listas** | `[x**2 for x in range(10)]` para gerar quadrados |
| **`try/except`** | Capturei erros de digitação do usuário sem quebrar o programa |
| **Arquivos** | Usei `open()`, `read()`, `write()` para manipular arquivos |

---

## 🏗️ Projetos que desenvolvi

### 1. Hello, Mario, Cash, Credit (versões em Python)

Refiz os problemas da Week 1 em Python para comparar a diferença de sintaxe e complexidade.

**Diferenças que notei:**
- Em C: precisava de `#include`, `int main(void)`, `printf()`, `scanf()`
- Em Python: apenas `print()` e `input()` — muito mais direto

**Conceitos aplicados:**
- Loops `for` e `while`
- Condicionais `if/elif/else`
- Funções `def`
- Entrada e saída com `input()` e `print()`

**Desafio:** Me adaptar a não usar ponto e vírgula no final de cada linha!

---

### 2. Readability (versão em Python)

Implementei o cálculo do índice de leitura em Python, que antes tinha feito em C.

**Conceitos aplicados:**
- Strings em Python são mais fáceis de manipular
- `str.isalpha()` para verificar se é letra
- `str.split()` para separar palavras

**Desafio:** Aproveitar as funções nativas do Python para simplificar o código.

---

### 3. DNA (busca em banco de dados) ⭐

Programa que identifica a pessoa dona de uma amostra de DNA baseada em STRs (Short Tandem Repeats).

**Conceitos aplicados:**
- Leitura de arquivos CSV com `csv.reader`
- Leitura de arquivos de texto com `open()` e `read()`
- Dicionários para armazenar contagens de STRs
- Loops aninhados para contar repetições de padrões

**Desafio:** Foi o projeto mais complexo da semana! Precisava contar sequências repetidas no DNA e comparar com um banco de dados de pessoas.

---

## 💡 Desafios que enfrentei

- **Sintaxe diferente:** No começo, esquecia os dois pontos `:` e a indentação obrigatória
- **Dicionários:** Entender que dicionários são como tabelas hash e permitem acesso em O(1)
- **Compreensão de listas:** A princípio parecia confuso, mas depois vi como é poderosa
- **DNA - contar STRs:** A lógica para contar repetições consecutivas de um padrão exigiu atenção
- **Adaptação de C para Python:** Alguns hábitos do C (como `for (int i = 0; i < n; i++)`) tive que reaprender

---
