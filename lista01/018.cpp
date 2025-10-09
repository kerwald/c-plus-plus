#include <iostream>

double imprimirMaior( double a, double b );
int imprimirMaior( int a, int b );

int main() {

    double a{ 42 }, b{ 72 }, resultD{};
    int c{ 56 }, d{ 88 }, resultI{};
    

    resultD = imprimirMaior( a, b );
    resultI = imprimirMaior( c, d );

    std::cout << resultD << " " << resultI;

}

double imprimirMaior( double a, double b ){

    return ( a > b ) ? a : b; // Retornar valor usando operador ternário

}

int imprimirMaior( int a, int b ){

    return ( a > b ) ? a : b; // Retornar valor usando operador ternário

}