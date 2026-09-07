#include "plateau.h"
#include <iostream>

int main() {
    Plateau plateau;
    if (!plateau.placerPion(0, 0, 'X')) {
        std::cerr << "failed to place X\n";
        return 1;
    }
    if (!plateau.placerPion(3, 4, 'O')) {
        std::cerr << "failed to place O\n";
        return 1;
    }
    if (!plateau.placerPion(2, 2, 'X')) {
        std::cerr << "failed to place second X\n";
        return 1;
    }
    plateau.afficher();
    std::cout << plateau.comptePions() << " pieces\n";
    return 0;
}
