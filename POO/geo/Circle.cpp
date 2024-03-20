// Create by Evis201 on 20/03/2024
#include "Circle.hpp"
#include <cmath>

Circle::Circle(double radius) : radius(radius) {}

void Circle::display() const {
    std::cout << "Je suis un cercle" << std::endl;
}

double Circle::perimeter() const {
    return 2 * M_PI * radius;
}

double Circle::area() const {
    return M_PI * radius * radius;
}