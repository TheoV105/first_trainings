#include <iostream>
#include <vector>  
#include "Vehicules.hpp"

using namespace std;

int main() {
    vector<Vehicule*> listeVehicules;

    listeVehicules.push_back(new Voiture(15000, 5));
    listeVehicules.push_back(new Voiture(12000, 3));
    listeVehicules.push_back(new Moto(2000, 212.5));
    for(int i(0); i<listeVehicules.size(); ++i) {
    listeVehicules[i]->affiche();
    }
    for(int i(0); i<listeVehicules.size(); ++i) {
        delete  listeVehicules[i];
        listeVehicules[i] = nullptr;
    }
    return 0;
}