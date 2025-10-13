#include "ContaPoupanca.hpp"
#include "Titular.hpp"
#include <string.h>
#include <iostream>


ContaPoupanca::ContaPoupanca( const std::string &nomeTitular, const Cpf &cpfTitular, const std::string &senha, const std::string &numero, const double &saldo ) :
    Conta( nomeTitular, cpfTitular, senha, numero, saldo )
{}

ContaPoupanca::ContaPoupanca( const Titular &titular, const std::string &numero ) :
    Conta( titular, numero )
{}

double ContaPoupanca::taxaDeSaque() const{
    return 0.02;
}