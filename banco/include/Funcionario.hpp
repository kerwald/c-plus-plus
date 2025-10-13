#pragma once
#include "Pessoa.hpp"
#include "Cpf.hpp"
#include <iostream>
#include <string>

class Funcionario : public Pessoa {  

    private: 
        float salario;

    public:
        Funcionario( const std::string &nome, const Cpf &cpf, float salario );
        virtual ~Funcionario();
        std::string getNome() const;
        double getSalario() const;
        virtual double bonificacao() const = 0;
};