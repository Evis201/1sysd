#include "Character.hpp"
#include "Weapon.hpp"

int main() {
    Weapon geraltWeapon("Épée", 30);
    Weapon yenneferWeapon("Baton", 25);

    Character geralt("Geralt", 100, 100, geraltWeapon);
    Character yennefer("Yennefer", 100, 100, yenneferWeapon);

    geralt.display();
    yennefer.display();

    geralt.attack(yennefer);

    geralt.display();
    yennefer.display();

    yennefer.takeLifePotion(20);

    geralt.display();
    yennefer.display();

    return 0;
}