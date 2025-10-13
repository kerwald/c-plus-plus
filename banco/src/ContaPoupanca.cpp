#include "ContaPoupanca.hpp"
#include "Titular.hpp"
#include <string.h>
#include <iostream>


ContaPoupanca::ContaPoupanca( const std::string &nomeTitular, const std::string &cpfTitular, const std::string &numero,  double &saldo ) :
    Conta( nomeTitular, cpfTitular, numero, saldo )
{}

ContaPoupanca::ContaPoupanca( const Titular &titular, const std::string &numero ) :
    Conta( titular, numero )
{}

ContaPoupanca& ContaPoupanca::sacar( const double &valor ){
    const double valorDoSaque{ valor * 0.02 + valor }; // valor * 0.05 = tarifa
    if( ( saldo - valorDoSaque ) >= 0){
        saldo -= valorDoSaque;
    } else{
        std::cerr << "Saldo insuficiente!";
    }
    return *this;
}

ContaPoupanca& ContaPoupanca::depositar( const double &valor ){
    const double valorDoDeposito{ valor - ( valor * 0.02 ) }; // valor * 0.05 = tarifa
    saldo += valorDoDeposito;
    return *this;
}