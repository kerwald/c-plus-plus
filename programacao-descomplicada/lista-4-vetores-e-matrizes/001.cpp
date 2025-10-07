#include <iostream>
#include <vector>

int main() {
    std::vector<int> A = { 1, 0, 5, -2, -5, 7 };
    int soma = A[0] + A[1] + A[5];
    A[4] = 100;
    for( int x : A ){
        std::cout << x << std::endl;
    }
}