#include "Duree.hpp"
#include <iostream>

using namespace std;

int main()
{
    Duree duree1(0, 10, 28), duree2(0, 15, 35);

    cout << duree1 << " et " << duree2 << endl;
    
    duree1 += duree2;

    cout << " donne " << duree1 << endl;
    return 0;
}