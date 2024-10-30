#include <gtest/gtest.h>
#include <iostream>
#include "trapezoid.h"
#include "square.h"
#include "rectangle.h"


TEST(TrapezoidTest, AreaCalculation) {
    
    Trapezoid trapezoid(5.0, 3.0, 4.0, {0.0, 0.0});
    double expected_area = 0.5 * (5.0 + 3.0) * 4.0;
    EXPECT_DOUBLE_EQ(trapezoid.area(), expected_area);
}

TEST(SquareTest, AreaCalculation) {
    
    Square square(2.0, {0.0,0.0});
    double expected_area = 2.0*2.0;
    EXPECT_DOUBLE_EQ(square.area(), expected_area);
}

TEST(RectangleTest, AreaCalculation) {
    
    Rectangle rectangle(3.0,4.0, {0.0,0.0});
    double expected_area = 3.0 * 4.0;
    EXPECT_DOUBLE_EQ(rectangle.area(), expected_area);
}