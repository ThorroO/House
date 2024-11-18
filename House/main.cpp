#include <iostream>
#include "House.h"

using namespace std;

int main() {
    House house;

    Apartment apt1;
    apt1.addPerson(Person("Alice"));
    apt1.addPerson(Person("Bob"));

    Apartment apt2;
    apt2.addPerson(Person("Charlie"));

    house.addApartment(apt1);
    house.addApartment(apt2);

    for (int i = 0; i < house.getCount(); ++i) {
        cout << "Apartment " << i + 1 << ":\n";
        Apartment apt = house.getApartment(i);
        for (int j = 0; j < apt.getCount(); ++j) {
            cout << "- " << apt.getPerson(j).getName() << "\n";
        }
    }

    return 0;
}