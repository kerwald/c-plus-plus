# Exercícios de Programação em C++

## Enunciados

### Conceitos Básicos (Entrada, Saída e Tipos)

#### [Exercicio 001](001.cpp)
Escreva um programa que use `std::cout` para imprimir "Bem-vindo ao C++!" na tela.

#### [Exercicio 002](002.cpp)
Escreva um programa que declare uma variável `int` e uma `double`. Peça ao usuário para digitar um valor para cada uma usando `std::cin` e, em seguida, imprima os valores lidos na tela com `std::cout`.

#### [Exercicio 003](003.cpp)
Crie um programa que peça ao usuário para digitar seu nome completo. Armazene o nome em uma `std::string` e, em seguida, imprima uma mensagem de boas-vindas com o nome do usuário.

#### [Exercicio 004](004.cpp)
Declare duas variáveis do tipo `bool`, uma inicializada com `true` e outra com `false`. Imprima seus valores na tela. (Observação: `std::cout` imprimirá 1 para `true` e 0 para `false`).

#### [Exercicio 005](005.cpp)
Escreva um programa que leia dois números inteiros e armazene em uma variável `bool` o resultado da comparação "o primeiro número é maior que o segundo?". Imprima o resultado booleano.

#### [Exercicio 006](006.cpp)
Peça ao usuário o primeiro nome e o sobrenome, separadamente. Armazene-os em duas `std::string`s. Crie uma terceira `std::string` que seja a concatenação das duas primeiras (com um espaço no meio) e imprima o nome completo.

#### [Exercicio 007](007.cpp)
Leia duas palavras do teclado e use o operador `==` para verificar se são iguais. Imprima o resultado da comparação (`true` ou `false`).

#### [Exercicio 008](008.cpp)
Leia uma frase e use o método `.length()` (ou `.size()`) da `std::string` para imprimir quantos caracteres ela possui.

#### [Exercicio 009](009.cpp)
Crie uma função que recebe um `int` e retorna `true` se o número for par e `false` caso contrário. Teste a função na `main`.

#### [Exercicio 010](010.cpp)
Utilize `std::cerr` para imprimir uma mensagem de erro. Por exemplo, leia a idade de um usuário e, se for negativa, imprima "Erro: idade inválida." em `std::cerr`.

### Funções e Passagem de Parâmetros (Referências)

#### [Exercicio 011](011.cpp)
Crie uma função `void troca(int &a, int &b)` que receba duas variáveis inteiras por referência e troque seus conteúdos. Na função `main`, leia duas variáveis, chame a função e imprima os valores trocados.

#### [Exercicio 012](012.cpp)
Elabore uma função que receba um número inteiro por referência e o modifique, atribuindo a ele o seu dobro. Na `main`, leia um valor, chame a função e imprima o resultado.

#### [Exercicio 013](013.cpp)
Faça uma função que receba dois valores inteiros por referência e armazene o maior valor na primeira variável e o menor na segunda. Escreva o conteúdo das duas variáveis na tela na função `main`.

#### [Exercicio 014](014.cpp)
Faça um programa que leia três valores inteiros e chame uma função que receba estes 3 valores por referência e os ordene em ordem crescente. Imprima os valores ordenados na `main`.

#### [Exercicio 015](015.cpp)
Escreva uma função que receba uma `std::string` por referência e converta todos os seus caracteres para maiúsculas. (Dica: você pode usar a função `toupper()`).

#### [Exercicio 016](016.cpp)
Escreva uma função que receba um número real (`double`) e retorne sua parte inteira e sua parte fracionária através de parâmetros por referência. Protótipo: `void separar(double num, int &inteiro, double &frac);`

### Sobrecarga de Funções

#### [Exercicio 017](017.cpp)
Escreva duas funções chamadas `imprimir`. Uma deve receber um `int` como parâmetro e imprimi-lo. A outra deve receber uma `std::string` e imprimi-la. Teste ambas na sua função `main`.

#### [Exercicio 018](018.cpp)
Crie duas funções `maior`, ambas recebendo dois parâmetros. Uma deve comparar dois `int`s e retornar o maior. A outra deve comparar dois `double`s e retornar o maior. Teste as duas.

#### [Exercicio 019](019.cpp)
Escreva duas funções sobrecarregadas chamadas `calcularArea`. A primeira deve receber o lado de um quadrado (um `double`) e retornar sua área. A segunda deve receber a base e a altura de um retângulo (dois `double`s) e retornar sua área.

#### [Exercicio 020](020.cpp)
Crie uma função sobrecarregada `operacao`. A primeira versão recebe dois `int`s por referência, `a` e `b`, e armazena `a+b` em `a` e `a-b` (original) em `b`. A segunda versão faz o mesmo para dois `double`s.

### Organização de Código (Namespaces e Escopo)

#### [Exercicio 021](021.cpp)
Crie um `namespace` chamado `Matematica`. Dentro dele, crie uma função `int soma(int a, int b)`. Na `main`, chame essa função para somar dois números e imprimir o resultado.

#### [Exercicio 022](022.cpp)
Crie dois `namespaces`, `N1` e `N2`. Em cada um, crie uma função `void imprimir()` que imprima o nome do seu `namespace` (ex: "Funcao dentro de N1"). Na `main`, chame ambas as funções para ver como o `namespace` resolve o conflito.

#### [Exercicio 023](023.cpp)
Usando o exercício anterior, crie um alias `apelido = N1` e use o alias para chamar a função `imprimir()` de `N1`.

#### [Exercicio 024](024.cpp)
No seu `namespace` `Matematica`, adicione uma função `subtracao(int a, int b)`. Teste-a na função `main`.

#### [Exercicio 025](025.cpp)
Declare uma variável global `x`. Dentro da `main`, declare outra variável `x` (local). Use o operador de resolução de escopo `::` para imprimir a variável global (`::x`) e depois imprima a variável local (`x`).

### Recursos Modernos (auto e Declarações Flexíveis)

#### [Exercicio 026](026.cpp)
Declare uma variável `a` inicializada com o valor `10`, uma `b` com `3.14` e uma `c` com `"teste"`. Use a palavra-chave `auto` para todas elas. Imprima os valores para verificar se os tipos foram inferidos corretamente.

#### [Exercicio 027](027.cpp)
Crie um programa que primeiro imprima uma mensagem. Depois, leia um número do usuário e só então declare uma variável para armazenar o dobro desse número. Por fim, imprima o resultado. Note como a variável foi declarada apenas quando se tornou necessária.

#### [Exercicio 028](028.cpp)
Escreva um programa que calcule uma expressão complexa, como `(5 * 4.5) - (3.1 / 2.0)`. Use `auto` para declarar a variável que guardará o resultado e depois imprima-a.

#### [Exercicio 029](029.cpp)
Crie uma função que receba uma `std::string` e um `char`. A função deve contar as ocorrências do `char` na `string` e retornar essa contagem. Na `main`, use `auto` para armazenar o resultado da função e imprima-o.

#### [Exercicio 030](030.cpp)
Crie uma função `processarNumero` que recebe um `int` por referência. Dentro da `main`, leia um número. Chame a função, que deve multiplicar o número por 2. Use `auto` para declarar uma `std::string` com uma mensagem de resultado. Por fim, use `std::cout` para imprimir a mensagem e o novo valor.