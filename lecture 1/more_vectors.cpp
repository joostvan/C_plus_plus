#include <iostream>
#include <vector>

int main(){

    // Task 1: create a vector W of element type float containing the sequence
    // 10.6, 1.87, 11.1, 11.6, 4.45
    std::vector<float> W {10.6, 1.87, 11.1, 11.6, 4.45};

    for (float x:W){
        std::cout << x << " ";
    }
    std::cout << std::endl;
}