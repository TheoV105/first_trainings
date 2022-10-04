#include <iostream>
#include "Perso.hpp"

using namespace std;

//
Personnage::Personnage() : vie_(100), nom_("Jack"){}
Personnage::Personnage(string nom) : vie_(100), nom_(nom) {}

void Personnage::recevoirDegats(int degats) {
    vie_ -= degats;
}

void Personnage::coupDePoing(Personnage& cible) const {
    cible.recevoirDegats(10);
}

//
Guerrier::Guerrier() : Personnage() {}

void Guerrier::coupDeMarteau(Personnage& cible) const {
    cible.recevoirDegats(20);
}

//
Magicien::Magicien() : Personnage(), mana_(100) {}

void Magicien::bouleDeFeu(Personnage& cible) const {
    cible.recevoirDegats(25);
}

void Magicien::bouleDeGlace(Personnage& cible) const {
    cible.recevoirDegats(25);
}


