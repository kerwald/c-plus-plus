#include <iostream>

class ContaBancaria{

    private:

        int numeroDaConta;
        double saldo;

    public:

        ContaBancaria( int numeroDaConta, double saldo ){
            this->numeroDaConta = numeroDaConta;
            this->saldo = saldo;
        }

        double getSaldo(){
            return saldo;
        }

        void depositar( double valor ){
            saldo += valor;
        }

        void sacar( double valor ){

            if( ( saldo - valor ) >= 0 ){
                
                saldo -= valor;

            } else{

                std::cerr << "Saldo insuficiente!" << std::endl;
            
            }

        }

};

int main() {

}        