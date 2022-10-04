#include <iostream>
#include "Vehicules.hpp"

using namespace std;
Vehicule::Vehicule(int prix) : m_prix(prix) {};

void Vehicule::affiche() const {
    cout << "Ceci est un vehicule." << endl;
}

Voiture::Voiture(int prix, int portes) : Vehicule(prix), m_portes(portes) {};

void Voiture::affiche() const {
    cout << "Ceci est une voiture." << endl;
}

Moto::Moto(int prix, int vitesse) : Vehicule(prix), m_vitesse(vitesse) {};

void Moto::affiche() const {
    cout << "Ceci est une moto." << endl;
}

