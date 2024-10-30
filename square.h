#ifndef SQUARE_H // Если SQUARE_H еще не определен
#define SQUARE_H // Определяем SQUARE_H

#include "figure.h"

class Square : public Figure {
private:
    double side;
    std::pair<double, double> center_point;

public:
    Square(double s = 0, std::pair<double, double> c = {0, 0});

    double area() const override;
    std::pair<double, double> center() const override;
    void print(std::ostream& os) const override;
    void input(std::istream& is) override;
};

#endif // Закрываем SQUARE_H
