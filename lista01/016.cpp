#include <iostream>

void separar( double num, int &inteiro, double &frac );

int main() {

    double num{};
    int inteiro{};
    double frac{};

    std::cin >> num;

    separar( num, inteiro, frac );

    std::cout << inteiro << " " << frac;

}

void separar( double num, int &inteiro, double &frac ){

    int const var = num;
    inteiro = var;
    frac = num - inteiro;

}
