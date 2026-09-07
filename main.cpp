#include "plateau.h"

int main() {
    Plateau plateau;
    plateau.placerPion(0, 0, 'X');
    plateau.placerPion(3, 4, 'O');
    plateau.placerPion(2, 2, 'X');
    plateau.afficher();
    return 0;
}
