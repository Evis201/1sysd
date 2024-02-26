#include "Character.hpp"
#include <iostream>

// Création de la classe Character
Character::Character() : name(""), life(100), mana(100) {}
Character::Character(std::string newName, int newLife, int newMana, Weapon newEquipedWeapon)
    : name(newName), life(newLife), mana(newMana), equipedWeapon(newEquipedWeapon) {}
Character::~Character() {}

void Character::receiveDammages(int dammages) {
    life -= dammages;
    if (life < 0) life = 0;
}

void Character::attack(Character &target) {
    target.receiveDammages(25);
}

void Character::takeLifePotion(int lifePoints) {
    life += lifePoints;
    if (life > 100) life = 100;
}

void Character::switchWeapon(std::string weaponName, int weaponDammages) {
    equipedWeapon.update(weaponName, weaponDammages);
}


bool Character::isAlive() {
    return life > 0;
}

void Character::display() {
    std::cout << "Name: " << name << ", Life: " << life << ", Mana: " << mana << std::endl;
}