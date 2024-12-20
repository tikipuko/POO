//
// Created by Correia, Jose Bastos on 08/12/2024.
//

#include "City.h"
#include <iostream>

using namespace std;

// Constructor
City::City(char name) : name(name) {}

// Allow a caravan to enter the city
void City::enterCaravan(Caravan* caravan) {
    caravans.push_back(caravan);
    cout << "Caravan " << caravan->getName() << " has entered the city " << name << ".\n";
}

// Inspect caravans currently in the city
void City::inspect() const {
    if (caravans.empty()) {
        cout << "No caravans in the city " << name << ".\n";
    } else {
        cout << "Caravans in the city " << name << ":\n";
        for (const auto& caravan : caravans) {
            caravan->displayInfo();
        }
    }
}

// Get the city's name
char City::getName() const {
    return name;
}
