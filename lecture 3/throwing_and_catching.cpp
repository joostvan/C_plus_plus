#include <string>
#include <iostream>
#include <stdexcept>

int F(int x){
    int a {187};
    std::string s {"Raspberry"};
    float f {1.16};
    if (x < 0){
        throw a;
    }
    if (x == 0){
        throw f;
    }
    if (x > 10){
        throw s;
    }
    return 6;
}
int main(){
    int y {10000};
    try {
        y = F(100);
        std::cout << "y is " << y << std::endl;
    } catch (int z) {
        std::cout << "catch an int " << z << std::endl;
    } catch (std::string the_string){
        std::cout << "Caught a string: " << the_string << std::endl;
    } catch (...){
        std::cout << "Caught ... something?" << std::endl;
    }
    std::cout << "y is " << y << std::endl;

    return 0;

}