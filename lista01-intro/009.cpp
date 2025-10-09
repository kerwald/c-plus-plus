#include <iostream>

int main() {

    int inteiro{};

    std::cin >> inteiro;
    
    ( inteiro % 2 ) ? std::cout << "O numero é impar!" : std::cout << "O numero é par"; // Operador Ternario

}