// File : EggProducingFarmAnimal.cpp
// berisi implementasi kelas EggProducingFarmAnimal

# include <iostream>
# include "EggProducingFarmAnimal.h"
using namespace std;

EggProducingFarmAnimal::EggProducingFarmAnimal(int _x, int _y, bool _egg) : FarmAnimal(_x, _y) {
    egg = _egg;
}

void EggProducingFarmAnimal::setEgg(bool _egg)
{
    egg = _egg;
}

bool EggProducingFarmAnimal::getEgg()
{
    return egg;
}