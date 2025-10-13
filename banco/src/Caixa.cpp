#include "Caixa.hpp"
#include "Titular.hpp"
#include "Funcionario.hpp"
#include "Autenticavel.hpp"
#include "Cpf.hpp"
#include <string>

Caixa::Caixa( const std::string &nome, const Cpf &cpf, const double &salario , const std::string &senha, const DiaDaSemana &diaDoPagamento ) :
    Funcionario( nome, cpf, salario, diaDoPagamento ),
    Autenticavel( senha )
{}

double Caixa::bonificacao() const{
    return getSalario() * 0.1;
}