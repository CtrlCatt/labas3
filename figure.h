#ifndef FIGURE_H // Если FIGURE_H еще не определен
#define FIGURE_H // Определяем FIGURE_H

#include <iostream>
#include <utility>

class Figure {
public:
    // Виртуальные функции для перегрузки в производных классах
    virtual double area() const = 0; // Вычисление площади
    virtual std::pair<double, double> center() const = 0; // Геометрический центр
    virtual void print(std::ostream& os) const = 0; // Вывод в поток
    virtual void input(std::istream& is) = 0; // Ввод из потока

    // Перегрузка оператора вывода
    friend std::ostream& operator<<(std::ostream& os, const Figure& fig) {
        fig.print(os);
        return os;
    }

    // Перегрузка оператора ввода
    friend std::istream& operator>>(std::istream& is, Figure& fig) {
        fig.input(is);
        return is;
    }

    // Виртуальный деструктор
    virtual ~Figure() {}
};

#endif // Закрываем FIGURE_H