//
// Created by Correia, Jose Bastos on 03/12/2024.
//

#ifndef SIMULADOR_H
#define SIMULADOR_H
#include <vector>
#include <iostream>
#include "Buffer.h"
#include "CMD.h"
#include "GameManager.h"

using namespace std;

class Simulador {
    int linhas;
    int colunas;
    vector<string> mapa;
    Buffer screen;
    GameManager manager;

public:
    Simulador(int linhas,
        int colunas);

    void geraMapa();
    void mostra();
    void processaComando(string & cmd);
    void processaComando(CMD command);
    void executa();
};



#endif //SIMULADOR_H
