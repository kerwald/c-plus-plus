#include "Funcionario.hpp"
#include "Cpf.hpp"
#include <iostream>
#include <string>

Funcionario::Funcionario( const std::string &nome, const Cpf &cpf, const double  &salario ) :
    Pessoa( nome, cpf ),
    salario( salario )
{
    std::cout << "Construtor de Funcionario: " << std::endl;
}

Funcionario::~Funcionario(){}

std::string Funcionario::getNome() const{
    return nome;
}

double Funcionario::getSalario() const{
    return salario;
}