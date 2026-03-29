# 🦆 WEEK 4 - CS50: Memory

![CS50](https://img.shields.io/badge/CS50-Harvard-blue)
![Progress](https://img.shields.io/badge/Progress-Week_4-yellow)
![Status](https://img.shields.io/badge/Status-In_Progress-orange)

---

## 📝 O que aprendi

Essa semana foi sobre **memória** — como os computadores realmente armazenam e acessam dados. Foi a semana mais difícil até agora, mas também a que me fez entender coisas que antes pareciam mágica.

**Conceitos principais:**

- **Ponteiros:** Variáveis que guardam endereços de memória em vez de valores
- **Alocação dinâmica (`malloc` e `free`):** Como pedir memória ao computador enquanto o programa roda e depois liberar
- **Pilha (stack) vs Heap:** Onde cada tipo de dado fica armazenado
- **Valgrind:** Ferramenta para detectar vazamentos de memória
- **Arquivos (`fopen`, `fread`, `fwrite`):** Como ler e escrever dados em arquivos

---

## 🧠 Conceitos que pratiquei

| Conceito | Como usei |
|----------|-----------|
| **Ponteiros (`*`, `&`)** | Guardei endereços de memória para acessar variáveis indiretamente |
| **Alocação dinâmica (`malloc`)** | Criei arrays cujo tamanho só sabia durante a execução |
| **Liberar memória (`free`)** | Evitei vazamentos de memória depois de usar `malloc` |
| **Valgrind** | Verifiquei se meu programa estava liberando toda memória alocada |
| **Arquivos (`fopen`, `fread`)** | Li dados de arquivos de áudio e imagem para processar |
| **Buffer** | Usei áreas temporárias para transferir dados entre arquivos |

---

## 🏗️ Projetos que desenvolvi

### 1. Volume

Programa que modifica o volume de um arquivo de áudio `.wav`.

**Conceitos aplicados:**
- Leitura e escrita de arquivos binários
- `fopen` para abrir arquivos
- `fread` e `fwrite` para ler/escrever blocos de dados
- Ponteiros para manipular os dados na memória

**Desafio:** Entender que um arquivo `.wav` tem um cabeçalho (header) que não deve ser modificado — apenas os dados de áudio.

---

### 2. Filter (menos confortável)

Programa que aplica filtros em imagens BMP: escala de cinza, sépia, reflexão (espelho), desfoque.

**Conceitos aplicados:**
- Manipulação de imagens como arrays 2D de pixels
- Cada pixel tem componentes RGB (vermelho, verde, azul)
- Algoritmos de convolução para desfoque
- Acesso a memória via ponteiros

**Desafio:** O filtro de desfoque foi o mais complicado. Precisava calcular a média de 9 pixels ao mesmo tempo e não interferir nos pixels já processados, entende sobre como modifica as imagens analisando os pixeis.

---

### 3. Recover

Programa que recupera imagens JPEG de um cartão de memória corrompido (arquivo `.raw`).

**Conceitos aplicados:**
- Leitura de arquivos em blocos de 512 bytes
- Identificar assinaturas de JPEG (`0xff 0xd8 0xff`)
- Criar novos arquivos dinamicamente com `fopen`
- Escrever blocos até encontrar o próximo JPEG

**Desafio:** Esse foi o mais legal! Precisei ler um arquivo gigante, identificar padrões e criar vários arquivos novos — tudo isso controlando ponteiros e memória.

---

## 💡 Desafios que enfrentei

- [ ] **Entender ponteiros:** No começo, era só `*` e `&` confusos. Depois de desenhar a memória no papel, fez sentido
- [ ] **`malloc` e `free`:** Aprendi que se você aloca memória, PRECISA liberar. Valgrind me ajudou a ver onde esquecia
- [ ] **Desfoque no Filter:** A lógica de média com convolução exigiu bastante atenção para não misturar pixels
- [ ] **Recover - identificar JPEGs:** Entender que `0xff 0xd8 0xff` é a assinatura e como comparar bytes no código
- [ ] **Valgrind:** A primeira vez que rodei, vi vários erros. Levei tempo para entender o que cada mensagem significava

---

## 📦 Como executar

### Volume
```bash
cd week4/volume
make volume
./volume input.wav output.wav 2.0
