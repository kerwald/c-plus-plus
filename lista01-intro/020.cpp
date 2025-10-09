#include <iostream>

void operacao( int &a, int &b );
void operacao( double &a, double &b );

int main(){

    int intA{ 42 }, intB{ 73 };
    double floatA{ 56 }, floatB{ 85 };

    operacao( intA, intB );
    operacao( floatA, floatB );

    std::cout << intA << " " << intB << std::endl;
    std::cout << floatA << " " << floatB << std::endl;

}

void operacao( int &a, int &b ){

    const int var{ a };
    a = a + b;
    b = var - b;

}

void operacao( double &a, double &b ){

    const double var{ a };
    a = a + b;
    b = var - b;

}