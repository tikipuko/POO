//
// Created by Correia, Jose Bastos on 08/12/2024.
//

#ifndef CITY_H
#define CITY_H



#include <vector>
#include <string>
#include "Caravan.h" // Assumes the Caravan class is in a separate file

using namespace std;

class City {
private:
    char name; // Unique name (letter)
    vector<Caravan*> caravans; // List of caravans in the city

public:
    // Constructor
    explicit City(char name);

    // Allow a caravan to enter the city
    void enterCaravan(Caravan* caravan);

    // Inspect caravans currently in the city
    void inspect() const;

    // Get the city's name
    char getName() const;
};

#endif //CITY_H
