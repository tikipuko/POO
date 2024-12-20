//
// Created by Correia, Jose Bastos on 17/12/2024.
//

#ifndef GAMECONFIG_H
#define GAMECONFIG_H
#include <vector>
#include <string>
#include "GameModel.h"
#include "MapContentItem.h"

using namespace std;

class GameConfigurator {
    GameModel gameModel;
public:
    GameConfigurator();

    void readConfigFile(const string& filename);

    void displayConfig() const;

    GameModel getGameModel();
};



#endif //GAMECONFIG_H
