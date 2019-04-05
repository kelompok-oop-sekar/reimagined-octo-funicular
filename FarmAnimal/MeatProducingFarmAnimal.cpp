# include <iostream>
# include "MeatProducingFarmAnimal.h"
using namespace std;

MeatProducingFarmAnimal::MeatProducingFarmAnimal(int _x, int _y, bool _meat) : FarmAnimal(_x, _y) {
    meat = _meat;
}
void MeatProducingFarmAnimal::setMeat(bool _meat)
{
    meat = _meat;
}
bool MeatProducingFarmAnimal::getMeat()
{
    return meat;
}
void MeatProducingFarmAnimal::grabMeat()
{
    meat = false;
}