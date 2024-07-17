#include <iostream>
#include <stdexcept>
#include <string>

class Rectangle{
    public:
    Rectangle();
    Rectangle(double initial_width, double initial_height = 0.0);
    double get_width();
    double get_height();
    double get_area();
    static Rectangle create_unit_square();

private:
    double width{0};
    double height{0};
};
Rectangle::Rectangle(): width{0}, height{0} {
    std::cout << "Rectangle Default Constructor" << std::endl;
}

Rectangle::Rectangle(double initial_width, double initial_height){
    std::cout << "Rectangle Paramaterized Constructor" <<std::endl;
    width = initial_width;
    height = initial_height;
}
double Rectangle::get_width(){
    return width;
}
double Rectangle::get_height(){
    return height;
}
double Rectangle::get_area(){
    return get_width()*get_height();
}
Rectangle Rectangle::create_unit_square(){
    Rectangle result{1,1};
    return result;
}

int main(){
    Rectangle R {};
    Rectangle R2 {6, };
    std::cout << "R width" << R.get_width() << std::endl;
    std::cout << "R2 width" << R2.get_width() << std::endl;
    return 0;
}