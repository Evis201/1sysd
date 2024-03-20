// Create by Evis201 on 20/03/2024
#include "Figure.cpp"
#include "Triangle.cpp"
#include "Square.cpp"
#include "Rectangle.cpp"
#include "Circle.cpp"
#include <vector>

int main() {
    std::vector<Figure*> figures;
    figures.push_back(new Triangle(3.0, 4.0));
    figures.push_back(new Square(5.0));
    figures.push_back(new Rectangle(6.0, 7.0));
    figures.push_back(new Circle(8.0));

    for (Figure* figure : figures) {
        figure->display();
        std::cout << "Perimeter: " << figure->perimeter() << std::endl;
        std::cout << "Area: " << figure->area() << std::endl;
        delete figure;
    }

    figures.clear();

    return 0;
}