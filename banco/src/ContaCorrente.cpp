#include "ContaCorrente.hpp"
#include "Titular.hpp"
#include <string.h>
#include <iostream>


ContaCorrente::ContaCorrente( const std::string &nomeTitular, const std::string &cpfTitular, const std::string &numero,  double &saldo ) :
    Conta( nomeTitular, cpfTitular, numero, saldo )
{}

ContaCorrente::ContaCorrente( const Titular &titular, const std::string &numero ) :
    Conta( titular, numero )
{}

ContaCorrente& ContaCorrente::sacar( const double &valor ){
    const double valorDoSaque{ valor * 0.05 + valor }; // valor * 0.05 = tarifa
    if( ( saldo - valorDoSaque ) >= 0){
        saldo -= valorDoSaque;
    } else{
        std::cerr << "Saldo insuficiente!";
    }
    return *this;
}

ContaCorrente& ContaCorrente::depositar( const double &valor ){
    const double valorDoDeposito{ valor - ( valor * 0.05 ) }; // valor * 0.05 = tarifa
    saldo += valorDoDeposito;
    return *this;
}