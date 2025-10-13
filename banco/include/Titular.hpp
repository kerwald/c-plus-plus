#pragma once
#include<iostream>
#include <string>

class Titular{

    private:
        std::string nome;
        std::string cpf;

    public:
        Titular( const std::string &nome, const std::string cpf );
        std::string getCpfTitular() const;
        std::string getNomeTitular() const; 
    
    private:
        void verificaValidadeNome( const std::string &nome ) const;

};