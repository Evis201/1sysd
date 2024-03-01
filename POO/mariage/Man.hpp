// Create by Evis201 on 01/03/2024
#include "Person.hpp"
#include <optional>
#pragma once

class Man : public Person {
protected:
    std::optional<Person> partner;
    public:
    Man(std::string firstName, std::string lastName, int age);
    bool isSingle();
    std::optional<Person> getPartner();
    void setPartner(Person newPartner);
    void display() override;
};