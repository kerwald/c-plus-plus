#include <iostream>

int main() {

    std::string nome, sobrenome;

    std::cout << "digite seu nome: ";
    std::cin >> nome;
    std::cout << "digite seu sobrenome: ";
    std::cin >> sobrenome;

    nome = nome + " " + sobrenome; // Uso do + para concatenar strings

    std::cout << nome << std::endl;

}