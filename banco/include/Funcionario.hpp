#pragma once
#include "Pessoa.hpp"
#include "Cpf.hpp"
#include "DiaDaSemana.hpp"
#include <iostream>
#include <string>

class Funcionario : public Pessoa {  

    private: 
        float salario;
        DiaDaSemana diaDoPagamento;

    public:
        Funcionario( const std::string &nome, const Cpf &cpf, const double &salario, const DiaDaSemana &diaDaSemana );
        virtual ~Funcionario();
        std::string getNome() const;
        double getSalario() const;
        virtual double bonificacao() const = 0;
};