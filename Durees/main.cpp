#include "Duree.hpp"
#include <iostream>

using namespace std;

int main()
{
    Duree duree1(0, 10, 28), duree2(0, 10, 28);

    if (duree1 == duree2) {
        cout << "Les durees sont identiques";
    }
    else {
        cout << "Les durees sont differentes";
    }
    
    return 0;
}