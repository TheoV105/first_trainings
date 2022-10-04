#ifndef VEHICULES_HPP
#define VEHICULES_HPP

class Vehicule {
    public:
    Vehicule(int prix);
    void affiche() const;  //Affiche une description du Vehicule

    protected:
    int m_prix;  //Chaque véhicule a un prix
};

class Voiture : public Vehicule {
    public:
    Voiture(int prix, int portes);
    void affiche() const;

    private:
    int m_portes;  //Le nombre de portes de la voiture
};

class Moto : public Vehicule {
    public:
    Moto(int prix, float vitesse);
    void affiche() const;
 
    private:
    float m_vitesse;  //La vitesse maximale de la moto
};

#endif