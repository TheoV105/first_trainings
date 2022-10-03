#include "Duree.hpp"
#include <iostream>

using namespace std;

int main()
{
    Duree duree1(0, 10, 28), duree2(0, 10, 28);

    Duree resultat;

    duree1.afficher();
    cout << " et " << endl;
    duree2.afficher();

    duree1 += duree2;

    cout << " donne " << endl;
    duree1.afficher();

    return 0;
}