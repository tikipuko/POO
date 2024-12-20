//
// Created by Correia, Jose Bastos on 18/12/2024.
//

#ifndef GAMEMODEL_H
#define GAMEMODEL_H
#include <vector>
#include "MapContentItem.h"
using namespace std;

class GameModel {
public:
    int linhas;
    int colunas;

    vector<MapContentItem *> mapa;

    int moedas;
    int instantesEntreNovosItems;
    int duracaoItem;
    int maxItens;
    int precoVendaMercadoria;
    int precoCompraMercadoria;
    int precoCaravana;
    int instantesEntreNovosBarbaros;
    int duracaoBarbaros;
    GameModel();

    void setLinhas(int linhas)
    {
        this->linhas = linhas;
    }

    void setColunas(int colunas)
    {
        this->colunas = colunas;
    }

    void setMoedas(int moedas)
    {
        this->moedas = moedas;
    }

    void setInstantesEntreNovoItems(int inst)
    {
        instantesEntreNovosItems = inst;
    }

    void setDuracaoItem(int duracaoItem)
    {
        duracaoItem = duracaoItem;
    }

    void setMasItens(int max_itens)
    {
        maxItens = max_itens;
    }

    void setPrecoVendaMercadoria(int preco_benda_mercadoria)
    {
        precoVendaMercadoria = preco_benda_mercadoria;
    }

    void setPrecoCompraMercadoria(int preco_compra_mercadoria)
    {
        precoCompraMercadoria = preco_compra_mercadoria;
    }

    void setPrecoCaravana(int preco_caravana)
    {
        precoCaravana = preco_caravana;
    }

    void setInstanteEntreNovosBarbaros(int instantes_entre_novos_barbaros)
    {
        instantesEntreNovosBarbaros = instantes_entre_novos_barbaros;
    }

    void setDuracaoBarbaros(int duracao_barbaros)
    {
        duracaoBarbaros = duracao_barbaros;
    }
};



#endif //GAMEMODEL_H
