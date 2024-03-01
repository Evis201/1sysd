#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    int age;
    Person* partner;

public:
    std::string FirstName;
    std::string LastName;
    
    Person(std::string fn, std::string ln, int a) : FirstName(fn), LastName(ln), age(a), partner(nullptr) {}

    virtual void display() {
        std::cout << FirstName << " " << LastName << " a " << age << " ans. ";
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
    Woman(std::string fn, std::string ln, int a) : Person(fn, ln, a) {}

    void display() override {
        Person::display();
        if (isSingle()) {
            std::cout << "Elle est célibataire.\n";
        } else {
            std::cout << "Elle est mariée à " << partner->FirstName << " " << partner->LastName << ".\n";
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
            std::cout << "Il est marié à " << partner->FirstName << " " << partner->LastName << ".\n";
        }
    }
};
