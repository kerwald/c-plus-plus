#include "Titular.hpp"
#include "Cpf.hpp"
#include <string>
#include <iostream>

Titular::Titular( const std::string &nome, const Cpf cpf) : 
    nome( nome ),
    cpf( cpf )
{
    verificaValidadeNome( nome );
}

Cpf Titular::getCpfTitular() const{
    return cpf;
}
std::string Titular::getNomeTitular() const{
    return nome;
}

void Titular::verificaValidadeNome( const std::string &nome ) const{

    if( nome.size() < 5 ){
        std::cerr << "Nome muito curto!!" << std::endl;
        exit(1);
    }

}