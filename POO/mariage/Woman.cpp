#include "Woman.hpp"
#include <iostream>

Person* Woman::getPartner() {
    return partner;
}

bool Woman::isSingle() {
    return partner == nullptr;
}

void Woman::setPartner(Person* newPartner) {
    partner = newPartner;
}

void Woman::display() {
    Person::display();
    if (isSingle()) {
        std::cout << "Elle est célibataire." << std::endl;
    } else {
        std::cout << "Elle est mariée à " << partner->getFirstName() << " " << partner->getLastName() << std::endl;
    }
}

Woman::Woman(std::string firstName, std::string lastName, int age) : Person(std::move(firstName), std::move(lastName), age) {
    partner = nullptr;
}