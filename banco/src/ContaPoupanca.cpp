#include "ContaPoupanca.hpp"
#include "Titular.hpp"
#include <string.h>
#include <iostream>


ContaPoupanca::ContaPoupanca( const std::string &nomeTitular, const std::string &cpfTitular, const std::string &numero, const double &saldo ) :
    Conta( nomeTitular, cpfTitular, numero, saldo )
{}

ContaPoupanca::ContaPoupanca( const Titular &titular, const std::string &numero ) :
    Conta( titular, numero )
{}

double ContaPoupanca::taxaDeSaque() const{
    return 0.02;
}