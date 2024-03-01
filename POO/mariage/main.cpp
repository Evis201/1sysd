#include "Person.cpp"

int main() {
    Woman naoki("Naoki", 37);
    Man alex("Alex", 34);
    Man john("John", 40);

    naoki.setPartner(&alex);

    naoki.display();
    alex.display();
    john.display();

    return 0;
}