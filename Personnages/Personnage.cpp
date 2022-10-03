#include<iostream>
#include<string>
#include "Personnage.hpp"

using namespace std;

Personnage::Personnage() : vie_(100), mana_(100), arme_(nullptr) {
    arme_ = new Arme();
}

Personnage::Personnage(string nomArme, int degatsArme) : vie_(100), mana_(100), arme_(nullptr) {
    arme_ = new Arme(nomArme, degatsArme);
}

Personnage::Personnage(Personnage const& personnageACopier) 
   : vie_(personnageACopier.vie_), mana_(personnageACopier.mana_), arme_(0) {}

Personnage::~Personnage() {
    delete arme_;
}
 
void Personnage::recevoirDegats(int nbDegats){
    vie_ -= nbDegats;

    if (vie_ < 0) //Pour éviter d'avoir une vie négative
    {
        vie_ = 0;
    }
}

void Personnage::attaquer(Personnage &cible){
     cible.recevoirDegats(arme_->degats());
}

void Personnage::boirePotionDeVie(int quantitePotion){
    vie_ += quantitePotion;

    if (vie_ > 100) //Interdiction de dépasser 100 de vie
    {
        vie_ = 100;
    }
}

void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
    arme_->changer(nomNouvelleArme, degatsNouvelleArme);
}

bool Personnage::estVivant() const {
    return vie_ > 0;
}

void Personnage::afficherEtat() {
    cout << "Vie : " << vie_ << endl;
    cout << "Mana : " << mana_ << endl;
    arme_->afficher();
}