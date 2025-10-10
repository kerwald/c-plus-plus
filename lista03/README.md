# Exercícios de Programação em C++

## Lista 3: Alocação Dinâmica e Construtores Avançados

**Conceito:** O objetivo desta lista é dominar a forma como o C++ gerencia a memória dinâmica e o ciclo de vida dos objetos, substituindo as práticas de C (`malloc`/`free`) pelas ferramentas mais seguras e poderosas da linguagem.

**Tópicos abordados:**
* Operadores `new` e `delete`.
* Construtor de Cópia (`Copy Constructor`).
* Operador de Atribuição por Cópia (`operator=`).
* Listas de Inicialização de Membros (`Member Initializer Lists`).
* Membros `static` e Métodos `static`.

---

### Parte 1: O Básico de `new` e `delete`

#### [Exercicio 001](001.cpp)
Escreva um programa que aloque dinamicamente uma variável inteira utilizando `new`. Atribua um valor a essa variável e imprima-o na tela. Não se esqueça de liberar a memória com `delete`.

#### [Exercicio 002](002.cpp)
Crie uma `struct` `Ponto` com duas variáveis `int` (x, y). Em sua função `main`, aloque dinamicamente uma variável do tipo `Ponto`, preencha seus valores e imprima-os. Libere a memória ao final.

#### [Exercicio 003](003.cpp)
Faça um programa que leia um número inteiro `N` do usuário. Em seguida, aloque dinamicamente um array de `N` floats usando `new[]`. Preencha este array com valores lidos do teclado e, por fim, imprima todos os valores. Libere a memória com `delete[]`.

#### [Exercicio 004](004.cpp)
Crie uma função que receba um ponteiro para um array de inteiros e seu tamanho atual. A função deve alocar um novo array com o dobro do tamanho, copiar os elementos do array antigo para o novo e liberar a memória do array antigo. A função deve retornar o ponteiro para o novo array.

#### [Exercicio 005](005.cpp)
Escreva um programa que aloque dinamicamente uma matriz de `L` linhas e `C` colunas (lidos do teclado). Lembre-se que uma matriz pode ser representada como um ponteiro para ponteiros (`int**`). Preencha a matriz e depois libere toda a memória alocada.

### Parte 2: Listas de Inicialização e Membros `const`

#### [Exercicio 006](006.cpp)
Crie uma classe `Retangulo` com membros privados `largura` e `altura`. Crie um construtor que recebe a largura e a altura e os inicializa **dentro do corpo do construtor**. Adicione um método `getArea()` que retorna a área.

#### [Exercicio 007](007.cpp)
Modifique a classe `Retangulo` do exercício anterior para usar a **lista de inicialização de membros** em seu construtor, em vez de fazer a atribuição no corpo.

#### [Exercicio 008](008.cpp)
Adicione um membro `const int ID` à classe `Retangulo`. Adapte o construtor para que ele receba um ID e o inicialize. Observe que isso só é possível utilizando a lista de inicialização.

#### [Exercicio 009](009.cpp)
Crie uma classe `Linha` que contenha dois objetos da classe `Ponto` (exercício 2) como membros. O construtor da `Linha` deve receber as coordenadas dos dois pontos e inicializar seus membros `Ponto` usando a lista de inicialização.

### Parte 3: Membros e Métodos `static`

#### [Exercicio 010](010.cpp)
Crie uma classe `Usuario` com qualquer atributo (ex: `std::string nome`). Adicione um membro `static int usuariosAtivos`. Incremente esse contador no construtor e decremente-o no destrutor.

#### [Exercicio 011](011.cpp)
Adicione um método `static int getUsuariosAtivos()` à classe `Usuario` que retorna o valor do contador. Crie alguns objetos `Usuario` na `main`, em escopos diferentes, e imprima o número de usuários ativos em vários pontos do programa para ver o contador mudar.

#### [Exercicio 012](012.cpp)
Crie uma classe `Matematica` que não possua atributos. Adicione um método `static double calcularPi(int precisao)` que calcula uma aproximação de Pi. Chame este método diretamente da `main` sem precisar criar um objeto `Matematica` (ex: `Matematica::calcularPi(10);`).

#### [Exercicio 013](013.cpp)
Crie uma classe `Configuracao` com um membro `static std::string idioma`. Crie métodos estáticos `getIdioma()` e `setIdioma()`. Demonstre na `main` que a mudança do idioma através da classe afeta o valor para todo o programa.

### Parte 4: O Construtor de Cópia

#### [Exercicio 014](014.cpp)
Crie uma classe `Caixa` com membros `largura`, `altura` e `profundidade`. Na `main`, crie um objeto `Caixa` e inicialize um segundo objeto a partir do primeiro (ex: `Caixa c2 = c1;`). Imprima os valores de ambos para ver a cópia membro a membro funcionando.

