#include "Titular.hpp"

Titular::Titular( const std::string &nome, const Cpf &cpf ) : Pessoa( nome, cpf )
{}

std::string Titular::getNome() const{
    return nome;
}