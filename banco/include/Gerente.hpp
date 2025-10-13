#pragma once
#include "Funcionario.hpp"
#include <string>

class Gerente final : public Funcionario{
    public:
        Gerente( const std::string &nome, const std::string &cpf, const double &salario );
        double bonificacao() const override;
};