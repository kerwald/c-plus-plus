#include <iostream>

class Pessoa {

    private:
        std::string nome;
        int idade;

    public:

        void apresentar(){
            std::cout << "Ola, meu nome e " << nome << " e eu tenho " << idade << " anos" << std::endl;
        }

};

int main(){

    Pessoa Joao{} /*{ "Felipe", 22 }*/;

    std::cout << /* Joao.nome */ "Felipe" << " " << /*Joao.idade*/ "22" << std::endl; // Erro de compilacao, os atributos sao privates, so podem ser modificados no escopo da classe
    Joao.apresentar();

}