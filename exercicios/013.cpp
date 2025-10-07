#include <iostream>

int main(){

    char genero;
    int altura;

    std::cout << "Digite M se homem e F se mulher: ";
    std::cin >> genero;
    std::cout << "Digite sua altura: ";
    std::cin >> altura;
    
    if( genero == 'M' ){
        std::cout << "O seu peso ideal é " << ( 72.7 * altura ) - 58 << std::endl;
    } else{
        std::cout << "O seu peso ideal é " << ( 62.1 * altura ) - 44.7 << std::endl;
    }
    
}