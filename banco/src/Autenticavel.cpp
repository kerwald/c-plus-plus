#include "Autenticavel.hpp"
#include "Cpf.hpp"
#include "Titular.hpp"
#include <string>

Autenticavel::Autenticavel( const std::string &senha ):
    senha( senha )
{}
bool Autenticavel::autentica( const std::string &senha ) const{
    return ( this->senha == senha );
}