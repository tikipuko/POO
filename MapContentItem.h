//
// Created by Correia, Jose Bastos on 10/12/2024.
//

#ifndef MAPCONTENTITEM_H
#define MAPCONTENTITEM_H
#include <string>
using namespace std;

class MapContentItem {
    int x;
    int y;
    char identifier;

public:
    virtual ~MapContentItem() = default;
    MapContentItem();
    MapContentItem(int startX, int startY, char identifier = 'X') : x(startX), y(startY), identifier(identifier){}

    enum MoveDirection
    {
        Top, Right, Bottom, Left
    };

    // TODO FIX MAPA EMISFERICO
    void move(MoveDirection direction);

    char getIdentifier() const;
    int getX() const;
};

#endif //MAPCONTENTITEM_H
