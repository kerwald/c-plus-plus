#include <iostream>

class Pessoa {

    private:
        std::string nome;
        int idade;

    public:

        void setNome( std::string nome ){
            this->nome = nome;
        }

        void setIdade( int idade ){
            this->idade = idade;
        }

        void apresentar(){
            std::cout << "Ola, meu nome e " << nome << " e eu tenho " << idade << " anos" << std::endl;
        }

};

int main(){

    Pessoa Joao;
    Joao.setIdade( 22 );
    Joao.setNome( "Joao Kerwald" );

}