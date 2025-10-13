#include "Conta.hpp"
#include "Titular.hpp"
#include <iostream>

int main(){

    Conta conta01{ "Felipe kerwald", "878.099.370-22", "0113578", 1500 };

    std::cout << conta01.getTitular().getNomeTitular();

    Conta conta02{ Titular { "Joao Silveira", Cpf { "878.099.370-22" } } , "6508467" };

    Conta conta03{ Titular { "Joao Silveira", Cpf { "878.099.370-22" } } , "6508467" };

    conta01.depositar( 500 ).sacar( 1000 );

    std::cout << conta01.getSaldo();

    Cpf cpf = ( std::string ) "878.099.370-22"; // Conversão implicita  
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

}