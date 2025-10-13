#include "ContaPoupanca.hpp"
#include "Conta.hpp"
#include "ContaCorrente.hpp"
#include "Titular.hpp"
#include "Funcionario.hpp"
#include <iostream>
#include <string> 

int main(){

    ContaPoupanca conta01{ "Felipe kerwald", "735.287.910-20", "0113578", 1500 };

    std::cout << conta01.getTitular().getNome() << std::endl;

    ContaCorrente conta02{ Titular { "Joao Silveira", Cpf { "735.287.910-20" } } , "6508467" };

    ContaCorrente conta03{ Titular { "Joao Silveira", Cpf { "735.287.910-20" } } , "6508467" };

    conta01.depositar( 500 ).sacar( 1000 );

    std::cout << conta01.getSaldo() << std::endl;

    Cpf cpf = ( std::string ) "735.287.910-20"; // Conversão implicita  
/*
 * O que a palavra-chave 'explicit' faz:
 *      1. Em construtores: ao colocar explicit antes de comecar o construtor ex. explicit Cpf(){}
 *      Impede que o compilador use um construtor de um
 *      argumento para realizar conversões implícitas de tipo.
 * 
 *      2. Em operadores de conversão (ex: operator bool()): Restringe a conversão
 *      apenas a contextos diretos, evitando conversões perigosas (como de um
 *      objeto para um 'int').
 *
 * Resultado: Código mais seguro, claro e com menos chances de erros sutis.
 
*/
                                            
    std::cout << cpf.getNumero() << std::endl;

    Conta *conta04 = new ContaCorrente{ Titular{ "carlinhos maia", Cpf { "735.287.910-20" } }, "7845294" }; 
    /*
        Alloca na heap
        custosa mais lenta que usar a stack
        heap possui mais memoria
        Usar somente quando precisar de muita memoria
    */
    delete conta04;
    
    Funcionario funcionario01{ "Zaphod Beeblebrox", Cpf{ "010.243.230-99" }, 2000.00 };

    return 0;

}