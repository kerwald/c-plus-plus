#include <iostream>

int main(){

    float ganhoPorHora, horasTrabalhadasMensais;

    std::cout << "quando voce ganha por hora? " << std::endl;
    std::cin >> ganhoPorHora;
    std::cout << "qual o numero de horas trabalhadas ao mes? " << std::endl;
    std::cin >> horasTrabalhadasMensais;
    std::cout << ganhoPorHora * horasTrabalhadasMensais << std::endl;
}