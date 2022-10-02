#include "Duree.hpp"

Duree::Duree(int heures, int minutes, int secondes) : heures_(heures), min_(minutes), sec_(secondes) {}

bool Duree::estEgal(Duree const& b) const {
    return (heures_ == b.heures_ && min_ == b.min_ && sec_ == b.sec_);
}

bool operator==(Duree const& lhs, Duree const& rhs) { 
    return lhs.estEgal(rhs);
}
