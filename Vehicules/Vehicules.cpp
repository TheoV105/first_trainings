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

int Voiture::nbRoues() const {
    return 4;
}

Voiture::~Voiture() {}

Moto::Moto(int prix, float vitesseMax) : Vehicule(prix), m_vitesse(vitesseMax) {}

int Moto::nbRoues() const {
    return 2;
}

void Moto::affiche() const {
    cout << "Ceci est une moto allant a " << m_vitesse << " km/h et coutant " << m_prix << " euros." << endl;
}

Moto::~Moto() {}

Camion::Camion(int prix, int transport) : Vehicule(prix), m_transport(transport) {}

int Camion::nbRoues() const {
    return 4;
}

void Camion::affiche() const {
    cout << "Ceci est un camion pouvant transporter " << m_transport << " kg et coutant " << m_prix << " euros." << endl;
}

Camion::~Camion() {}

TukTuk::TukTuk(int prix, int transport) : Vehicule(prix), m_transport(transport) {}

int TukTuk::nbRoues() const {
    return 3;
}

void TukTuk::affiche() const {
    cout << "Ceci est un tuk-tuk pouvant transporter " << m_transport << " kg et coutant " << m_prix << " euros." << endl;
}

TukTuk::~TukTuk() {}