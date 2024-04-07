#include <iostream>
// C++ % g++ -Wall -std=c++20 -o numeric_output numeric_output.cpp
// means use g++ compiler, turn on all warnings, and style c++20; 
int main(){

    int i = 6;
    double g = 1.87;

    std::cout << "the value of i is " << i << std::endl;
    // standard library is std and c-out
    // use the strange operator << stream insertion 
    
    std::cout << "the value of g is";
    std::cout << g;
    return 0;
}