#include <iostream>
#include "Vehicules.hpp"

using namespace std;
Vehicule::Vehicule(int prix) : m_prix(prix) {}

void Vehicule::affiche() const {
    cout << "Ceci est un vehicule coutant " << m_prix << " euros." << endl;
}

Vehicule::~Vehicule() {}

Voiture::Voiture(int prix, int portes) : Vehicule(prix), m_portes(portes) {}

void Voiture::affiche() const {
    cout << "Ceci est une voiture avec " << m_portes << " portes et coutant " << m_prix << " euros." << endl;
}

Voiture::~Voiture() {}

Moto::Moto(int prix, float vitesseMax) : Vehicule(prix), m_vitesse(vitesseMax) {}

void Moto::affiche() const {
    cout << "Ceci est une moto allant a " << m_vitesse << " km/h et coutant " << m_prix << " euros." << endl;
}

Moto::~Moto() {}