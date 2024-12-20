//
// Created by Correia, Jose Bastos on 10/12/2024.
//

#include "MapContentItem.h"

MapContentItem::MapContentItem(): x(-1), y(-1) {}

void MapContentItem::move(MoveDirection direction) {
    switch (direction) {
    case Top:    y--; break;
    case Right:  x++; break;
    case Bottom: y++; break;
    case Left:   x--; break;
    }
}

char MapContentItem::getIdentifier() const
{
    return identifier;
}

int MapContentItem::getX() const
{
    return x;
}
