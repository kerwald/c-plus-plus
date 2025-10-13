#include "Cpf.hpp"
#include <string>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

Cpf::Cpf( const std::string &numero ) : numero( numero ) {

    if( !validaCpf( numero ) ){
        std::cerr << "Cpf invalido!! ";
        exit(1);
    }
    
}

bool Cpf::validaCpf( const std::string &numero ) const{

    std::string cpf = removerFormatacao( numero );

    // Verifica se o CPF tem 11 dígitos
    if (cpf.length() != 11) {
        return false;
    }

    // Verifica se todos os dígitos são iguais (casos inválidos conhecidos)
    bool todosIguais = true;
    for (size_t i = 1; i < cpf.length(); ++i) {
        if (cpf[i] != cpf[0]) {
            todosIguais = false;
            break;
        }
    }
    if (todosIguais) {
        return false;
    }

    // Cálculo do primeiro dígito verificador
    int soma = 0;
    for (int i = 0; i < 9; ++i) {
        soma += (cpf[i] - '0') * (10 - i);
    }

    int primeiroVerificador = soma % 11;
    primeiroVerificador = (primeiroVerificador < 2) ? 0 : (11 - primeiroVerificador);

    // Compara o primeiro dígito calculado com o dígito do CPF
    if ((cpf[9] - '0') != primeiroVerificador) {
        return false;
    }

    // Cálculo do segundo dígito verificador
    soma = 0;
    for (int i = 0; i < 10; ++i) {
        soma += (cpf[i] - '0') * (11 - i);
    }

    int segundoVerificador = soma % 11;
    segundoVerificador = (segundoVerificador < 2) ? 0 : (11 - segundoVerificador);

    //Compara o segundo dígito calculado com o dígito do CPF
    if ((cpf[10] - '0') != segundoVerificador) {
        return false;
    }

    // Se passou por todas as verificações, o CPF é válido
    return true;
}

std::string Cpf::removerFormatacao( const std::string &cpf ) const {

    std::string cpfNumerico;
    for (char c : cpf) {
        if (isdigit(c)) {
            cpfNumerico += c;
        }
    }
    return cpfNumerico;
}