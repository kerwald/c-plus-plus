#include <iostream>

class Triangulo{

    private:

        double altura;
        double largura;
    
    public:

       Triangulo ( ){
            altura = 1;
            largura = 1;
       } 

       double calcularArea(){
            return altura * largura;
       }

};

int main() {

    Triangulo trian{};

    std::cout << trian.calcularArea() << std::endl;

}