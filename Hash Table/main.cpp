//
//  main.cpp
//  Hash Table
//
//  Created by Diogo Magalhães Martins on 11/15/15.
//  Copyright © 2015 Diogo Magalhães Martins. All rights reserved.
//

#include <iostream>
#include "tabelahash.hpp"

int main(int argc, const char * argv[]) {
    auto table = TabelaHash();

    table.inserirItem(1);
    table.inserirItem(10);
    table.inserirItem(55);
    table.inserirItem(1234);
    table.inserirItem(145);

    return 0;
}
