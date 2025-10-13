#include "Titular.hpp"
#include <iostream>

Titular::Titular( const std::string &nome, const Cpf &cpf, const std::string &senha ) : 
    Pessoa( nome, cpf ), 
    Autenticavel( senha )
{}

std::string Titular::getNome() const{
    return nome;
}