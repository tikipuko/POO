//
// Created by Correia, Jose Bastos on 04/12/2024.
//

#include "GameManager.h"
#include <iostream>
#include "Buffer.h"

GameManager::GameManager(int coins):
coins(isValidCoins(coins)),
turns(0),
combatsWon(0),
gameConfig(GameConfigurator())
{
}

GameManager::~GameManager()
{
    // TODO apply game over
}

int GameManager::getCoins() const
{
    return coins;
}

void GameManager::setCoins(int coins)
{
    this->coins = isValidCoins(coins);
}

void GameManager::combat()
{
    // TODO combat
}

void GameManager::checkGameStatus()
{
    // TODO checkgamestatus
}

int GameManager::isValidCoins(int coins) const
{
    return coins > 0 && coins < 99999999 ? coins : 0;
}

void GameManager::configGame(string fileName)
{
    cout << "Fase 1 Iniciada!" << endl;
    gameConfig.readConfigFile(fileName);
    gameConfig.displayConfig();
}




