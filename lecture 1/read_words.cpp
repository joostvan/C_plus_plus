#include <iostream>
#include <string>

int main(){
    std::string word1 {}, word2 {};
    std::cout << "Enter two words: ";
    std::cin >> word1 >> word2;
    std::cout << "You entered " << word1 << word2 << std::endl;   
}
//getline 