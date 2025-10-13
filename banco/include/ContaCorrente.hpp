#pragma once
#include "Conta.hpp"

class ContaCorrente final /* ( se for marcado como final, nenhuma outra classe pode pode herdar desta )*/ : public Conta{

    public:
        ContaCorrente( const std::string &nomeTitular, const std::string &cpfTitular, const std::string &numero, double &saldo );
        ContaCorrente( const Titular &titular, const std::string &numero );
        double taxaDeSaque() const override;
        void TransferePara( Conta &conta, double &valor );
};