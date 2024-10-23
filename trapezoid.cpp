#include "trapezoid.h"

Trapezoid::Trapezoid(double b1, double b2, double h, std::pair<double, double> c)
    : base1(b1), base2(b2), height(h), center_point(c) {}

double Trapezoid::area() const {
    return 0.5 * (base1 + base2) * height;
}

std::pair<double, double> Trapezoid::center() const {
    return center_point;
}

void Trapezoid::print(std::ostream& os) const {
    os << "Trapezoid: Center = (" << center_point.first << ", " << center_point.second 
       << "), Base1 = " << base1 << ", Base2 = " << base2 << ", Height = " << height 
       << ", Area = " << area();
}

void Trapezoid::input(std::istream& is) {
    std::cout << "Enter base1, base2, height and center (x, y) of the trapezoid: ";
    is >> base1 >> base2 >> height >> center_point.first >> center_point.second;
}
