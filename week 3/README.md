# 🦆 WEEK 3 - CS50: Algorithms

## 📝 O que aprendi

Essa semana foi sobre **algoritmos** - como resolver problemas de forma eficiente. Aprendi que existem várias maneiras de fazer a mesma coisa, mas algumas são MUITO mais rápidas que outras.

**Conceitos principais:**
- **Busca linear vs busca binária:** A primeira vai um por um, a segunda divide o problema pela metade
- **Complexidade de algoritmo:** Como medir se um código é rápido ou lento (Big O)
- **Ordenação:** Bubble sort, selection sort, merge sort - cada um com seus prós e contras
- **Recursão:** Funções que chamam a si mesmas

---

## 🧠 Conceitos que pratiquei

| Conceito | Como usei |
|----------|-----------|
| **Busca linear** | Percorri arrays um elemento por vez até encontrar o que queria |
| **Busca binária** | Dividi a lista ordenada pela metade repetidamente - MUITO mais rápida |
| **Bubble sort** | Comparei pares de números repetidamente até que tudo estivesse ordenado |
| **Selection sort** | Encontrei o menor elemento e coloquei na posição correta |
| **Merge sort** | Dividi o problema em pedaços menores, ordenei e juntei |
| **Recursão** | Criei funções que se chamam dentro delas mesmas |
| **Big O** | Entendi que `O(log n)` é muito melhor que `O(n²)` |

---

## 🏗️ Projetos que desenvolvi

### 1. Plurality (eleição simples)

Programa que simula uma eleição onde os votos são contados e o candidato com mais votos vence.

**Conceitos aplicados:**
- Arrays de estruturas (candidato com nome e votos)
- Busca linear para encontrar candidato pelo nome
- Atualização de contadores

**Desafio:** Entender como estruturas funcionam e como acessar seus campos.

---

### 2. Runoff (eleição com eliminação)

Simulação de um sistema de votação onde os candidatos são eliminados até alguém ter mais de 50% dos votos.

**Conceitos aplicados:**
- Múltiplas rodadas de contagem
- Eliminação de candidatos com menos votos
- Transferência de votos para a próxima escolha

**Desafio:** Foi bem mais complexo! Precisava rastrear quem ainda estava na disputa e contar os votos de cada rodada.

---

## 💡 Desafios que enfrentei

- [ ] **Entender Big O:** No começo, não via diferença entre `O(n)` e `O(log n)`. Depois de testar na prática, fez sentido
- [ ] **Recursão:** Foi estranho pensar em uma função chamando ela mesma. Precisava visualizar a pilha
- [ ] **Merge sort:** Dividir em pedaços, ordenar e juntar exigiu atenção redobrada

---

## 📦 Como executar

### Plurality
```bash
cd week3/plurality
make plurality
./plurality [nomes dos candidatos]
