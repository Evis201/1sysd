// Create by Evis201 on 20/03/2024// Create by Evis201 on 20/03/2024
#include "Figure.hpp"
#include <iostream>

class Square : public Figure {
    double length;
public:
    Square(double length);
    void display() const override;
    double perimeter() const override;
    double area() const override;
};