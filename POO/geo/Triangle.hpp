// Create by Evis201 on 20/03/2024
#include "Figure.hpp"
#include <iostream>

class Triangle : public Figure
{
    double base, height;

public:
    Triangle(double base, double height);
    void display() const override;
    double perimeter() const override;
    double area() const override;
};