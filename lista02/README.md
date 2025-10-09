# Exercícios de Programação em C++

## Lista 2: Introdução a Classes e Objetos

**Conceito:** A base da Programação Orientada a Objetos. O objetivo destes exercícios é entender como agrupar dados (atributos) e as funções que operam nesses dados (métodos) dentro de uma única estrutura chamada `class`.

### Parte 1: O Básico de Classes e Objetos

#### [Exercicio 001](001.cpp)
Crie uma classe chamada `Pessoa` que contenha dois atributos públicos: uma `std::string` para o `nome` e um `int` para a `idade`.

#### [Exercicio 002](002.cpp)
No `main`, crie um objeto (uma instância) da classe `Pessoa`. Acesse e modifique diretamente seus atributos `nome` e `idade` e depois imprima-os usando `std::cout`.

#### [Exercicio 003](003.cpp)
Adicione à classe `Pessoa` um método público chamado `apresentar()` que não recebe parâmetros e não retorna nada (`void`). Esse método deve imprimir no console uma frase como: "Olá, meu nome é [nome] e eu tenho [idade] anos.".

#### [Exercicio 004](004.cpp)
No `main`, depois de definir o nome e a idade do objeto `Pessoa`, chame o método `apresentar()` para que o próprio objeto exiba suas informações.

### Parte 2: Encapsulamento (public, private)

#### [Exercicio 005](005.cpp)
Modifique a classe `Pessoa` para que seus atributos `nome` e `idade` sejam `private`. Tente compilar o código do exercício 2. O que acontece? Por quê? (A ideia é observar o erro de compilação).

#### [Exercicio 006](006.cpp)
Crie um método público na classe `Pessoa` chamado `setNome(std::string n)` e outro chamado `setIdade(int i)`. Esses métodos devem ser usados para alterar os valores dos atributos privados.

#### [Exercicio 007](007.cpp)
Crie um método público na classe `Pessoa` chamado `getNome()` que retorna a `std::string` do nome e outro chamado `getIdade()` que retorna o `int` da idade.

#### [Exercicio 008](008.cpp)
No `main`, crie um objeto `Pessoa`, utilize os métodos "set" para definir seus dados e os métodos "get" para obter os dados e imprimi-los na tela.

#### [Exercicio 009](009.cpp)
Crie uma classe `Carro` com atributos `private` para `marca` (`std::string`), `modelo` (`std::string`) e `ano` (`int`). Adicione métodos `public` para configurar e obter cada um desses atributos (getters e setters).

#### [Exercicio 010](010.cpp)
Modifique o método `setAno` da classe `Carro` para que ele só aceite anos entre 1950 e 2024. Se um ano inválido for fornecido, o método deve atribuir o valor 0 ao ano.

### Parte 3: Construtores e Destrutores

#### [Exercicio 011](011.cpp)
Crie uma classe `Retangulo` com atributos `private` `largura` e `altura`. Adicione um construtor padrão (sem argumentos) que inicialize `largura` e `altura` com o valor 1.

#### [Exercicio 012](012.cpp)
Adicione um método público `calcularArea()` na classe `Retangulo` que retorna a área (`largura * altura`). No `main`, crie um objeto `Retangulo` e imprima sua área.

#### [Exercicio 013](013.cpp)
Adicione à classe `Retangulo` um segundo construtor que aceite dois parâmetros (`double l, double a`) para inicializar a `largura` e a `altura`.

#### [Exercicio 014](014.cpp)
No `main`, crie dois objetos da classe `Retangulo`: um usando o construtor padrão e outro passando os valores 5 e 10 para o construtor parametrizado. Imprima a área de cada um.

#### [Exercicio 015](015.cpp)
Crie uma classe `ContaBancaria` com atributos `private` `numeroDaConta` (`int`) e `saldo` (`double`). Crie um construtor que receba o número da conta e o saldo inicial.

#### [Exercicio 016](016.cpp)
Adicione à classe `ContaBancaria` os métodos `depositar(double valor)` e `sacar(double valor)`. O método `sacar` não deve permitir que o saldo fique negativo. Adicione também um método `getSaldo()` que retorna o saldo atual.

#### [Exercicio 017](017.cpp)
No `main`, crie uma `ContaBancaria`, realize um depósito, tente realizar um saque maior que o saldo e depois um saque válido. Imprima o saldo final.

#### [Exercicio 018](018.cpp)
Crie uma classe simples chamada `Log` que, em seu construtor, imprima "Log criado." e, em seu destrutor (`~Log()`), imprima "Log destruído.". No `main`, crie um objeto `Log` para ver as mensagens serem impressas.

### Parte 4: O Ponteiro `this`

#### [Exercicio 019](019.cpp)
Crie uma classe `Produto` com um atributo `private` `preco`. Crie um método `setPreco(double preco)` onde o nome do parâmetro é igual ao nome do atributo. Use o ponteiro `this` (`this->preco = preco;`) para diferenciar o atributo do parâmetro.

#### [Exercicio 020](020.cpp)
Crie um método `aumentarPreco(double percentual)` na classe `Produto` que aumenta o preço do produto. Faça este método retornar uma referência ao próprio objeto (`*this`).

#### [Exercicio 021](021.cpp)
Use o retorno do exercício anterior para, no `main`, chamar métodos em sequência. Ex: `meuProduto.setPreco(100.0).aumentarPreco(10);`. Imprima o preço final.

### Parte 5: `struct` vs. `class` em C++

#### [Exercicio 022](022.cpp)
Crie uma `struct` chamada `Ponto` com dois membros públicos `x` e `y`. No `main`, crie uma instância de `Ponto` e acesse seus membros diretamente.

#### [Exercicio 023](023.cpp)
Adicione à `struct` `Ponto` um método `distanciaOrigem()` que calcula e retorna a distância do ponto até a origem (0,0), usando a fórmula $\sqrt{x^2 + y^2}$. (Use a biblioteca `<cmath>` para `sqrt`).

#### [Exercicio 024](024.cpp)
Crie uma `class` chamada `PontoClass` com os mesmos membros `x` e `y`. Não especifique `public` ou `private`. Tente acessar `x` e `y` a partir do `main`. Observe o erro de compilação, comprovando que o padrão para `class` é `private`.

### Parte 6: Exercícios de Aplicação

#### [Exercicio 025](025.cpp)
Crie uma classe `Circulo`. Ela deve ter um atributo `private` para o raio. Deve ter um construtor que inicializa o raio, e métodos públicos para calcular a `area()` e a `circunferencia()`. Use `3.14159` como valor para $\pi$.

#### [Exercicio 026](026.cpp)
Crie uma classe `Aluno` com os atributos `private`: `nome` (`std::string`), `matricula` (`int`) e um array de 4 `floats` para as notas.

#### [Exercicio 027](027.cpp)
Crie um construtor para a classe `Aluno` que inicialize o nome e a matrícula. As notas devem ser inicializadas com 0.

#### [Exercicio 028](028.cpp)
Crie um método `setNotas` que recebe as 4 notas como parâmetro e as armazena no array de notas.

#### [Exercicio 029](029.cpp)
Crie um método `calcularMedia` que retorna a média aritmética das 4 notas do aluno.

#### [Exercicio 030](030.cpp)
Escreva uma função `main` que:
a. Cria um objeto da classe `Aluno` para "Fulano" com matrícula 123.
b. Usa o método `setNotas` para atribuir as notas 7.5, 8.0, 6.5 e 9.0.
c. Imprime o nome, a matrícula e a média final do aluno, utilizando os métodos da classe.