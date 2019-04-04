// File : EggProducingFarmAnimal.cpp
// berisi implementasi kelas EggProducingFarmAnimal

# include <iostream>
# include "EggProducingFarmAnimal.h"
using namespace std;

void EggProducingFarmAnimal::setEgg(bool state)
{
    egg = state;
}

bool EggProducingFarmAnimal::getEgg()
{
    return egg;
}