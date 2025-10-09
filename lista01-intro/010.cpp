#include <iostream>

int main() {

    int idade;
    std::cout << "Digite sua idade: ";
    std::cin >> idade;

    ( idade < 0 ) ? std::cerr << "Erro, idade invalida!" : 
        std::cout 
        << "legal! Antes vc tinha " 
        << idade-1 
        << " anos e agora vc ja ta com " 
        << idade 
        << " anos." ;

}