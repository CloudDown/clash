#ifndef PLATEAU_H
#define PLATEAU_H

class Plateau {
private:
    static const int rows = 8;
    static const int cols = 5;
    char grid[rows][cols];

public:
    Plateau();
    bool dansGrille(int x, int y) const;
    bool placerPion(int x, int y, char pion);
    void afficher() const;
    char obtenirPion(int x, int y) const;
    void vider();
    int comptePions() const;
};

#endif
