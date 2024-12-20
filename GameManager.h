//
// Created by Correia, Jose Bastos on 04/12/2024.
//

#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H
#include <vector>

#include "Caravan.h"
#include "City.h"
#include "GameConfigurator.h"

using namespace std;

class GameManager {
    int coins;
    int turns;
    int combatsWon;
    GameConfigurator gameConfig;
    enum GameStatus
    {
        Running, Over
    };

    // TODO: vector the mapItemsClass
    // vector<MapContentItem * > mapItem


    vector<Caravan *> caravanas;
    vector<string> barbaros;
    vector<City *> cidades;
    vector<string> montanhas;
    int isValidCoins(int coins) const;
public:
    GameManager(int coins = 0);
    ~GameManager();
    void combat();
    void checkGameStatus();

    int getCoins() const;

    void setCoins(int coins);

    void configGame(string fileName = "config.txt");
};



#endif //GAMEMANAGER_H
