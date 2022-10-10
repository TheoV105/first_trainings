#ifndef PERSO_H
#define PERSO_H

#include <iostream>
#include <string>

class Personnage {
    public:
    Personnage();
    Personnage(string nom);
    void recevoirDegats(int degats);
    void coupDePoing(Personnage &cible) const;

    private:
    int vie_;
    std::string nom_;
};

class Guerrier : public Personnage {
    public:
    Guerrier();
    void coupDeMarteau(Personnage& cible) const;

};

class Magicien : public Personnage {
    public:
    Magicien();
    Magicien(string nom);
    void bouleDeFeu(Personnage& cible) const;
    void bouleDeGlace(Personnage& cible) const;

    private:
    int mana_;

};

#endif