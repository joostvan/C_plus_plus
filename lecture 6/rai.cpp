#include <iostream>
#include <stdexcept>
// buckets of data

class Dinner{
public:
    Dinner(){
        std::cout << "Dinner default constructor" << std::endl;
    };
    Dinner(int people){
        numberPeople = people;
        std::cout << "How many people? " << numberPeople << std::endl;
    };
    int numberPeople {};

};

int main(){
    Dinner D{5};
    std::cout << "Are you excited to serve... " << D.numberPeople << " people? " << std::endl;
};