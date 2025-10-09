#include <iostream>
#include <ios> // Necessário para std::ws

int main() {

    std::string nomeCompleto;
    std::cout << "Digite o seu nome completo: " << std::endl;

    // std::cin >> nomeCompleto; Esse formato nao é bom para esse problema porque ele para de reconhecer no primeiro espaço

    // std::ws limpa o '\n' e quaisquer outros espaços antes da leitura do nome
    // usar quando tiver entradas de outras variaveis antes para limpar o /n delas

    std::getline( std::cin, nomeCompleto ); // Esse formato le a linha inteira ate encontar uma quebra de linha \n
    std::cout << "Seja bem vindo: " << nomeCompleto << std::endl;

}