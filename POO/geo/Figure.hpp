// Create by Evis201 on 20/03/2024
#include <iostream>
#pragma once

class Figure
{
public:
    virtual void display() const;
    virtual double perimeter() const = 0;
    virtual double area() const = 0;
    virtual ~Figure() {};
};