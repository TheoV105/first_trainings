#ifndef DUREE_H
#define DUREE_H

#include <iostream>

bool operator==(Duree const& lhs, Duree const& rhs);

class Duree
{
    public:
    Duree(int heures = 0, int min = 0, int sec = 0);
    bool estEgal(Duree const& b) const;
    
    private:
    int heures_;
    int min_;
    int sec_;
};

#endif