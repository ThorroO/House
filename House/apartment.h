#pragma once
#ifndef APARTMENT_H
#define APARTMENT_H

#include "Person.h"

class Apartment {
private:
    Person* people;
    int count;

public:
    explicit Apartment(int count = 0);
    Apartment(const Apartment& other);
    ~Apartment();

    int getCount() const;
    void addPerson(const Person& person);
    Person getPerson(int index) const;

    Apartment& operator=(const Apartment& other);
};

#endif