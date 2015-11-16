//
//  tabelahash.cpp
//  Hash Table
//
//  Created by Diogo Magalhães Martins on 11/15/15.
//  Copyright © 2015 Diogo Magalhães Martins. All rights reserved.
//

#include "tabelahash.hpp"

TabelaHash::TabelaHash(int tamanhoTabela)
{
    tamanho = tamanhoTabela;
    vetor = new lista[tamanho];
}

TabelaHash::~TabelaHash()
{
    delete [] vetor;
}

int TabelaHash::hash(int itemChave)
{
    return itemChave % tamanho;
}

void TabelaHash::inserirItem(int chave)
{
    int index = hash(chave);
    auto v = vetor[index];

    if(!vetor[index].busca(chave))
        vetor[index].insere(chave);
    else
        cout << "Chave já inserida";
}

bool TabelaHash::removerItem(int chave)
{
    int index = hash(chave);
    return vetor[index].remove(chave);
}

bool TabelaHash::buscarItemPorChave(int chave)
{
    int index = hash(chave);
    return vetor[index].busca(chave);
}

void TabelaHash::imprimirTabela()
{
    cout << "\n Tabela de" << tamanho << "elementos";
    for(int i=0; i < tamanho; i++)
    {
        cout << "\n Compartimento " << i << ": ";
        vetor[i].imprime();
    }
}

void TabelaHash::imprimirItens()
{
    for(int i=0; i < tamanho; i++)
    {
        if (vetor[i].tamanho() != 0)
        {
            vetor[i].imprime();
            cout << ", ";
        }
    }
}
