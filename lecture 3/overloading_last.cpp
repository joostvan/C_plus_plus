#include <iostream>
#include <vector>
#include <string>

std::string last(std::vector<std::string> input){
    return input.at(input.size() -1);
}

int last (std::vector<int> input){
    return input.at(input.size() -1);
}

int last (std::vector<int> input){
    return input.at(input.size() -2);
}

char last (std::string input){
    return input.at(input.size()-1);
}

int main(){
    std::vector<int> W {5,10, 20};
    auto z {last(W)};
    std::cout << z << std::endl;
    return 0;
}