#pragma once
#include "Cpf.hpp"
#include <string>

class Autenticavel{
    private:
        std::string senha;
    public:
        Autenticavel( const std::string &senha );
        bool autentica( const std::string &senha ) const;

};