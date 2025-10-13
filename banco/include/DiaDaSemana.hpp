#pragma once
#include <cstdint> // c standard int -> biblioteca para usar diferentes tipos de inteiro

enum class DiaDaSemana : uint8_t { 
    Domingo, Segunda, Terca, Quinta , Sexta, Sabado
};

// : uint8_t garante que o espaço na memoria será de um inteiro de 8 bites de sinal apenas positivo

// Somente enum da pra usar somente os dias da semana ex: terca 
    //"define valores fora de seu escopo"
    //enum é facilmente conversivel  uint8_t x = terca; <- FUNCIONA

// Quando usa enum class torna se necessario determinar de onde é ex:  DiaDaSemana::terca 
    //"nao define vallores fora de seu escopo"
    //enum class NÃO é facilmente conversivel  uint8_t x = DiaDaSemana::terca; <-  NÃO FUNCIONA
    //funciona somente com conversao explicita ex: uint8_t x = ( uint8_t ) DiaDaSemana::terca; <- FUNCIONA