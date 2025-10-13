#pragma once
#include "Pessoa.hpp"

class Titular : public Pessoa {
    public:
        Titular( const std::string &nome, const Cpf &cpf );
};