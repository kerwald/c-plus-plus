#include <iostream>

int main() {

    std::string palavra1, palavra2;

    std::cout << "Digite duas palavras: ";
    std::cin >> palavra1 >> palavra2;

    ( palavra1 == palavra2 )? std::cout << true : std::cout <<  false ; // Operador ternário

}