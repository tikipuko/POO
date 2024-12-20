//
// Created by Correia, Jose Bastos on 08/12/2024.
//

#ifndef Montain_H
#define Montain_H
#include <random>


#include <vector>

#include "MapContentItem.h"

using namespace std;

class Mountain final : public MapContentItem {
public:
    Mountain(   int x,
                int y,
                char identifier);
};

#endif //Montain_H
