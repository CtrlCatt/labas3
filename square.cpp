#include "square.h"

Square::Square(double s, std::pair<double, double> c) : side(s), center_point(c) {}

double Square::area() const {
    return side * side;
}

std::pair<double, double> Square::center() const {
    return center_point;
}

void Square::print(std::ostream& os) const {
    os << "Square: Center = (" << center_point.first << ", " << center_point.second 
       << "), Side = " << side << ", Area = " << area();
}

void Square::input(std::istream& is) {
    std::cout << "Enter side and center (x, y) of the square: ";
    is >> side >> center_point.first >> center_point.second;
}

