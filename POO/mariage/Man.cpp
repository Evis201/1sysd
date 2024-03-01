// Create by Evis201 on 01/03/2024
#include "Man.hpp"
#include <iostream>
#include <utility>

using namespace std;

Man::Man(std::string firstName, std::string lastName, int age) : Person(std::move(firstName), std::move(lastName), age) {}

std::optional<Person> Man::getPartner() {
    return partner;
}

bool Man::isSingle() {
    return partner.has_value();
}

void Man::setPartner(Person newPartner) {
    partner = std::move(newPartner);
}

void Man::display() {
    Person::display();
    if (isSingle()) {
        std::cout << "Il est célibataire.\n";
    } else {
        std::cout << "Il est marié à " << partner->getFirstName() << " " << partner->getLastName() << ".\n";
    }
}