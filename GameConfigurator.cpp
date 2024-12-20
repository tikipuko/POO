//
// Created by Correia, Jose Bastos on 17/12/2024.
//

#include "GameConfigurator.h"
#include <iostream>
#include <fstream>
#include <sstream>

#include "MapContentItem.h"
#include "Mountain.h"

using namespace std; // Adiciona o namespace std para simplificar o código

GameConfigurator::GameConfigurator() {}

// Método para ler configurações do ficheiro
void GameConfigurator::readConfigFile(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Erro: Não foi possível abrir o ficheiro " << filename << endl;
        return;
    }

    string line;

    // Ler o número de linhas
    if (getline(file, line)) {
        stringstream ss(line);
        string temp;
        ss >> temp >> gameModel.linhas; // Ler "linhas" e o valor correspondente
    }

    // Ler o número de colunas
    if (getline(file, line)) {
        stringstream ss(line);
        string temp;
        ss >> temp >> gameModel.colunas; // Ler "colunas" e o valor correspondente
    }

    // Ler o grid do mapa
    //for (int i = 0; i < gameModel.linhas; ++i) {
    //    if (getline(file, line)) {
//
//
    //        // TODO Criar vector<MapContentItem *> com o devido item;
//
    //        grid.push_back(line);
    //    }
    //}

    //Ler o grid do mapa
    for (int y = 0; y < gameModel.linhas; ++y) {
        if (getline(file, line)) {
            for (int x = 0; x < line.size(); ++x) {
                char conteudo = line[x];

                if(conteudo == '+')
                    gameModel.mapa.push_back(new Mountain(x, y, conteudo));
                // TODO IF conteudo == '.' -> Deserto() e para os outros characters
                // TODO Mudar este push back para uma funçao interna, tipo > void addMapContent( MapContentItem * )
                else
                    gameModel.mapa.push_back(new MapContentItem(x, y, conteudo));
            }
        }
    }

    // Ler os restantes parâmetros do jogo
    while (getline(file, line)) {
        stringstream ss(line);
        string key;
        int value;
        ss >> key >> value;

        if (key == "moedas") gameModel.moedas = value;
        else if (key == "instantes_entre_novos_itens") gameModel.instantesEntreNovosItems = value;
        else if (key == "duração_item") gameModel.duracaoItem = value;
        else if (key == "max_itens") gameModel.maxItens = value;
        else if (key == "preço_venda_mercadoria") gameModel.precoVendaMercadoria = value;
        else if (key == "preço_compra_mercadoria") gameModel.precoCompraMercadoria = value;
        else if (key == "preço_caravana") gameModel.precoCaravana = value;
    }

    file.close();
}

// Método para mostrar as configurações carregadas
void GameConfigurator::displayConfig() const {
    cout << "\n\n";
    cout << "Linhas: " << gameModel.linhas << ", Colunas: " << gameModel.colunas << "\n";
    for (const auto& row : gameModel.mapa) {
        cout << row->getIdentifier();
        if (row->getX() == 19)
            cout << "\n";
    }

    cout << "\n" << endl;
    cout << "Moedas: " << gameModel.moedas << "\n";
    cout << "Instantes entre novos itens: " << gameModel.instantesEntreNovosItems << "\n";
    cout << "Duracao do item: " << gameModel.duracaoItem << "\n";
    cout << "Max itens: " << gameModel.maxItens << "\n";
    cout << "Preco de venda da mercadoria: " << gameModel.precoVendaMercadoria << "\n";
    cout << "Preco de compra da mercadoria: " << gameModel.precoCompraMercadoria << "\n";
    cout << "Preco da caravana: " << gameModel.precoCaravana << "\n";
    cout << "\n\n";
}
