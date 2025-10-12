#pragma once
#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <random>
#include <limits>

inline void draw( const int &tentativas, const std::map<char, bool> &chutesErrados, const std::string &encontradas, const std::string forca[] ){
    // desenhar forca e letras encontradas e letras usadas
    std::cout << "Chutes errados: ";
    for( const auto &par : chutesErrados ) {
        std::cout << par.first << " ";
    }
    std::cout << std::endl;
    
    std::cout << "Letras encontradas: " << encontradas << std::endl;
    for( int i=0; i < tentativas; i++ ){
        std::cout << forca[i];
    }
}
// inline da uma dica e permissao para o compilador que se fizer sentido pra ele copiar o codigo e colocar na main é para ele fazer
// inline precisa que a funcao esteja completa no hpp para que o compilador caso ache certo copie e cole no main
// deve se ter cuidado com o uso de inline pois depedendo do uso pode ser necessario compilar muitos codigos novamentes caso o inline esteja em varios arquivos
// compilador nao compila codigo inline
// const em parametros de funcoes garante que os parametros nao vao ser modificados nas funcoes
// pode passar variaveis que nao sao const para as funcoes que possue const como parametros

bool darChute( char &chute, const std::string &palavraSecreta, std::string &encontradas );
bool verificajogo( const std::string &encontradas, const std::string &palavraSecreta, const int &tentativas );
void learquivos( std::vector<std::string> &palavras );
void escreveArquivo( const std::string &palavra,  std::vector<std::string> &palavras );
std::string sorteaPalavra( const std::vector<std::string> &palavras );
