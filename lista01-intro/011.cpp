#include <iostream>

void trocaValores( int &valA, int &valB );

int main() {

    int valorA{ 32 }, valorB{ 45 };

    std::cout << valorA << " " << valorB << std::endl;

    trocaValores( valorA, valorB );
    
    std::cout << valorA << " " << valorB << std::endl;
  
}

void trocaValores( int &valA, int &valB ){

    const int var{ valA };
    valA = valB;
    valB = var;

}