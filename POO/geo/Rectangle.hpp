// Create by Evis201 on 20/03/2024
#include "Figure.hpp"
#include <iostream>

class Rectangle : public Figure {
    double length, width;
public:
    Rectangle(double length, double width);
    void display() const override;
    double perimeter() const override;
    double area() const override;
};