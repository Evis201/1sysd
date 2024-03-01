// Create by Evis201 on 01/03/2024

#include "Person.cpp"

int main() {
    Woman naoki("Naoki", "De Gusta", 37);
    Man alex("Alex", "De La caca", 34);
    Man john("John", "Je sais pas", 40);

    naoki.setPartner(&alex);

    naoki.display();
    alex.display();
    john.display();

    return 0;
}