// Create by Evis201 on 20/03/2024
#include "Triangle.hpp"

Triangle::Triangle(double base, double height) : base(base), height(height) {}

void Triangle::display() const
{
    std::cout << "Je suis un triangle" << std::endl;
}

double Triangle::perimeter() const
{
    return base + (height * 2);
}

double Triangle::area() const
{
    return (base * height) / 2;
}