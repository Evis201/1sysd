// Create by Evis201 on 01/03/2024
#include "Person.hpp"
#include <optional>
#pragma once

class Woman : public Person {
protected:
    std::optional<Person> partner;
public:
    Woman(std::string firstName, std::string lastName, int age);
    bool isSingle();
    std::optional<Person> getPartner();
    void setPartner(Person newPartner);
    void display() override;
};