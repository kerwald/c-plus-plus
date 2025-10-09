#include <iostream>

int contChar( std::string texto, char caractere );

int main() {

    std::string texto{ "O que voce acha desse texto? O rato roeu a roupa do rei de roma." };
    char caractere = 'r';

    auto result = contChar( texto, caractere );

    std::cout << result << std::endl;

}

int contChar( std::string texto, char caractere ){

    int contagem{};
    for( char x : texto ){

       if( x == caractere ){
            contagem++;
       }

    }
    
    return contagem;

}