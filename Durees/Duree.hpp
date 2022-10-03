#ifndef DUREE_H
#define DUREE_H

#include <iostream>

class Duree
{
    public:
    Duree(int heures = 0, int min = 0, int sec = 0);
    bool estEgal(Duree const& b) const;
    Duree& operator+=(Duree const& duree);
/*     void afficher() const; */
    void afficher(std::ostream& flux) const;

    private:
    int heures_;
    int min_;
    int sec_;
};

bool operator==(Duree const& lhs, Duree const& rhs);
Duree operator+(Duree const& lhs, Duree const& rhs);

std::ostream& operator<<(std::ostream& flux, Duree const& duree);

#endif