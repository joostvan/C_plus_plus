#include <iostream>
int main(){
    // in C++, creating a variable at creation vs assignment
    // int i
    // int 
    int i = 0;
    while (i < 5){
        std::cout << i << "squared is " << i*i << std::endl;
        i++;
    }
    int i = -166;
    unsigned int j = 6;
    double g = 10.187;
    
    for (int j = 0; j < 5; j++){
        std::cout << j << " squared is" << j*j <<std::endl;
    }
}