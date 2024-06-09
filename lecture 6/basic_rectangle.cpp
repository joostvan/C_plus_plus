#include <iostream>
#include <stdexcept>
// buckets of data

class Rectangle {
public:
    // task: add a default constructor, takes no arguments
    Rectangle(){
        std::cout << "Default Constructor" << std::endl;
        width = 100;
        height = 1000;
    }
    Rectangle( double the_width, double the_height){
    // parameterized constructor
        std::cout << "Parameterized Constructor" << std::endl;
        if (the_width < 0 || the_height < 0){
            throw std::runtime_error {"Invalid Dimensions"};
        }
        width = the_width;
        height = the_height;
    }
    // get_width and get_height
    // get_area
    double get_width(){
        return width;
    }
    double get_height(){
        return height;
    }
    double get_area(){
        return get_width()*get_height();
    }
    double width {0};
    double height {0};
};

double get_rectangle_area(Rectangle& rec) {
    return rec.width * rec.height;
}

int main() {
    Rectangle R{};
    Rectangle R2 {6, 10};
    std::cout << "R has width " << R.get_width() << std::endl;
    std::cout << "R has height " << R.height << std::endl;
    std::cout << "R has area " << R.get_area() << std::endl;
    std::cout << "R has area " << get_rectangle_area(R) << std::endl;
    return 0;
}

