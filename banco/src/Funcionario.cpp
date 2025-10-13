#include "Funcionario.hpp"
#include <string>

Funcionario::Funcionario( const std::string &nome, const Cpf &cpf, float salario ) :
    Pessoa( nome, cpf ),
    salario( salario )
{}

std::string Funcionario::getNome() const{
    return nome;
}