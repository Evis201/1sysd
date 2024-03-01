#include "Man.hpp"
#include <iostream>

Person* Man::getPartner() {
    return partner;
}

bool Man::isSingle() {
    return partner == nullptr;
}

void Man::setPartner(Person* newPartner) {
    partner = newPartner;
}

void Man::display() {
    Person::display();
    if (isSingle()) {
        std::cout << "Il est célibataire.\n" << std::endl;
    } else {
        std::cout << "Il est marié à " << partner->getFirstName() << " " << partner->getLastName() << std::endl;
    }
}

Man::Man(std::string firstName, std::string lastName, int age) : Person(std::move(firstName), std::move(lastName), age) {
    partner = nullptr;
}