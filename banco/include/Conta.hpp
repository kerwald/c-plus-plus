#pragma once
#include "Titular.hpp"
#include <string>

class Conta{ 

    private:
        static int numeroDeContas;
        const Titular titular;
        const std::string numero;

    protected:
        double saldo;

    public:
        Conta( const std::string &nomeTitular, const std::string &cpfTitular, const std::string &numero, const double &saldo );
        Conta( const Titular &titular, const std::string &numero );
        virtual ~Conta(); // método é chamado quando o objeto é destruido seja por um delete ou por sair do escopo
                  // Utilizalo quando for necessario desalocar memoria alocada 
                  // ou qualquer operacao que precise ser feita quando um objeto ira deixar de existir
                  // Como decrementar numeroDeContas
        Conta& sacar( const double &valor ); //     O uso de virtual garante que se o objeto for alocado na heap 
                                                     // ou tiver usando ponteiros o compilador vai verificar o tipo do objeto 
                                                     // do qual o ponteiro esta apontado para decidir o metodo que vai chamar
                                                     // e nao decidir o metodo com base no tipo do ponteiro.
                                                     //
                                                     //     Sempre que tiver um método virtual o destrutor precisa ser virtual também.
                                                     //
                                                     //     Ocorre em tempo de execução! Uso de virtual table Vtable.
                                                     //
                                                     //     Ponteiro que aponta para uma tabela de ponteiros para os metodos corretos.
        Conta& depositar( const double &valor );
        double getSaldo() const;
        Titular getTitular() const;
        std::string getNumero() const; 
        virtual double taxaDeSaque() const = 0; // Ter um ou mais desse = 0 determina se a classe é abstrada ou nao
                                                // uma classe abstrata não pode ser instanciada diretamente e 
                                                // serve como um modelo para outras classes mais específicas
                                                // Esse =0 diz que o metodo nao tem implementacao 
                                                // e que a implementacao vai ser feito nas classes derivadas 
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