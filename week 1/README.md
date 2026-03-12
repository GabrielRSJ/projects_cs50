📝 O que aprendi
Nessa semana entrei no C, uma linguagem de programação compilada. Foi dificil no começo porque a sintaxe é bem diferente do Python, mas percebi que os conceitos de lógica são os mesmos que usei no Scratch.

Aprendi sobre:

Sintaxe básica do C: #include, int main(void), printf, {}, ; 

Tipos de dados: int, float, char, string (com a biblioteca CS50)

Compilação: Entendi que diferente do Python, o C precisa ser compilado com make ou gcc antes de executar

Entrada do usuário: Usei as funções da biblioteca CS50 (get_int, get_string, etc.) que facilitam muito

Loops: for, while, do-while 

Condicionais: if, else if, else

Escopo de variáveis: Onde declarar faz diferença!

🧠 Conceitos que pratiquei
Conceito	Como usei em C
Loops (for, while)	Usei for para repetir ações um número específico de vezes e while para repetir enquanto uma condição fosse verdadeira
Condicionais (if/else)	Tomei decisões no código, como "se o usuário digitar altura inválida, peça novamente"
Variáveis	Guardei valores como altura da pirâmide, número do cartão, contadores e somas
Funções	Criei funções para organizar melhor o código (como get_positive_int)
Escopo	Entendi que variáveis dentro de {} não existem fora dali
Compilação	Aprendi a compilar com make e a executar no terminal
🏗️ Projetos que desenvolvi
1. Mario (pirâmides)
Recriei as pirâmides do jogo Mario no terminal. O usuário escolhe a altura (entre 1 e 8) e o programa imprime uma pirâmide de hashtags.

c
// Exemplo com altura 4:
   #
  ##
 ###
####
Conceitos aplicados:

Loops aninhados (um loop para linhas, outro para espaços, outro para hashtags)

Validação de entrada com do-while

Lógica de repetição

Desafio: Entender como os espaços diminuem enquanto as hashtags aumentam.

2. Cash (troco)
Programa que calcula o menor número de moedas possível para dar um determinado troco.

c
// Exemplo: troco de R$0,41 = 4 moedas (25 + 10 + 5 + 1)
Conceitos aplicados:

Loops while

Operações matemáticas (divisão, módulo)

Desafio: Evitar erros de precisão com números decimais.

3. Credit (validação de cartão)
Programa que valida se um número de cartão de crédito é válido (algoritmo de Luhn) e identifica a bandeira (Visa, Mastercard, Amex).

c
// Exemplo: 4003600000000014 = VISA
Conceitos aplicados:

Manipulação de dígitos com matemática

Loops para percorrer cada dígito

Lógica de validação

Desafio: Foi o mais difícil! Entender o algoritmo de Luhn e separar cada dígito individualmente.

💡 Desafios que enfrentei
Sintaxe nova: Esquecer ; ou {} era constante no começo, mas com prática virou automático

Compilação: No Python era só rodar, no C precisei entender o processo de compilar e linkar

Tipagem forte: Diferente do Python, não posso misturar int e float sem cuidado

Mario - lógica dos espaços: Entender que altura - linha - 1 espaços era necessário

Credit - algoritmo de Luhn: Foi um exercício de paciência e lógica matemática

Debugging: Aprendi a usar printf para ver valores intermediários 

📦 Como executar os projetos
Pré-requisitos
Compilador C (gcc)

Biblioteca CS50 instalada

Exemplo (Mario)

cd week1/mario
make mario
./mario
