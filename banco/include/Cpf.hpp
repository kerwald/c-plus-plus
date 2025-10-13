#pragma once
#include <string>

class Cpf{
    private:
        std::string numero;
    public:
        Cpf( const std::string &numero );
        std::string getNumero() const;
    private:
        bool validaCpf( const std::string &numero ) const;
        std::string removerFormatacao( const std::string& cpf ) const;
};