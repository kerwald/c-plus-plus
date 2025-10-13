#pragma once
#include "Pessoa.hpp"
#include "Autenticavel.hpp"

class Titular : public Pessoa, public Autenticavel {
    public:
        Titular( const std::string &nome, const Cpf &cpf, const std::string &senha );
        std::string getNome() const;
};