#include <iostream>

namespace N1{

    void imprimir(){

        std::cout << "Funcao dentro do namespace N1" << std::endl;

    }

}

int main() {

    namespace n1 = N1;
    n1::imprimir();

}