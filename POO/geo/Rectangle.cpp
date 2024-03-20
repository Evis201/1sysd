// Create by Evis201 on 20/03/2024
#include "Rectangle.hpp"

Rectangle::Rectangle(double length, double width) : length(length), width(width) {}

void Rectangle::display() const
{
    std::cout << "Je suis un rectangle" << std::endl;
}

double Rectangle::perimeter() const
{
    return 2 * (length + width);
}

double Rectangle::area() const
{
    return length * width;
}