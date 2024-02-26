#include "Character.cpp"
#include "Weapon.cpp"

int main() {
    Weapon geraltWeapon("Épée", 30);
    Weapon yenneferWeapon("Bâton", 25);

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

    yennefer.switchWeapon("Boule de feu", 25);
    yennefer.attack(geralt);

    geralt.display();
    yennefer.display();

    geralt.switchWeapon("Épée en argent", 30);
    geralt.attack(yennefer);

    geralt.display();
    yennefer.display();

    yennefer.takeLifePotion(20);
    yennefer.attack(geralt);

    geralt.display();
    yennefer.display();

    yennefer.attack(geralt);

    geralt.display();
    yennefer.display();

    yennefer.attack(geralt);

    geralt.display();
    yennefer.display();

    return 0;
}