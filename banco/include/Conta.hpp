#pragma once
#include "Titular.hpp"
#include <string>

class Conta{ 

    private:
        static int numeroDeContas;
        const Titular titular;
        const std::string numero;
        double saldo;

    public:
        Conta( std::string nomeTitular, std::string cpfTitular, std::string numero, double saldo );
        Conta( Titular titular, std::string numero );
        ~Conta(); // método é chamado quando o objeto é destruido seja por um delete ou por sair do escopo
                  // Utilizalo quando for necessario desalocar memoria alocada 
                  // ou qualquer operacao que precise ser feita quando um objeto ira deixar de existir
                  // Como decrementar numeroDeContas
        Conta& sacar( const int &valor );
        Conta& depositar( const int &valor );
        double getSaldo() const;
        Titular getTitular() const;
        std::string getNumero() const; 

};

/*

    A diferença de struct e class é que: class por padrao todos os membros sao privados
                                         struct por padrao todos os membros sao publicos
                                          
    O padrao para o paradigma orientado a objetos é class
    
*/

/*

    É boa prática de programação marcar o metodo como const quando nao for alterar os membros da classe!!
    É boa prática de programação marcar os parâmetros dos metodos como const se nao for modificalos dentro do método!!
    
*/