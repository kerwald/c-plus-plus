#include <iostream>

class Pessoa {

    public:
        std::string nome;
        int idade;

        void apresentar(){
            std::cout << "Ola, meu nome e " << nome << " e eu tenho " << idade << " anos" << std::endl;
        }

};

int main(){

    Pessoa Joao{ "Felipe", 22 };

    std::cout << Joao.nome << " " << Joao.idade << std::endl;

}