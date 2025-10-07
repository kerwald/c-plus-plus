#include <iostream>

int main(){
    float F;
    std::cout << "Digite a temperatura em graus Farenheit " << std::endl;
    std::cin >> F;
    std::cout << "A temperatura em graus celcius é  " << (5 * (F-32) / 9) << std::endl;
}