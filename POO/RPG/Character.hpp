#include "Weapon.hpp"
#include <string>
#pragma once

// Création de la classe Character
class Character {
private:
    std::string name;
    int life;
    int mana;
    Weapon equipedWeapon;

public:
    Character();
    Character(std::string newName, int newLife, int newMana, Weapon newEquipedWeapon);
    ~Character();

    void receiveDammages(int dammages);
    void attack(Character &target);
    void takeLifePotion(int lifePoints);
    void switchWeapon(std::string weaponName, int weaponDammages);
    bool isAlive();
    void display();
};