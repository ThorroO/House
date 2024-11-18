#include "House.h"

House::House(int count) : count(count) {
    apartments = count > 0 ? new Apartment[count] : nullptr;
}

House::House(const House& other) : count(other.count) {
    apartments = count > 0 ? new Apartment[count] : nullptr;
    for (int i = 0; i < count; ++i) {
        apartments[i] = other.apartments[i];
    }
}

House::~House() {
    delete[] apartments;
}

int House::getCount() const {
    return count;
}

void House::addApartment(const Apartment& apartment) {
    Apartment* newApartments = new Apartment[count + 1];
    for (int i = 0; i < count; ++i) {
        newApartments[i] = apartments[i];
    }
    newApartments[count] = apartment;
    ++count;
    delete[] apartments;
    apartments = newApartments;
}

Apartment House::getApartment(int index) const {
    return index >= 0 && index < count ? apartments[index] : Apartment();
}

House& House::operator=(const House& other) {
    if (this != &other) {
        delete[] apartments;
        count = other.count;
        apartments = count > 0 ? new Apartment[count] : nullptr;
        for (int i = 0; i < count; ++i) {
            apartments[i] = other.apartments[i];
        }
    }
    return *this;
}