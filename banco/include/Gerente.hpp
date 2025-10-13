#pragma once
#include "Funcionario.hpp"
#include "Cpf.hpp"
#include "Autenticavel.hpp"
#include <string>

class Gerente final : public Funcionario, public Autenticavel {
    public:
        Gerente( const std::string &nome, const Cpf &cpf, const std::string &senha, const double &salario, const DiaDaSemana &diaDoPagamento ) ;
        double bonificacao() const override;
};