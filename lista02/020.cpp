#include <iostream>
    
    class Produto{

        private:

            double preco;

        public:

            void setPreco( double preco ){
                this->preco = preco;
            }

            Produto& aumentarPreco( double percentual ){
                preco += preco * percentual;
                return *this; // Retorna uma referencia do proprio objeto
            }               // Interessante para encadeamento de objetos 
                            // funciona da esquerda para a direita
    };

int main() {
    
}