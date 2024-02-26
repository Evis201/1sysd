#include "Weapon.hpp"
#include <iostream>

// Création de la classe Weapon
Weapon::Weapon() : name("Épée en bois"), dammages(10) {}
Weapon::Weapon(std::string newName, int newDammages) : name(newName), dammages(newDammages) {}

void Weapon::update(std::string newName, int newDammages) {
    name = newName;
    dammages = newDammages;
}

void Weapon::display() {
    std::cout << "Weapon Name: " << name << ", Dammages: " << dammages << std::endl;
}

int Weapon::getDammages() const {
    return dammages;
}