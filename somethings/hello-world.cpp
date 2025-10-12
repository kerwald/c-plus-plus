#include <iostream>

int main() {
    // \x1b[   -> Inicia a sequência de escape ANSI
    // 45      -> Define a cor de fundo para magenta/lilás
    // ;       -> Separa os comandos
    // 97      -> Define a cor do texto para branco brilhante
    // m       -> Finaliza a sequência
    std::cout << "\x1b[45;97m";

    // Limpa a tela (opcional, mas ajuda a ver o efeito completo)
    // Este comando funciona tanto no Windows (cls) quanto no Linux/macOS (clear)
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    std::cout << "=======================================" << std::endl;
    std::cout << " Ola! O terminal agora esta colorido! " << std::endl;
    std::cout << "=======================================" << std::endl;
    std::cout << std::endl;

    // IMPORTANTE: Reseta a cor para o padrão do terminal no final
    // \x1b[0m -> Código para resetar todas as formatações
    std::cout << "\x1b[0m"; 
    
    std::cout << "Esta linha voltou a cor normal." << std::endl;

    return 0;
    
}