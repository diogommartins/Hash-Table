//
//  tabelahash.hpp
//  Hash Table
//
//  Created by Diogo Magalhães Martins on 11/15/15.
//  Copyright © 2015 Diogo Magalhães Martins. All rights reserved.
//

#ifndef tabelahash_hpp
#define tabelahash_hpp

#include "lista.h"

class TabelaHash
{
private:
    lista * vetor;
    int tamanho;
    int hash( int itemChave );

public:
    TabelaHash(int tamanhoTabela = 13);
    void inserirItem(int chave);
    bool removerItem(int chave);
    bool buscarItemPorChave(int Chave);
    void imprimirTabela();
    void imprimirItens();
    int retornarTamanho();
    int retornarNumeroItens();
    ~TabelaHash();
};


#endif /* tabelahash_hpp */
