#include <iostream>

int main() {

    auto a{ 10 };           
    auto b{ 3.14 };
    auto c{ "teste" };

    // --- Boas Práticas com 'auto' ---
//
// O que é: 'auto' é uma palavra-chave que instrui o compilador a deduzir (inferir)
// o tipo de uma variável a partir da sua expressão de inicialização.
// A checagem de tipo ainda é estática e ocorre em tempo de compilação.
//
// Boas Práticas:
// 1. USE para iteradores e tipos complexos/longos, onde a clareza aumenta.
//    Ex: auto it = meu_vetor.begin();
//    Ex: auto ptr = std::make_unique<MinhaClasse>();
//
// 2. EVITE quando o tipo não for óbvio, pois prejudica a legibilidade.
//    Ruim: auto resultado = minha_funcao(x, y); // O que é 'resultado'?
//    Bom:  int resultado = minha_funcao(x, y);
//
// 3. LEMBRE-SE de 'const' e '&'. 'auto' por si só não deduz referências ou
//    constância. Use 'const auto&' para iterações de leitura eficientes.
//    Ex: for (const auto& item : minha_colecao) { ... }

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;

}