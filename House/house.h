#pragma once
#ifndef HOUSE_H
#define HOUSE_H

#include "Apartment.h"

class House {
private:
    Apartment* apartments;
    int count;

public:
    explicit House(int count = 0);
    House(const House& other);
    ~House();

    int getCount() const;
    void addApartment(const Apartment& apartment);
    Apartment getApartment(int index) const;

    House& operator=(const House& other);
};

#endif