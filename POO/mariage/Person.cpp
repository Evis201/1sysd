// Create by Evis201 on 01/03/2024
#include "Person.hpp"
#include <utility>
#include <iostream>

Person::Person() {}

Person::Person(std::string firstName, std::string lastName, int age) {
    this->firstName = std::move(firstName);
    this->lastName = std::move(lastName);
    this->age = age;
}

void Person::getOld() {
    age += 1;
}

std::string Person::getFirstName() {
    return firstName;
}

void Person::setFirstName(std::string newFirstName) {
    firstName = std::move(newFirstName);
}

std::string Person::getLastName() {
    return lastName;
}

void Person::setLastName(std::string newLastName) {
    lastName = std::move(newLastName);
}

int Person::getAge() {
    return age;
}

void Person::setAge(int newAge) {
    age = newAge;
}

void Person::display() {
    std::cout << firstName << " " << lastName << " a " << age << " ans." << std::endl;
}