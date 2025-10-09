#include <iostream>
#include <string>

int main() {

    std::string texto{}; //std::string s{}; faz exatamente a mesma coisa que std::string s;. Ambas criam uma string vazia e segura.
                         //O uso ainda sim é recomendado por consistencia e práticas de uso

    std::getline( std::cin, texto ); //le linha inteira ate o enter, é indicado limpar o buffer antes de usar

    
    std::cout << texto.length() << " " << texto.size(); // Uso de size é mais indicado por ser mais genérico

}