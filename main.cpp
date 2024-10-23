#include <iostream>
#include <vector>
#include <memory>
#include "square.h"
#include "rectangle.h"
#include "trapezoid.h"


int main() {
    std::vector<std::shared_ptr<Figure>> figures; // умный указатель на век figures типа Figure
    char choice;
    do {
        std::cout << "Choose figure to add (s: square, r: rectangle, t: trapezoid, q: quit): ";
        std::cin >> choice;
        if (choice == 's') {
            figures.push_back(std::make_shared<Square>());
        } else if (choice == 'r') {
            figures.push_back(std::make_shared<Rectangle>());
        } else if (choice == 't') {
            figures.push_back(std::make_shared<Trapezoid>());
        }

        if (choice != 'q') {
            std::cin >> *figures.back();
        }

    } while (choice != 'q');

    double total_area = 0;
    for (const auto& fig : figures) {
        std::cout << *fig << std::endl; // разыминовываем умный указатель (Изгнал скверну!!!)
        total_area += fig->area(); // Эквивалент (*fig).area()
    }

    std::cout << "Total area of all figures: " << total_area << std::endl;

    return 0;
}