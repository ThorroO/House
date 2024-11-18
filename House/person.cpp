#include "Person.h"
#include <cstring>

Person::Person(const char* name) {
    size_t len = strlen(name) + 1;
    this->name = new char[len];
    strcpy_s(this->name, len, name);
}

Person::Person(const Person& other) {
    size_t len = strlen(other.name) + 1;
    name = new char[len];
    strcpy_s(name, len, other.name);
}

Person::~Person() {
    delete[] name;
}

const char* Person::getName() const {
    return name;
}

void Person::setName(const char* newName) {
    delete[] name;
    size_t len = strlen(newName) + 1;
    name = new char[len];
    strcpy_s(name, len, newName);
}

Person& Person::operator=(const Person& other) {
    if (this != &other) {
        delete[] name;
        size_t len = strlen(other.name) + 1;
        name = new char[len];
        strcpy_s(name, len, other.name);
    }
    return *this;
}