#### [Exercicio 015](015.cpp)
Crie uma classe `Buffer` que armazena um ponteiro para um array de `char` (`char* dados`) e um `int tamanho`. O construtor aloca o buffer com `new`. Na `main`, crie um objeto e inicialize um segundo a partir do primeiro. No final da `main`, observe o erro de "double free" que ocorrerá, pois ambos os destrutores tentarão liberar a mesma memória.

#### [Exercicio 016](016.cpp)
Corrija o problema da classe `Buffer` do exercício anterior implementando um **construtor de cópia** que aloca um novo espaço de memória para o segundo objeto e copia o conteúdo do buffer original para o novo espaço (isso é chamado de "deep copy").

#### [Exercicio 017](017.cpp)
Crie uma função `void imprimirBuffer(Buffer b)` que recebe um objeto `Buffer` por **valor**. Dentro da função, modifique o conteúdo do buffer recebido. Na `main`, crie um `Buffer`, chame essa função e depois imprima o conteúdo do seu buffer original para verificar que ele não foi alterado (graças ao construtor de cópia).

#### [Exercicio 018](018.cpp)
Crie uma função `Buffer criarBuffer(int tamanho)` que cria e retorna um `Buffer` por **valor**. Use-a na `main` para criar um objeto.

### Parte 5: O Operador de Atribuição por Cópia (`operator=`)

#### [Exercicio 019](019.cpp)
Use a classe `Caixa` (exercício 14). Na `main`, crie dois objetos distintos, `c1` e `c2`. Em seguida, faça `c2 = c1;`. Imprima os valores de `c2` para ver que eles foram sobrescritos.

#### [Exercicio 020](020.cpp)
Use a classe `Buffer` (exercício 15, sem o construtor de cópia). Na `main`, crie dois buffers `b1` e `b2` de tamanhos diferentes. Faça `b2 = b1;`. Observe que agora você tem um vazamento de memória (a memória original de `b2` foi perdida) e terá um erro de "double free" no final.

#### [Exercicio 021](021.cpp)
Implemente o **operador de atribuição por cópia** (`operator=`) para a classe `Buffer`. Ele deve: 1. Verificar se há auto-atribuição (`this == &outro`). 2. Liberar a memória que o objeto atual (`*this`) já possuía. 3. Alocar nova memória. 4. Copiar os dados do outro objeto. 5. Retornar `*this`.

#### [Exercicio 022](022.cpp)
Crie três objetos `Buffer` (`b1`, `b2`, `b3`). Faça atribuições encadeadas como `b1 = b2 = b3;` e verifique se tudo funciona corretamente.

#### [Exercicio 023](023.cpp)
Teste explicitamente a auto-atribuição no seu `operator=`: crie um `Buffer b1` e faça `b1 = b1;`. Seu programa não deve quebrar.

### Parte 6: A "Regra dos Três" (Destrutor, Construtor de Cópia, `operator=`)

#### [Exercicio 024](024.cpp)
Crie uma classe `MinhaString` que armazena o texto em um `char*` alocado dinamicamente. Implemente o construtor padrão, um construtor que recebe `const char*` e o destrutor.

#### [Exercicio 025](025.cpp)
Adicione à classe `MinhaString` um **construtor de cópia** que realize a cópia profunda do texto.

#### [Exercicio 026](026.cpp)
Adicione à classe `MinhaString` um **operador de atribuição por cópia** (`operator=`), seguindo as boas práticas (verificar auto-atribuição, liberar memória antiga, etc.).

#### [Exercicio 027](027.cpp)
Crie uma classe `VetorInt` que encapsula um array de inteiros dinâmico (`int*`) e seu tamanho. Implemente a "Regra dos Três" completa para esta classe.

#### [Exercicio 028](028.cpp)
Adicione um método `void adicionar(int valor)` à classe `VetorInt`. Este método deve criar um novo array maior, copiar os elementos antigos, adicionar o novo valor e liberar o array antigo.

#### [Exercicio 029](029.cpp)
Escreva um programa `main` que teste exaustivamente sua classe `VetorInt`: crie vetores, copie-os (usando o construtor de cópia), atribua um ao outro (usando o `operator=`), passe-os por valor para funções e verifique se não há vazamentos de memória ou comportamento inesperado.

#### [Exercicio 030](030.cpp)
Crie uma classe `Playlist` que contém um `nome` (use a classe `MinhaString` do exercício 24) e uma lista de músicas (use a classe `VetorInt` para representar os IDs das músicas, por exemplo). Discuta em um comentário no código se você precisaria reimplementar a "Regra dos Três" para a `Playlist` e por quê.