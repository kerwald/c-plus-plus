#include <iostream>
#include <cstdlib> // c standand library
#include <random> // random
#include <ctime> // c time

int main() {

    std::cout << "*************************************\n"
              << "* Bem-vindos ao jogo da adivinhação *\n" 
              << "*************************************" << std::endl;

    srand( time( NULL ) ); // seed rand recebe uma semente e nesse caso a semente 
                            // é o time(null) conta os segundos desde 1970 conhecido como time 0
    const int numeroSecreto = rand() % 100; // valores sorteados de 0 a 99
    std::cout << "numero secreto: " << numeroSecreto << std::endl;

    bool acertou{ false };

    while( !acertou ){

        int tentativas{};
        int chute{};
        std::cout << "qual seu chute: ";
        std::cin >> chute;
        tentativas++;
        std::cout << "seu chute e " << chute <<  " Tentativa: " << tentativas << std::endl;

        acertou = ( chute == numeroSecreto ) ? true : false;

        if( acertou ){
            std::cout << "Parabens, voce acertou em " << tentativas << " tentativa/s!" << std::endl;
        } else {
            ( chute > numeroSecreto ) ? 
            std::cout << "O numero secreto e menor!" << std::endl : 
            std::cout << "O numero secreto e maior!" << std::endl;
        }
    }
    std::cout << "FIM DE JOGO!" << std::endl;
}