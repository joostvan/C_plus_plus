#include <iostream>
#include <vector>

int main() {
    // Task 0: create an empty vector V for integer elements
    // vector is an abstract way to storing a sequence of values
    std::vector<int> V {}; 

    // Task 1: add the elements 6, 10, 17 to V (in that order)
    V.push_back(6);
    V.push_back(10);
    V.push_back(17);
    // Task 2: print out hte size of V
    std::cout << "the size is " << V.size() << std::endl;
    //Task 3: print out hte element at index 1 of V
    std::cout << "element at index 1 is" << V.at(1) << std::endl;
    //Task 4: Iterate over V and print out each element
    std::cout << "Task 4:" <<std::endl;
    for ( int x: V){
        std::cout << "Element: " << x << std::endl;
    }
    // task 5: use an indexing loop (C-style for-loop)
    V.push_back(187);
    std::cout << "Task 5:" << std::endl;
    for (unsigned int i{0}; i < V.size(); i++){
        std::cout << "Element at index " << i << " isL " << V.at(i) << std::endl;
    }
    // assign a value with another value at certain index
    V.at(1) = -999;
    V.push_back(187);
    std::cout << "Task 5:" << std::endl;
    for (unsigned int i{0}; i < V.size(); i++){
        std::cout << "Element at index " << i << " isL " << V.at(i) << std::endl;
    }
}