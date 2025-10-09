#include <iostream>

int x{ 42 };

int main() {

    int x{ 73 };

    std::cout << "x " << x << " ::x " << ::x << std::endl; // Usar dois pontos na frente da variavel faz pagar a variavel no escopo global;

}