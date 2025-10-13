#include "Gerente.hpp"

Gerente::Gerente( const std::string &nome, const std::string &cpf, const double &salario ) :
    Funcionario( nome, Cpf( cpf ), salario )
{}

double Gerente::bonificacao() const{
    return getSalario() * 0.5;
}