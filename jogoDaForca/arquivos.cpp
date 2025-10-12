#include "header.hpp"

void learquivos( std::vector<std::string> &palavras ){

    std::ifstream arquivo; // ifstream para ler arquivos
    arquivo.open( "palavras.txt" );

    if (!arquivo.is_open()) {
        std::cerr << "Erro ao abrir o arquivo de palavras!" << std::endl;
        exit(1);
    }

    int quantidadeDePalavras{};
    std::string palavraLida{};

    arquivo >> quantidadeDePalavras;
    for( int i = 0; i < quantidadeDePalavras; i++ ){
        arquivo >> palavraLida;
        palavras.push_back( palavraLida );
    }
    arquivo.close();
    
}

void escreveArquivo( const std::string &palavra,  std::vector<std::string> &palavras ){

    std::ofstream arquivo; //ofstrem para escrever arquivos
    arquivo.open( "palavras.txt" );

    palavras.push_back( palavra );

    arquivo << palavras.size() << std::endl;

    if ( arquivo.is_open() ) {

        for( const std::string& x : palavras ){
            arquivo << x << std::endl;
        }

    } else{

        std::cerr << "Erro ao abrir o arquivo de palavras!" << std::endl;
        exit(1);

    }
    
    
    arquivo.close();

}