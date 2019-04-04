// File : FarmAnimal.cpp
// Berisi driver kelas FarmAnimal

# include <iostream>
# include "FarmAnimal.h"
using namespace std;

// ctor
FarmAnimal::FarmAnimal(int _x, int _y)
{
    x = _x;
    y = _y;
    tickDie = 5;
    cout << "Hewan ternak hidup" << endl;
}
// dtor
FarmAnimal::~FarmAnimal()
{
    cout << "Hewan ternak mati" << endl;
}
// prosedur memakan rumput jika land yang dipijak berumput
void FarmAnimal::eat()
{
    // jika grassland, maka remove grass ; menghasilkan farm product ;
}
