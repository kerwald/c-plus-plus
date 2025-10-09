#include <iostream>
#include<string>

void processarNumero( int &valor );

using namespace std::string_literals;

int main () {

    int numero{};
    std::cin >> numero;

    processarNumero( numero );

    auto texto{ "O resultado e: "s }; // Com o uso do s depois do " e o uso do namespace o compilador consegue entender que o tipo da variavel auto é uma string
                                      // nao usando o compilador entende que o tipo da variavel é *char
    std::cout << texto << numero;

}

void processarNumero( int &valor ){
    valor = valor * 2;
}