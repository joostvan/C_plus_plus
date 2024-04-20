#include <string>
#include <stdexcept>
int read(){
    int value {};
    if (std::cin >> value){
        return value;
    } else {
        std::runtime_error ex {"The user didn't enter a number"};
        throw ex;

    }
}
int main(){
    std::cout << "Enter a number: ";
    try{
        int n {read()};
        std::cout << "you entered" << n << std::endl;
    } catch (std::runtime_error& e){
        std::cout << "You didn't enter a number" << std::endl;
    }
}