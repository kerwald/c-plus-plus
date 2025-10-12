#include "header.hpp"
#include "gamelogic.cpp"
#include "arquivos.cpp"

static int globalVariavel{}; // uso do static para garantir que a variavel vai ser acessada somente no arquivo em que foi declarada "traslation unit"
                            // static tbm é usado para declarar variaveis na memoria heap

int main() {

    std::string forca[ 7 ];
    forca[0] ="  ______\n       |\n";
    forca[1] = "       O\n";
    forca[2] = "      /";
    forca[3] = "|";
    forca[4] = "\\ ";
    forca[5] = "\n      /";
    forca[6] = " \\ ";


    std::map<char, bool> chutesErrados{};
    std::vector<std::string> palavras{ };
    // vector por baixo dos panos aloca na heack mesmo sendo definido sem alocacao
    // quando excede o limite de espaço, ele cria um novo espaço e copia todos os dados para o novo espaco e deleta o espaco antigo

    //Array alem de passar o tipo tem que passsar o tamanho
    //nao tem funcao .push_back tem que trabalhar com indices 

    learquivos( palavras );
    std::string palavraSecreta{ sorteaPalavra( palavras ) };

    bool naoAcertou{ true };
    bool terminou{ false };
    int tentativas{ 0 };

    std::string encontradas = palavraSecreta;
    for( int i=0; i < (int) palavraSecreta.size(); i++ ){
        encontradas[i] = '_';
    }

    while( !terminou ){

        std::cout << std::string(50, '\n');
        
        draw( tentativas, chutesErrados, encontradas, forca );

        char chute{};
        naoAcertou = darChute( chute, palavraSecreta, encontradas );
        if( naoAcertou ){
            tentativas++;
            chutesErrados[chute] = true;
        }
        naoAcertou = true;

        terminou = verificajogo( encontradas, palavraSecreta, tentativas );

        if( terminou ){
            std::string palavra{};
            std::cout << "Digite uma nova palavra para o banco de palavras: ";
            std::cin >> palavra;
            escreveArquivo( palavra, palavras );
        }

        std::cout << "\nPressione Enter para continuar...";
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Limpa o buffer de entrada
        std::cin.get(); // Aguarda o usuário pressionar Enter
    }

}