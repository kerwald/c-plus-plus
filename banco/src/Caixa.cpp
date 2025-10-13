#include "Caixa.hpp"
#include "Titular.hpp"
#include "Funcionario.hpp"
#include <string>

Caixa::Caixa( const std::string &nome, const std::string &cpf, const double &salario ) :
    Funcionario( nome, Cpf( cpf ), salario )
{}

double Caixa::bonificacao() const{
    return getSalario() * 0,1;
}