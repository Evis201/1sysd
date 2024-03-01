// Create by Evis201 on 01/03/2024

#include "Person.cpp"

int main() {
    Woman naoki("Naoki", "De Gusta", 37);
    Man alex("Alex", "De La jsp", 34);
    Man john("John", "Je sais pas", 40);

    naoki.setPartner(&alex);

    naoki.display();
    alex.display();
    john.display();

    alex.getPartner()->display();

    john.setAge(50);
    john.display();

    naoki.setFirstName("Naoko");
    naoki.setLastName("De la jsp");
    naoki.display();

    return 0;
}