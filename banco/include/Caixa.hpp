#pragma once
#include "Funcionario.hpp"

class Caixa : public Funcionario {
    public:
        Caixa( const std::string &nome, const std::string &cpf, const double &salario );
        double bonificacao() const override;
};