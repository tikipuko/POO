//
// Created by Correia, Jose Bastos on 08/12/2024.
//

#include "MerchantCaravan.h"

MerchantCaravan::MerchantCaravan(   int x,
                                    int y,
                                    char identifier,
                                    int crew)
                                    : Caravan(x, y, identifier, crew) {}

// Add goods to the caravan
void MerchantCaravan::addGoods(const string& item,
                                int quantity) {
    goods[item] += quantity;
}

// Remove goods from the caravan
void MerchantCaravan::removeGoods(const string& item, int quantity) {
    if (goods.find(item) == goods.end() || goods[item] < quantity) {
        cout << "Not enough " << item << " to remove!\n";
        return;
    }
    goods[item] -= quantity;
    if (goods[item] == 0) {
        goods.erase(item);
    }
}

// FIXME FIX THIS
// Override displayInfo to show details about the merchant caravan
void MerchantCaravan::displayInfo() {
    cout << "Merchant Caravan\n"
         << "Name: " << getName() << "\nCrew: " << crew
         << "\nGoods:\n";

    if (goods.empty()) {
        cout << "  None\n";
    } else {
        for (const auto& item : goods) {
            cout << "  - " << item.first << ": " << item.second << "\n";
        }
    }
}

MerchantCaravan* MerchantCaravan::duplicate() const
{
    return new MerchantCaravan(*this);
}
