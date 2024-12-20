//
// Created by Correia, Jose Bastos on 08/12/2024.
//

#ifndef MERCHANTCARAVAN_H
#define MERCHANTCARAVAN_H
#include "Caravan.h"
#include <map>

class MerchantCaravan final : public Caravan {
    // FIXME create custom type
    map<string, int> goods;

public:
    MerchantCaravan(int x, int y, char identifier, int crew);

    void addGoods(const string& item, int quantity);

    void removeGoods(const string& item, int quantity);

    // TODO OVERRIDE
    void displayInfo() override;

    MerchantCaravan* duplicate() const;
};



#endif //MERCHANTCARAVAN_H
