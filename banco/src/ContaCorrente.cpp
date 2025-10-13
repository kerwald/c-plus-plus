#include "ContaCorrente.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"
#include <string.h>
#include <iostream>


ContaCorrente::ContaCorrente( const std::string &nomeTitular, const Cpf &cpfTitular, const std::string &senha, const std::string &numero,  double &saldo ) :
    Conta( nomeTitular, cpfTitular, senha, numero, saldo )
{}

ContaCorrente::ContaCorrente( const Titular &titular, const std::string &numero ) :
    Conta( titular, numero )
{}

double ContaCorrente::taxaDeSaque() const{
    return 0.05;
}

void ContaCorrente::TransferePara( Conta &conta, double &valor ){
    
    if( saldo >= valor ){
        saldo -= valor;
        conta.depositar( valor );
    } else{
        std::cerr << "Saldo insuficiente!! " << std::endl;
    }

}