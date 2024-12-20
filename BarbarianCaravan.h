//
// Created by Correia, Jose Bastos on 08/12/2024.
//

#ifndef BARBARIANCARAVAN_H
#define BARBARIANCARAVAN_H
#include "Caravan.h"

class BarbarianCaravan final : public Caravan {
    int attackPower;

public:
    // Constructor
    BarbarianCaravan(int x, int y, char identifier, int crew, int attackPower);

    // TODO Override displayInfo to show specific details
    void displayInfo() override;

    BarbarianCaravan* duplicate() const;
};




#endif //BARBARIANCARAVAN_H
