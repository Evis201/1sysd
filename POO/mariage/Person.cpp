// Create by Evis201 on 01/03/2024

#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    int age;
    Person* partner;
    std::string firstName;
    std::string lastName;

public:
    Person(std::string fn, std::string ln, int a) : firstName(fn), lastName(ln), age(a), partner(nullptr) {}

    virtual void display() {
        std::cout << firstName << " " << lastName << " a " << age << " ans. ";
    }

    void setPartner(Person* p) {
        partner = p;
        if (p->partner != this) {
            p->setPartner(this);
        }
    }
    bool isSingle() {
        return partner == nullptr;
    }
    
    Person* getPartner() {
        return partner;
    }
    std::string getFirstName() {
        return firstName;
    }
    std::string getLastName() {
        return lastName;
    }
    void setFirstName(std::string newFirstName) {
        firstName = newFirstName;
    }
    void setLastName(std::string newLastName) {
        lastName = newLastName;
    }
    void setAge(int newAge) {
    age = newAge;
    }
};

class Woman : public Person {
public:
    Woman(std::string fn, std::string ln, int a) : Person(fn, ln, a) {}

    void display() override {
        Person::display();
        if (isSingle()) {
            std::cout << "Elle est célibataire.\n";
        } else {
            std::cout << "Elle est mariée à " << partner->getFirstName() << " " << partner->getLastName() << ".\n";
        }
    }
};

class Man : public Person {
public:
    Man(std::string fn, std::string ln, int a) : Person(fn, ln, a) {}

    void display() override {
        Person::display();
        if (isSingle()) {
            std::cout << "Il est célibataire.\n";
        } else {
            std::cout << "Il est marié à " << partner->getFirstName() << " " << partner->getLastName() << ".\n";
        }
    }
};
