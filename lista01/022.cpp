#include <iostream>

namespace N1{

    void imprimir(){

        std::cout << "Funcao dentro do namespace N1" << std::endl;

    }

}

namespace N2{

    void imprimir(){

        std::cout << "Funcao dentro do namespace N2" << std::endl;

    }

}

int main() {

    N1::imprimir();
    N2::imprimir();

}