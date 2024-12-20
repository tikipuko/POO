//
// Created by Correia, Jose Bastos on 08/12/2024.
//

#ifndef CARAVAN_H
#define CARAVAN_H

#include <string>
#include <unordered_map>
#include <iostream>
#include "MapContentItem.h"

using namespace std;

class Caravan : public MapContentItem {
protected:
    int crew;    // Number of crew members

public:
    // Constructor
    Caravan(int x, int y, char identifier, int crew);

    virtual void move();

    // Get the caravan's name
    char getName() const;

    // Virtual method to display information (polymorphic behavior)
    virtual void displayInfo();

    // Add crew members
    void addCrew(int count);

    // Remove crew members
    void removeCrew(int count);

    virtual Caravan* duplicate() const;
};

#endif //CARAVAN_H
