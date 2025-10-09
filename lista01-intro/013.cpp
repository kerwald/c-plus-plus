#include <iostream>

void ordenaValor( int &a, int &b );

int main() {

    int a{}, b{};

    std::cin >> a >> b;

    ordenaValor( a, b );

    std::cout << a << " " << b;

}

void ordenaValor( int &a, int &b ){

    if( b > a ){

        int const var{ a };
        a = b;
        b = var;
        
    }

}