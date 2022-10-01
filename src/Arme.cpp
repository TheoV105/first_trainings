#include <Arme.hpp>
 
using namespace std;
 
Arme::Arme() : nom_("Epee rouillee"), degats_(10)
{
 
}
 
Arme::Arme(string nom, int degats) : nom_(nom), degats_(degats)
{
 
}
 
void Arme::changer(string nom, int degats)
{
    nom_ = nom;
    degats_ = degats;
}
 
void Arme::afficher() const
{
    cout << "Arme : " << nom_ << " (Degats : " << degats_ << ")" << endl;
}

int Arme::degats() const
{
    return degats_;
}