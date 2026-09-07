#include "plateau.h"
#include <iostream>

Plateau::Plateau() {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            grid[i][j] = '.';
        }
    }
}

bool Plateau::dansGrille(int x, int y) const {
    return x >= 0 && x < cols && y >= 0 && y < rows;
}

bool Plateau::placerPion(int x, int y, char pion) {
    if (!dansGrille(x, y)) {
        return false;
    }
    grid[y][x] = pion;
    return true;
}

void Plateau::afficher() const {
    std::cout << "  ";
    for (int j = 0; j < cols; ++j) {
        std::cout << j << ' ';
    }
    std::cout << '\n';
    for (int i = 0; i < rows; ++i) {
        std::cout << i << ' ';
        for (int j = 0; j < cols; ++j) {
            std::cout << grid[i][j] << ' ';
        }
        std::cout << '\n';
    }
}

char Plateau::obtenirPion(int x, int y) const {
    if (!dansGrille(x, y)) {
        return '\0';
    }
    return grid[y][x];
}

void Plateau::vider() {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            grid[i][j] = '.';
        }
    }
}
