#include <iostream>
    
    class Produto{

        private:

            double preco;

        public:

            Produto& setPreco( double preco ){
                this->preco = preco;
                return *this;
            }

            
            double getPreco( ){
                return preco;
            }

            Produto& aumentarPreco( double percentual ){
                preco += preco * percentual;
                return *this; // Retorna uma referencia do proprio objeto
            }               // Interessante para encadeamento de objetos 
                            // funciona da esquerda para a direita
    };

int main() {

    Produto produto{};

    produto.setPreco( 73.0 ).aumentarPreco( 42.00 ); // encadeamento de metodos
                                                     // possivel gracas ao retorno *this
                                                     //funciona da esquerda para a direita
    std::cout << produto.getPreco() << std::endl;
    

    
}