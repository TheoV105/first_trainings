#include<iostream>
#include<string>
#include <Personnage.hpp>

using namespace std;

Personnage::Personnage() : vie_(100), mana_(100), arme("Epee rouillée", 10) {}
Personnage::Personnage(string nomArme, int degatsArme) : vie_(100), mana_(100), arme(nomArme, degatsArme) {}
 
void Personnage::recevoirDegats(int nbDegats){
    vie_ -= nbDegats;

    if (vie_ < 0) //Pour éviter d'avoir une vie négative
    {
        vie_ = 0;
    }
}

void Personnage::attaquer(Personnage &cible){
     cible.recevoirDegats(arme.degats());
}

void Personnage::boirePotionDeVie(int quantitePotion){
    vie_ += quantitePotion;

    if (vie_ > 100) //Interdiction de dépasser 100 de vie
    {
        vie_ = 100;
    }
}

bool Personnage::estVivant() const {
    return vie_ > 0;
}

void Personnage::afficherEtat() {
    cout << "Vie : " << vie_ << endl;
    cout << "Mana : " << mana_ << endl;
    arme.afficher();
}