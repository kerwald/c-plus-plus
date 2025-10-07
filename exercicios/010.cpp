#include <iostream>

int main(){
    float C;
    std::cout << "Digite a temperatura em graus Celsius " << std::endl;
    std::cin >> C;
    std::cout << "A temperatura em graus Farenheit é  " << ( ( C * 9 ) / 5 ) + 32 << std::endl;
}


