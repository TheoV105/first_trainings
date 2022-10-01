#ifndef DEF_ARME
#define DEF_ARME

#include <iostream>
#include <string>
 
class Arme
{
    public:
 
    Arme();
    Arme(std::string nom, int degats);
    void changer(std::string nom, int degats);
    void afficher() const;
    int degats() const;
 
    private:
 
    std::string nom_;
    int degats_;
};
 
#endif