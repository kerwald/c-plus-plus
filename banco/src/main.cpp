#include "Conta.hpp"
#include "Titular.hpp"
#include <iostream>

int main(){

    Conta conta01{ "Felipe kerwald", "878.099.370-22", "0113578", 1500 };
    Conta conta02{ Titular { "Joao Silveira", "98805674312" } , "6508467" };

    conta01.depositar( 500 ).sacar( 1000 );
    std::cout << conta01.getSaldo();

}