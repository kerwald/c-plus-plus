#include <iostream>

class Pessoa {

    public:
        std::string nome;
        int idade;

};

int main(){

    Pessoa Joao{ "Felipe", 22 };

    std::cout << Joao.nome << " " << Joao.idade << std::endl;

}