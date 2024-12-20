//
// Created by Correia, Jose Bastos on 03/12/2024.
//

#include "Simulador.h"
#include "CMD.h"
#include "GameConfigurator.h"
#include "Mountain.h" // TODO REMOVER

Simulador::Simulador(int linhas, int colunas):
    linhas(linhas),
    colunas(colunas),
    screen(linhas, colunas),
    manager(GameManager())
{
    //GameConfigurator a;
    //const string filename = "config.txt";
    //a.readConfigFile(filename);
    //a.displayConfig();
    geraMapa();
    manager.configGame();
}

void Simulador::geraMapa()
{
    mapa.clear();
    for(int i = 0; i < linhas; i++)
    {
        string linha(linhas, '.');
        mapa.push_back(linha);
    }
    // TODO POPULAR COM ITEMS DO GAME MANAGER

    //Mountain d = Mountain(10, 20);

   // auto it = d.getDesertPositions();




    // eg de preenchimento
    mapa[2][3] = '+'; // Montanha
    mapa[1][4] = 'C'; // Cidade TODO mudar para nums
    //for (auto it : d.getDesertPositions()) {
    //    std::cout << "Primeiro valor: " << it.first << ", Segundo valor: " << it.second << std::endl;
    //    mapa[it.first][it.second] = '+';
    //}

}

void Simulador::mostra()
{
    screen.clear();
    for(int i = 0; i < linhas; i++)
    {
        screen.moveCursor(i, 0);
        screen << mapa[i].c_str();
    }
    screen.render();
}

// FIXME NOT IN USE
void Simulador::processaComando(string & cmd)
{
    if (cmd == "show")
    {
        mostra();
    }
    else if (cmd.rfind("move", 0) == 0) {
        // Lógica para mover a caravana
    }
    else if (cmd == "quit") {
        cout << "Exiting simulation.\n";
        exit(0);
    } else {
        cout << "Unknown command: " << cmd << '\n';
    }
}


void Simulador::processaComando(CMD command) {
    switch (command) {
    case Play:
        mostra();
        break;
    case Move:
        // TODO: Lógica para mover caravana
            cout << "Executing move command.\n";
        break;
    case Quit:
        cout << "Exiting SIM.\n";
        exit(0);
        break;
    default:
        cout << "Unknown CMD.\n";
        break;
    }
}



/*
void Simulador::executa()
{
    string cmd;
    while (true) {
        cout << "Enter command: ";
        getline(cin, cmd);
        processaComando(cmd);
    }
}
*/

void Simulador::executa() {
    string input;

    // TODO set das configs

    while (true) {
        cout << "Enter command: ";

        getline(cin, input);

        CMD command = stringToCMD(input);
        processaComando(command);
    }
}
