#include "Duree.hpp"

using namespace std;

Duree::Duree(int heures, int minutes, int secondes) : heures_(heures), min_(minutes), sec_(secondes) {}

bool Duree::estEgal(Duree const& b) const {
    return (heures_ == b.heures_ && min_ == b.min_ && sec_ == b.sec_);
}

bool operator==(Duree const& lhs, Duree const& rhs) { 
    return lhs.estEgal(rhs);
}

Duree& Duree::operator+=(const Duree &duree2){
    // ajoute les secondes -> passe tout en heures puis repartit le reste
    sec_ += duree2.sec_;
    min_ = sec_/60;
    sec_ %= 60;

    //ajoute les minutes
    min_ += duree2.min_;
    heures_ += min_/60;
    min_ %= 60;

    heures_ += duree2.heures_;

    return *this;
}

/* void Duree::afficher() const {
    cout << heures_ << "h" << min_ << "m" << sec_ << "s" << endl;
} */

void Duree::afficher(ostream &flux) const {
    flux << heures_ << "h" << min_ << "m" << sec_ << "s";
}

Duree operator+(Duree const& a, Duree const& b) {
    Duree copie(a);
    copie += b;
    return copie;
}


ostream& operator<<(ostream &flux, Duree const& duree) {
    duree.afficher(flux) ;
    return flux;
}