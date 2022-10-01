#include <string>
#include "Arme.hpp"
 
class Personnage
{
    public:
    Personnage();
    Personnage(std::string nomArme, int degatsArme);

    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant() const ;
    void afficherEtat();
    
    private:
    int vie_;
    int mana_;
    Arme arme;
};