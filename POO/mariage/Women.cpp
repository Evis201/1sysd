// Create by Evis201 on 01/03/2024
#include "Women.hpp"
#include <iostream>
#include <utility>

Woman::Woman(std::string firstName, std::string lastName, int age) : Person(std::move(firstName), std::move(lastName), age) {}

std::optional<Person> Woman::getPartner() {
    return partner;
}

bool Woman::isSingle() {
    return partner.has_value();
}

void Woman::setPartner(Person newPartner) {
    partner = std::move(newPartner);
}

void Woman::display() {
    Person::display();
    if (isSingle()) {
        std::cout << "Elle est célibataire.\n";
    } else {
        std::cout << "Elle est mariée à " << partner->getFirstName() << " " << partner->getLastName() << ".\n";
    }
}