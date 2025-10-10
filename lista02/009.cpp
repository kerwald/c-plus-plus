#include <iostream>

class carro{

    private:

        std::string marca;
        std::string modelo;
        int ano;

    public:

    void setMarca( std::string marca ){
        this->marca = marca;
    }
    
    void setModelo( std::string modelo ){
        this->modelo = modelo;
    }

    void setAno( int ano ){
        this->ano = ano;
    }

    std::string getMarca(){
        return marca;
    }
    
    std::string getModelo(){
        return modelo;
    }

    int getAno(){
        return ano;
    }

};

int main() {



}