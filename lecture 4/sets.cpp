#include <iostream>
#include <set>
#include <stdexcept>


int main(){
    std::set< std::string > fruit {};
    fruit.insert("Raspberry");
    fruit.insert("Pear");
    fruit.insert("Cranberry");
    fruit.insert("Blueberry");  
    fruit.insert("Strawberry");
    fruit.insert("Mango");
    fruit.insert("Leafs");
    fruit.insert("Bark");
    fruit.insert("Durians");
    // task 1
    std::cout << "Size: " << fruit.size() << std::endl;
    return 0;

}  