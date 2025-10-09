#include <iostream>

int main() {

    int num1{}, num2{};
    bool resultado{};

    std::cin >> num1 >> num2;

    if( num1 > num2 ){
        resultado = true;
    } else {
        resultado = false;
    }

    std::cout << resultado << std::endl;

}