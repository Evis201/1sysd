// Create by Evis201 on 20/03/2024
#include "Square.hpp"

Square::Square(double length) : length(length) {}

void Square::display() const
{
    std::cout << "Je suis un carré" << std::endl;
}

double Square::perimeter() const
{
    return 4 * length;
}

double Square::area() const
{
    return length * length;
}