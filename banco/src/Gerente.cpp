#include "Gerente.hpp"
#include "Cpf.hpp"
#include <string>

Gerente::Gerente( const std::string &nome, const Cpf &cpf, const std::string &senha, const double &salario, const DiaDaSemana &diaDoPagamento ) :
    Funcionario( nome, cpf, salario, diaDoPagamento ),
    Autenticavel( senha )
{}

double Gerente::bonificacao() const{
    return getSalario() * 0.5;
}