#include <iostream>

class Triangulo{

    private:

        double altura;
        double largura;
    
    public:

       Triangulo( ){
            altura = 1;
            largura = 1;
       } 

       Triangulo( double altura, double largura ){
            this->altura = altura;
            this->largura = largura;
       } 

       double calcularArea(){
            return altura * largura;
       }

};

int main() {

    Triangulo trian{};
    Triangulo gulo{ 42, 73 };

    std::cout << trian.calcularArea() << std::endl;
    std::cout << gulo.calcularArea() << std::endl;
    
}