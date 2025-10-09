#include <iostream>

namespace matematica{

    int soma( int a, int b ){

        return a + b;

    }

    int subtracao( int a, int b ){
        
        return a - b;

    }

}

int main (){

    int a{ 42 };
    int b{ 73 };
    int result{ matematica::subtracao( a, b ) };

    std::cout << result << std::endl;
     
}