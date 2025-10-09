#include <iostream>

int main() {

    int var1{};
    double var2{}; // inicia com zero padrao  var; -> pode ter qualquer coisa na memoria

    std::cout << "Escreva um valor inteiro e um valor double respectivamente: ";
    std::cin >> var1 >> var2;
    std::cout << "O valor inteiro e o valor double respectivamente: " << var1 << " " << var2;

}