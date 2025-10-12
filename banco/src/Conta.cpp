#include "Conta.hpp"
#include <iostream>
#include <string>

Conta::Conta( std::string nomeTitular, std::string cpfTitular, std::string numero, double saldo ){
    this->saldo = saldo;
    this->cpfTitular = cpfTitular;
    this->nomeTitular = nomeTitular;
    this->numero = numero;
}

Conta::Conta( std::string nomeTitular,std::string cpfTitular, std::string numero ) : 
    nomeTitular( nomeTitular ), 
    cpfTitular( cpfTitular ), 
    numero( numero )
{}  // Lista de inicialização -> uma forma mais compacta de criar um construtor 
    // Compilador consegue otimizar - processo de inicialização acontece somente uma vez

    /*

    Initialization list
    A diferença é crucial:

        Inicialização:  Quando você usa a lista de inicialização, 
                        os membros são construídos diretamente com os valores fornecidos. 
                        É um processo único: a criação do membro já acontece com o valor correto.

        Atribuição:     Quando você atribui dentro do corpo do construtor, 
                        os membros são primeiro inicializados por padrão (o construtor padrão é chamado) 
                        e depois recebem um novo valor através do operador de atribuição (=). 
                        Isso pode ser menos eficiente.
        
    */

    /*

    Initialization list
    Uso obrigatório nos seguintes cenários "A simples atribuição dentro do corpo do construtor ({}) não funcionará":

        Para inicializar membros const:
            Membros constantes precisam receber seu valor no exato momento da criação e não podem ser alterados depois. 
            A lista de inicialização é o único lugar para fazer isso.

        Para inicializar membros que são referências (&):
            Assim como as constantes, referências devem ser "ligadas" a outra variável no momento em que são criadas, 
            e isso só pode ser feito na lista de inicialização.

        Para membros de classes que não possuem construtor padrão:
            Se uma classe-membro não tem um construtor que não recebe argumentos (um construtor Classe()), 
            você é obrigado a chamar um construtor válido para ela na lista de inicialização.

        Para chamar um construtor específico da classe base (em herança):
            Se a classe pai (base) não tiver um construtor padrão, ou 
            se você precisar chamar um construtor específico dela que aceite argumentos, 
            isso deve ser feito na lista de inicialização do construtor da classe filha (derivada).

    */


Conta Conta::sacar( const int &valor ){
    if( ( saldo - valor ) >= 0){
        saldo -= valor;
    } else{
        std::cerr << "Saldo insuficiente!";
    }
    return *this;
}

Conta Conta::depositar( const int &valor ){
    saldo += valor;
    return *this;
}

double Conta::getSaldo() const{
    return saldo;
}

std::string Conta::getCpfTitular() const{
    return cpfTitular;
}

std::string Conta::getNomeTitular() const{
    return nomeTitular;
}

std::string Conta::getNumero() const{
    return numero;
}
