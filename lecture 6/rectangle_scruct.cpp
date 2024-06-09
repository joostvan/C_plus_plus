#include <iostream>

// buckets of data

struct Rectangle {
    double width {0};
    double height {0};
};

double get_rectangle_area(Rectangle& rec) {
    return rec.width * rec.height;
}

int main() {
    Rectangle R{1, 1};
    Rectangle R2 {6, 10};
    std::cout << "R has width " << R.width << std::endl;
    std::cout << "R has height " << R.height << std::endl;
    std::cout << "R has area " << get_rectangle_area(R) << std::endl;
    return 0;
}

