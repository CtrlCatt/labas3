#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "figure.h"

class Rectangle : public Figure {
private:
    double width, height;
    std::pair<double, double> center_point;

public:
    Rectangle(double w = 0, double h = 0, std::pair<double, double> c = {0, 0});

    double area() const override;
    std::pair<double, double> center() const override;
    void print(std::ostream& os) const override;
    void input(std::istream& is) override;
};

#endif // RECTANGLE_H
