#include "header.hpp"

bool verificajogo( const std::string &encontradas, const std::string &palavraSecreta, const int &tentativas ){

    if( encontradas == palavraSecreta ){

        std::cout << "\nParabens, voce ganhou!!" << std::endl;
        std::cout << "A palavra era " << palavraSecreta << std::endl;
        return true;

    } else if( tentativas > 6 ){

        std::cout << "\nvoce perdeu!!" << std::endl;
        return true;

    }

    return false;
    
}

bool darChute( char &chute, const std::string &palavraSecreta, std::string &encontradas ){
    std::cout << "\n\nChute uma letra MAIUSCULA: " << std::endl;
    std::cin >> chute;

    int i=0;
    bool naoAcertou = true;
    for( char x : palavraSecreta ){
        if( x == chute ){
            naoAcertou = false;
            encontradas[i] = x;
        }
        i++;
    }
    return naoAcertou;
}


std::string sorteaPalavra( const std::vector<std::string> &palavras ){
    srand( time( NULL ) );
    const int aleatorio = rand() % palavras.size();
    return palavras[ aleatorio ];
}
