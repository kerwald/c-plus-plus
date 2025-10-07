#include <iostream>
int main(){
    int inteiro1, inteiro2;
    float real;

    std::cin >> inteiro1 >> inteiro2 >> real;
    std::cout << ( inteiro1 * 2 ) * ( inteiro2 / 2 ) << std::endl;
    std::cout << ( inteiro1 * 3 ) + real << std::endl;
    std::cout << real * real * real << std::endl;
}