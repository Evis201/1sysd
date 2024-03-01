// Create by Evis201 on 01/03/2024
#include "Man.cpp"
#include "Woman.cpp"
#include "Person.cpp"

int main() {
    Woman naoki("Naoki", "De Gusta", 37);
    Man alex("Alex", "De La jsp", 34);

    naoki.setPartner(&alex);
    alex.setPartner(&naoki);


    naoki.display();
    alex.display();

    return 0;
}