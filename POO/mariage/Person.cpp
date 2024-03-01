#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    int age;
    Person* partner;

public:
    std::string name;
    
    Person(std::string n, int a) : name(n), age(a), partner(nullptr) {}

    virtual void display() {
        std::cout << name << " a " << age << " ans. ";
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
};

class Woman : public Person {
public:
    Woman(std::string n, int a) : Person(n, a) {}

    void display() override {
        Person::display();
        if (isSingle()) {
            std::cout << "Elle est célibataire.\n";
        } else {
            std::cout << "Elle est mariée à " << partner->name << ".\n";
        }
    }
};

class Man : public Person {
public:
    Man(std::string n, int a) : Person(n, a) {}

    void display() override {
        Person::display();
        if (isSingle()) {
            std::cout << "Il est célibataire.\n";
        } else {
            std::cout << "Il est marié à " << partner->name << ".\n";
        }
    }
};
