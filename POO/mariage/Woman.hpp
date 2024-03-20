// Create by Evis201 on 01/03/2024
#include "Person.hpp"
#pragma once

class Woman : public Person
{
protected:
    Person *partner;

public:
    Woman(std::string firstName, std::string lastName, int age);
    bool isSingle();
    Person *getPartner();
    void setPartner(Person *newPartner);
    void display() override;
};