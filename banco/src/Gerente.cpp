#include "Gerente.hpp"
#include "Cpf.hpp"
#include <string>

Gerente::Gerente( const std::string &nome, const Cpf &cpf, const std::string &senha, const double &salario ) :
    Funcionario( nome, cpf, salario ),
    Autenticavel( senha )
{}

double Gerente::bonificacao() const{
    return getSalario() * 0.5;
}