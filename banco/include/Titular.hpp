#pragma once
#include "Cpf.hpp"
#include <iostream>
#include <string>

class Titular{

    private:
        std::string nome;
        Cpf cpf;

    public:
        Titular( const std::string &nome, const Cpf cpf );
        Cpf getCpfTitular() const;
        std::string getNomeTitular() const; 
    
    private:
        void verificaValidadeNome( const std::string &nome ) const;

};