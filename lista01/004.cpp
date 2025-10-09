#include <iostream>

int main() {

    bool verdade{ true }; // existem 3 maneiras de inicializar uma variavel var = algo ; var( algo ) : var{ algo }
    bool falso{ false }; // O uso de {} para inicializar uma variavel  é a mais recomendada

    /*
 * Formas de Inicialização em C++:
 * 1. int x = 5;  // C-style/Copy: Tradicional, mas permite perda de dados (ex: int x = 3.14).
 * 2. int x(5);   // Direct/Functional: Pode ser ambíguo ("Most Vexing Parse"). Também permite perda de dados.
 * 3. int x{5};   // Brace/Uniform (RECOMENDADO desde C++11): É a forma mais segura.
 *
 * Por que usar {} é melhor?
 * - PREVINE "narrowing conversions" (perda de dados), gerando um erro de compilação.
 * - SINTAXE UNIFORME para todos os tipos (variáveis, classes, vetores, etc).
 * - RESOLVE a ambiguidade do "Most Vexing Parse" (ex: MyClass obj{};).
 * - GARANTE inicialização com zero/padrão ao usar chaves vazias (ex: int x{};).
 */

    std::cout << verdade << " " << falso << std::endl;

}