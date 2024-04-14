#include <vector>
#include <string>
#include <iostream>

int main(){
    std::vector<int> V {6,8,5,2,5,1};
    std::cout << "enter an index: ";
    int indx {};
    if (std::cin >> indx){
        try {
            int element = V.at(indx);
            std::cout << "Element at index " << indx << "is " << element << std::endl;
        } catch (std::out_of_range& e){
            std::cout << "Not a valid index" << std::endl;
            std::cout << "Message: " << e.what() << std::endl;
        }
    } else {
        std::cout << "You didn't enter an index" << std::endl;
    }

return 0;
}