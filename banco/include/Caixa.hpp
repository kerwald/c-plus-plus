#pragma once
#include "Funcionario.hpp"
#include "Cpf.hpp"
#include "Autenticavel.hpp"
#include <string>

class Caixa final : public Funcionario, public Autenticavel {
    public:
        Caixa( const std::string &nome, const Cpf &cpf, const double &salario , const std::string &senha, const DiaDaSemana &diaDoPagamento );
        double bonificacao() const override;
};