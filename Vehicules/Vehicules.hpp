#ifndef VEHICULES_HPP
#define VEHICULES_HPP

class Vehicule {
    public:
    Vehicule(int prix);
    virtual void affiche() const;  //Affiche une description du Vehicule
    ~Vehicule();

    protected:
    int m_prix;  //Chaque véhicule a un prix
};

class Voiture : public Vehicule {
    public:
    Voiture(int prix, int portes);
    virtual void affiche() const;
    ~Voiture();

    private:
    int m_portes;  //Le nombre de portes de la voiture
};

class Moto : public Vehicule {
    public:
    Moto(int prix, float vitesse);
    virtual void affiche() const;
    ~Moto();
 
    private:
    float m_vitesse;  //La vitesse maximale de la moto
};

#endif