#include "ContaPoupanca.hpp"
#include "Conta.hpp"
#include "ContaCorrente.hpp"
#include "Titular.hpp"
#include "Funcionario.hpp"
#include "Gerente.hpp"
#include <iostream>
#include <string> 

int main(){

    ContaPoupanca conta01{ "Felipe kerwald", "735.287.910-20", "12345", "0113578", 1500 };

    std::cout << conta01.getTitular().getNome() << std::endl;

    ContaCorrente conta02{ Titular { "Joao Silveira", Cpf { "735.287.910-20" }, "12345" } , "6508467" };

    ContaCorrente conta03{ Titular { "Joao Silveira", Cpf { "735.287.910-20" }, "12345"} , "6508467" };

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

    Conta *conta04 = new ContaCorrente{ Titular{ "carlinhos maia", Cpf { "735.287.910-20" }, "12345" }, "7845294" }; 
    /*
        Alloca na heap
        custosa mais lenta que usar a stack
        heap possui mais memoria
        Usar somente quando precisar de muita memoria
    */
    delete conta04;
    
    Gerente gerente{ "Zaphod Beeblebrox", Cpf{ "010.243.230-99" }, "12345", 2000.00 };



// ===================================================================================
// NOTA: O Problema do Diamante (The Diamond Problem) e Herança Virtual
// ===================================================================================
//
// O QUE É?
// O "Problema do Diamante" é uma ambiguidade que surge na herança múltipla
// quando uma classe D herda de duas classes (B e C), e ambas B e C herdam
// de uma mesma classe base A.
//
//      A
//     / \
//    B   C
//     \ /
//      D
//
// O problema é que a classe D acaba herdando duas cópias dos membros (variáveis e
// métodos) da classe A: uma através de B e outra através de C. Se tentarmos
// acessar um membro de A a partir de um objeto D, o compilador gera um erro
// de ambiguidade, pois não sabe qual das duas cópias deve usar.
//
// A SOLUÇÃO: HERANÇA VIRTUAL
// Para resolver isso, C++ utiliza a palavra-chave `virtual` na declaração da
// herança das classes intermediárias.
//
// Exemplo:
// class A { ... };
// class B : virtual public A { ... };
// class C : virtual public A { ... };
// class D : public B, public C { ... };
//
// Ao usar `virtual public A`, instruímos o compilador a garantir que a classe
// final D receba apenas *uma única instância* da classe base A, compartilhada
// entre B e C. Isso resolve a ambiguidade.
//
// USO DE INTERFACES (CLASSES ABSTRATAS) " Sao classes puramente virtuais "
// Uma boa prática de design que ajuda a mitigar problemas de herança múltipla
// é usar classes base abstratas (conhecidas como "interfaces"). Interfaces
// geralmente definem contratos (funções virtuais puras) sem dados de membros.
// Ao herdar de múltiplas interfaces, você herda principalmente comportamentos,
// não estados (dados), o que naturalmente evita o problema de múltiplas cópias de dados.
//
// ===================================================================================

    return 0;

}