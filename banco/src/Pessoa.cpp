#include "Pessoa.hpp"
#include "Cpf.hpp"
#include <string>
#include <iostream>

Pessoa::Pessoa( const std::string &nome, const Cpf &cpf ) : 
    nome( nome ),
    cpf( cpf )
{
    std::cout << "Construtor de Pessoa: " << std::endl;
    verificaValidadeNome( nome );
}

void Pessoa::verificaValidadeNome( const std::string &nome ) const{

    if( nome.size() < 5 ){
        std::cerr << "Nome muito curto!!" << std::endl;
        exit(1);
    }

}

