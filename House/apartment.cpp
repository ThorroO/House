#include "Apartment.h"

Apartment::Apartment(int count) : count(count) {
    people = count > 0 ? new Person[count] : nullptr;
}

Apartment::Apartment(const Apartment& other) : count(other.count) {
    people = count > 0 ? new Person[count] : nullptr;
    for (int i = 0; i < count; ++i) {
        people[i] = other.people[i];
    }
}

Apartment::~Apartment() {
    delete[] people;
}

int Apartment::getCount() const {
    return count;
}

void Apartment::addPerson(const Person& person) {
    Person* newPeople = new Person[count + 1];
    for (int i = 0; i < count; ++i) {
        newPeople[i] = people[i];
    }
    newPeople[count] = person;
    ++count;
    delete[] people;
    people = newPeople;
}

Person Apartment::getPerson(int index) const {
    return index >= 0 && index < count ? people[index] : Person();
}

Apartment& Apartment::operator=(const Apartment& other) {
    if (this != &other) {
        delete[] people;
        count = other.count;
        people = count > 0 ? new Person[count] : nullptr;
        for (int i = 0; i < count; ++i) {
            people[i] = other.people[i];
        }
    }
    return *this;
}