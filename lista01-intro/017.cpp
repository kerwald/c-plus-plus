#include <iostream>

void imprimir( std::string texto );
void imprimir( int texto );

int main() {

    std::string texto{ "boa voce leu o texto, parabens!" };
    int inteiro{ 42 };

    imprimir( inteiro ); // Sobrecarga de funcoes ocorre quando duas funçoes possuem mesmo nome
    imprimir( texto );  // Entao o compilador usa os parametros para determinar qual a função correta


}

void imprimir( std::string texto ){

    std::cout << texto << std::endl;

}

void imprimir( int inteiro ){

    std::cout << inteiro << std::endl;

}