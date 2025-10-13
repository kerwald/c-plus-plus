#pragma once
#include "Conta.hpp"

class ContaPoupanca final : public Conta{

    public:
        ContaPoupanca( const std::string &nomeTitular, const Cpf &cpfTitular, const std::string &senha, const std::string &numero, const double &saldo );
        ContaPoupanca( const Titular &titular, const std::string &numero );
        double taxaDeSaque() const override;

};