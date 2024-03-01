// Create by Evis201 on 01/03/2024
#include <string>
#pragma once

class Person {
protected:
    std::string firstName;
    std::string lastName;
    int age;

public:
    Person();
    Person(std::string firstName, std::string lastName, int age);
    void getOld();
    std::string getFirstName();
    std::string getLastName();
    void setFirstName(std::string newFirstName);
    void setLastName(std::string lastName);
    int getAge();
    void setAge(int newAge);
    virtual void display();

};