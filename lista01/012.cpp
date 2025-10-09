#include <iostream>

void calculaDobro( int &var );

int main() {

    int var{};

    std::cin >> var;

    calculaDobro( var );

    std::cout << var << std::endl;

}

void calculaDobro( int &var ){

    var = var * 2;

}