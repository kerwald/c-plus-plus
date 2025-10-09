#include <iostream>
#include <string>

int main() {

    std::string texto;

    std::getline( std::cin, texto ); //le linha inteira ate o enter, é indicado limpar o buffer antes de usar

    
    std::cout << texto.length() << " " << texto.size(); // Uso de size é mais indicado por ser mais genérico

}