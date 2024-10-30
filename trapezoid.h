#ifndef TRAPEZOID_H
#define TRAPEZOID_H

#include "figure.h"

class Trapezoid : public Figure {
private:
    double base1, base2, height;
    std::pair<double, double> center_point;

public:
    Trapezoid(double b1 = 0, double b2 = 0, double h = 0, std::pair<double, double> c = {0, 0});

    double area() const override;
    std::pair<double, double> center() const override;
    void print(std::ostream& os) const override;
    void input(std::istream& is) override;
};

#endif // TRAPEZOID_H
