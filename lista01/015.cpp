#include <iostream>

void toMaiuscula( std::string &texto );

int main(){

    std::string texto{};

    std::getline( std::cin, texto );

    toMaiuscula( texto );

    std::cout << texto << std::endl;
}

void toMaiuscula( std::string &texto ){

    for( char &x : texto ){

        x = toupper( x );

    }
    
}