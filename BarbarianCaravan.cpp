//
// Created by Correia, Jose Bastos on 08/12/2024.
//

#include "BarbarianCaravan.h"

BarbarianCaravan::BarbarianCaravan( int x,
                                    int y,
                                    char identifier,
                                    int crew,
                                    int attackPower)
                                    : Caravan(x, y, identifier, crew), attackPower(attackPower) {}

// TODO override displayInfo to show barbarian caravan details
void BarbarianCaravan::displayInfo() {
    cout << "Barbarian Caravan\n"
         << "Name: " << getName() << "\nCrew: " << crew
         << "\nAttack Power: " << attackPower << endl;
}

BarbarianCaravan* BarbarianCaravan::duplicate() const
{
    return new BarbarianCaravan(*this);
}