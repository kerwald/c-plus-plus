#pragma once
#include "Conta.hpp"

class ContaPoupanca : public Conta{

    public:
        ContaPoupanca( const std::string &nomeTitular, const std::string &cpfTitular, const std::string &numero, double &saldo );
        ContaPoupanca( const Titular &titular, const std::string &numero );
        ContaPoupanca& sacar( const double &valor ) override;
        ContaPoupanca& depositar( const double &valor ) override;

};