#pragma once
#include <string>

class Conta{ 

    private:
        static int numeroDeContas;
        double saldo;
        const std::string cpfTitular;
        const std::string nomeTitular;
        const std::string numero;

    public:
        Conta( std::string nomeTitular, std::string cpfTitular, std::string numero, double saldo );
        Conta( std::string nomeTitular,std::string cpfTitular, std::string numero );
        Conta sacar( const int &valor );
        Conta depositar( const int &valor );
        double getSaldo() const;
        std::string getCpfTitular() const;
        std::string getNomeTitular() const; 
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