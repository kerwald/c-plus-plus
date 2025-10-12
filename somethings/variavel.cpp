#include <iostream>
#include <cstdlib> 
#include <iomanip> // para uso de precisao

int main() {

    const int numVidas =5;
    const int score = 1350; // long int para maior numero de valores int a armazenar
    const float numero = 24.58888855; // double para maior numero de valores float a armazenar

    std::cout << "***********************************" << std::endl;
    std::cout << "Vidas Jogador: " << numVidas << std::endl;
    std::cout << "Pontuacao: " << score << std::endl;
    std::cout << "Numero: " << std::setprecision( 4 ) << numero << std::endl;
    std::cout << "Endereco que numVidas ocupa na memoria RAM: " << &numVidas << std::endl;
    std::cout << "Endereco que score ocupa na memoria RAM: " << &score << std::endl;
    std::cout << "***********************************" << std::endl;

   
    system("PAUSE");

}

// Ao debugar adicionar variaveis ao watch, pode ajudar muito