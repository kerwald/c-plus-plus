#pragma once
#include "Cpf.hpp"
#include <string>

class Pessoa{
    protected: // Mantem acesso somente entre classes herdadas
        const std::string nome;
        const Cpf cpf;
    public: // Mantem acesso entre todos
        Pessoa( const std::string &nome, const Cpf &cpf );
    private: // Mantém o acesso para a própria classe e para suas classes derivadas (filhas).
        void verificaValidadeNome( const std::string &nome ) const;
};