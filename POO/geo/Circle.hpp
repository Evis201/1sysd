// Create by Evis201 on 20/03/2024
#pragma once
#include "Figure.hpp"
#include <iostream>


class Circle : public Figure {
    double radius;
public:
    Circle(double radius);
    void display() const override;
    double perimeter() const override;
    double area() const override;
};