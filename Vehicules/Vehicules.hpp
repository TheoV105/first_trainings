#ifndef VEHICULES_HPP
#define VEHICULES_HPP

class Garage {

};

class Vehicule {
    public:
    Vehicule(int prix);
    virtual void affiche() const;  //Affiche une description du Vehicule
    virtual int nbRoues() const = 0;
    void affichePrix() const;
    virtual ~Vehicule();

    protected:
    int m_prix;  //Chaque véhicule a un prix
    int m_annee;
};
        class Voiture : public Vehicule {
            public:
            Voiture(int prix, int portes);
            virtual void affiche() const;
            virtual int nbRoues() const;
            virtual ~Voiture();

            private:
            int m_portes;  //Le nombre de portes de la voiture
        };

        class Moto : public Vehicule {
            public:
            Moto(int prix, float vitesse);
            virtual void affiche() const;
            virtual int nbRoues() const;
            virtual ~Moto();
        
            private:
            float m_vitesse;  //La vitesse maximale de la moto
        };

        class Camion : public Vehicule {
            public:
            Camion(int prix, int transport);
            virtual void affiche() const; ///////////////////
            virtual int nbRoues() const;
            virtual ~Camion();
            private:
            int m_transport;
        };

        class TukTuk : public Vehicule {
            public:
            TukTuk(int prix, int transport);
            virtual void affiche() const; ///////////////////
            virtual int nbRoues() const;
            virtual ~TukTuk();
            private:
            int m_transport;
        };

#endif