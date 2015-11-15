//
//  lista.hpp
//  Hash Table
//
//  Created by Diogo Magalhães Martins on 11/15/15.
//  Copyright © 2015 Diogo Magalhães Martins. All rights reserved.
//

#ifndef lista_hpp
#define lista_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class lista{

protected:

    struct elo{

        int dado;
        elo * prox;

        elo():prox(NULL) {};

        elo(int elem, elo * prox_elem = NULL):dado(elem), prox(prox_elem) {}

    };

    elo *prim;

public:

    void imprime_rec();

    lista():prim(NULL) {};
    virtual ~lista();

    bool vazia();
    virtual void insere(const int& novo);
    virtual bool remove(const int& elem);
    int tamanho() const;
    void imprime() const;
    bool busca(int elem);
    
    
};
#endif /* lista_hpp */
