🦆 WEEK 2 - CS50: Arrays
📝 O que aprendi
Essa semana foi sobre arrays (listas em C) e como os computadores armazenam e manipulam dados na memória. Finalmente comecei a entender como strings funcionam por baixo dos panos!

Principais aprendizados:


Arrays:	Coleções de elementos do mesmo tipo armazenados em sequência na memória

Strings:	Na verdade são arrays de caracteres (char) terminados com \0 (null)

Passagem por valor vs referência:	Entender que arrays são passados como referência (o índice original muda)

Argumentos de linha de comando:	argc e argv para passar parâmetros ao executar o programa
🧠 Conceitos que pratiquei

Declaração de arrays:	int scores[3]; ou string words[10];

Acesso por índice:	array[0] para primeiro elemento

Strings como arrays:	string s = "hello"; → s[0] = 'h', s[4] = 'o'

Tamanho de strings:	Usei strlen() da biblioteca <string.h>

Argumentos de linha de comando:	int main(int argc, string argv[]) para receber parâmetros

Validação de entrada:	Verificar se usuário passou argumentos corretos

🏗️ Projetos que desenvolvi

1. Scrabble

Programa que calcula a pontuação de duas palavras no jogo Scrabble e declara o vencedor.


Conceitos aplicados:


Arrays para mapear letras para pontuação


Loops para percorrer strings


Funções para organizar código


c

// Exemplo:

// Palavra 1: "computer" -> 14 pontos

// Palavra 2: "science"  -> 12 pontos

// Resultado: Jogador 1 vence!

Desafio: Mapear letras maiúsculas e minúsculas para a mesma pontuação.


2. Readability

Programa que calcula o nível de leitura de um texto usando o índice Coleman-Liau.


text

Índice = 0.0588 * L - 0.296 * S - 15.8

(L = média de letras por 100 palavras, S = média de frases por 100 palavras)

Conceitos aplicados:



Percorrer strings caractere por caractere


Contar letras, palavras e frases


Matemática com floats


Loops aninhados


Desafio: Identificar corretamente o que é letra, palavra ou frase (espaços, pontuação, etc.)


Desafios que enfrentei

Entender que string = array de char: No começo era abstrato, mas depois de manipular caractere por caractere fez sentido


Contar palavras corretamente: Perceber que espaços separam palavras, mas o último caractere não tem espaço

entender como rotacionar um numero para o exercicio caesar.c

cd week2/caesar

make caesar

./caesar

link:(https://github.com/GabrielRSJ/projects_cs50/blob/main/week%202/caesar.c)
