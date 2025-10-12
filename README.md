# Repositório de Exercícios de Programação em C++

Bem-vindo ao meu repositório de estudos de C++! Este espaço documenta meu progresso e aprendizado na linguagem, seguindo um roteiro de estudos estruturado para cobrir desde os conceitos básicos até os tópicos mais avançados.

## 📂 Estrutura do Repositório

O conteúdo está organizado da seguinte forma:

* **/listaXX**: Pastas numeradas (`/lista01`, `/lista02`, etc.) que seguem o roteiro de estudos abaixo. Cada pasta contém os arquivos de solução (ex: `001.cpp`, `002.cpp`) e um `README.md` específico com os enunciados daquela lista.
* **/exercicios**: Uma pasta com exercícios mais básicos e avulsos, que não se encaixam diretamente no roteiro principal, mas que serviram de prática inicial.

    Além disso, Existem diferentes pastas contendo um pequeno projeto desenvolvido em c++ como **/jogoDaAdivinhacao** por exemplo.


## 🗺️ Roteiro de Estudos

Este repositório segue um plano de 10 listas, cada uma focada em um conjunto específico de conceitos de C++.

### Lista 1 – A Transição Suave (O "C Melhorado")
* **Conceito:** Aprender as melhorias de qualidade de vida que o C++ oferece sobre o C, sem ainda mergulhar em orientação a objetos.
* **Tópicos:** `iostream`, `namespaces`, `bool`, `string`, declaração de variáveis em qualquer escopo, sobrecarga de funções, `auto` e referências (`&`).

### Lista 2 – Introdução a Classes e Objetos (O Início da POO)
* **Conceito:** A base da Programação Orientada a Objetos. Entender como agrupar dados e as funções que operam nesses dados.
* **Tópicos:** `class` vs `struct`, membros (atributos e métodos), especificadores de acesso (`public`, `private`), encapsulamento, construtores, destrutores e o ponteiro `this`.

### Lista 3 – Alocação Dinâmica e Construtores Avançados
* **Conceito:** A forma correta de gerenciar memória e o ciclo de vida dos objetos em C++.
* **Tópicos:** Operadores `new` e `delete`, construtor de cópia, operador de atribuição por cópia, listas de inicialização e membros `static`.

### Lista 4 – Herança e Polimorfismo (Pilares da POO)
* **Conceito:** Reutilizar código e criar hierarquias de classes que permitem um tratamento mais genérico e flexível dos objetos.
* **Tópicos:** Classes base e derivadas, redefinição de métodos, funções virtuais (`virtual`), classes abstratas e herança múltipla.

### Lista 5 – A Biblioteca Padrão (STL): Contêineres
* **Conceito:** Aprender a usar as estruturas de dados prontas, eficientes e seguras da Standard Template Library (STL).
* **Tópicos:** `std::vector`, `std::map`, `std::unordered_map`, `std::set`, e outros contêineres como `list`, `stack` e `queue`.

### Lista 6 – A Biblioteca Padrão (STL): Iteradores e Algoritmos
* **Conceito:** Aprender a manipular os dados dentro dos contêineres da STL de forma eficiente e genérica.
* **Tópicos:** Iteradores, algoritmos da STL (`sort`, `find`, `for_each`) e Funções Lambda.

### Lista 7 – Templates (Programação Genérica)
* **Conceito:** Entender como a STL funciona por baixo dos panos e como criar suas próprias funções e classes que funcionam com qualquer tipo de dado.
* **Tópicos:** Templates de Funções e Templates de Classes.

### Lista 8 – Gerenciamento de Memória Moderno (Ponteiros Inteligentes)
* **Conceito:** A forma mais segura e recomendada de lidar com memória dinâmica no C++ moderno, evitando vazamentos de memória.
* **Tópicos:** `std::unique_ptr`, `std::shared_ptr`, `std::weak_ptr` e o princípio RAII (Resource Acquisition Is Initialization).

### Lista 9 – Tratamento de Exceções
* **Conceito:** A maneira estruturada e robusta do C++ para lidar com erros em tempo de execução.
* **Tópicos:** `try`, `catch`, `throw` e a classe `std::exception`.

### Lista 10 – Streams e Manipulação de Arquivos
* **Conceito:** A versão C++ para manipulação de arquivos, integrada com o sistema de streams.
* **Tópicos:** `fstream`, `ifstream`, `ofstream` e `stringstream`.

## 🛠️ Como Compilar e Executar

Para compilar e executar os exercícios, você precisará de um compilador C++ (como o G++) instalado em seu sistema.

1.  **Navegue até a pasta da lista desejada**:
    ```bash
    cd lista01
    ```

2.  **Compile o arquivo `.cpp` desejado**:
    Recomenda-se usar uma versão moderna do padrão C++ (como C++17 ou C++20).
    ```bash
    g++ -std=c++17 -o 001 001.cpp
    ```

3.  **Execute o programa compilado**:
    ```bash
    ./001
    ```
---

Linkedin: [Felipe Kerwald](https://www.linkedin.com/in/felipekerwald/).
