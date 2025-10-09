#include <iostream>

double calcularArea( double base );
double calcularArea( double base, double altura );

int main() {

    double base{ 42 }, altura{ 73 };

    std::cout << calcularArea( base ) << std::endl;
    std::cout << calcularArea( base, altura ) << std::endl;

}

double calcularArea( double base ){

    return base * base;

}

double calcularArea( double base, double altura ){

    return base * altura;

}