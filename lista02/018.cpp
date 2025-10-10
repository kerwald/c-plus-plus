#include <iostream>

class Log{
    public:
        Log(){
            std::cout << "Log criado!" << std::endl;
        }
        ~Log(){
            std::cout << "Log destruido!" << std::endl;
        }
};

int main(){

    Log log{};
    
}