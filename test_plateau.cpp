#include "plateau.h"
#include <cassert>
#include <iostream>

int main() {
    Plateau p;
    assert(p.dansGrille(0, 0));
    assert(!p.dansGrille(-1, 0));
    assert(!p.dansGrille(0, 8));
    assert(p.placerPion(0, 0, 'X'));
    assert(!p.placerPion(9, 0, 'X'));
    assert(p.obtenirPion(0, 0) == 'X');
    assert(p.comptePions() == 1);
    p.vider();
    assert(p.comptePions() == 0);
    std::cout << "ok\n";
    return 0;
}
