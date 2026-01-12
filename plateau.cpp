#include "plateau.h"
#include <iostream>

Plateau::Plateau() {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            grid[i][j] = '.';
        }
    }
}

void Plateau::placerPion(int x, int y, char pion) {
    if (x >= 0 && x < cols && y >= 0 && y < rows) {
        grid[y][x] = pion;
    }
}

void Plateau::afficher() const {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << grid[i][j] << ' ';
        }
        std::cout << '\n';
    }
}

char Plateau::obtenirPion(int x, int y) const {
    if (x >= 0 && x < cols && y >= 0 && y < rows) {
        return grid[y][x];
    }
    return '\0';
}
