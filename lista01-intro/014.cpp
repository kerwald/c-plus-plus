#include <iostream>

void ordenaValores( int &a, int &b, int &c );

void ordenaValor( int &a, int &b );

int main() {

    int a{}, b{}, c{};

    std::cin >> a >> b >> c;

    ordenaValores( a, b, c );

    std::cout << a << " " << b << " " << c;

}

void ordenaValores( int &a, int &b, int &c ){

    ordenaValor( a, b );
    ordenaValor( a, c );
    ordenaValor( b, c );

}

void ordenaValor( int &a, int &b ){

    if( a > b ){

        int const var{ a };
        a = b;
        b = var;
        
    }

}