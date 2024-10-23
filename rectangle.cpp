#include "rectangle.h"

Rectangle::Rectangle(double w, double h, std::pair<double, double> c)
    : width(w), height(h), center_point(c) {}

double Rectangle::area() const {
    return width * height;
}

std::pair<double, double> Rectangle::center() const {
    return center_point;
}

void Rectangle::print(std::ostream& os) const {
    os << "Rectangle: Center = (" << center_point.first << ", " << center_point.second 
       << "), Width = " << width << ", Height = " << height << ", Area = " << area();
}

void Rectangle::input(std::istream& is) {
    std::cout << "Enter width, height and center (x, y) of the rectangle: ";
    is >> width >> height >> center_point.first >> center_point.second;
}
