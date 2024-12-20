//
// Created by Correia, Jose Bastos on 18/12/2024.
//

#ifndef DESERT_H
#define DESERT_H
#include "MapContentItem.h"

class Desert : public MapContentItem {
public:
    Desert( int x,
            int y,
            char identifier);

    // TODO POSSIVELMENTE VAMOS TER QUE ADICIONAR ALGO PARA SABER SE ITEM ITEM NO DESERTO
};

#endif //DESERT_H
