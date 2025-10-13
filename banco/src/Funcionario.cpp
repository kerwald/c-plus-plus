#include "Funcionario.hpp"
#include <iostream>
#include <string>

Funcionario::Funcionario( const std::string &nome, const Cpf &cpf, float salario ) :
    Pessoa( nome, cpf ),
    salario( salario )
{
    std::cout << "Construtor de Funcionario: " << std::endl;
}

std::string Funcionario::getNome() const{
    return nome;
}

double Funcionario::getSalario() const{
    return salario;
}