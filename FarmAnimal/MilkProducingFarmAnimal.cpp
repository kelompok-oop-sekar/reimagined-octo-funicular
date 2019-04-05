# include <iostream>
# include "MilkProducingFarmAnimal.h"
using namespace std;

MilkProducingFarmAnimal::MilkProducingFarmAnimal(int _x, int _y, bool _milk) : FarmAnimal(_x, _y) {
    milk = _milk;
}
void MilkProducingFarmAnimal::setMilk(bool _milk)
{
    milk = _milk;
}
bool MilkProducingFarmAnimal::getMilk()
{
    return milk;
}
void MilkProducingFarmAnimal::grabMilk()
{
    milk = false;
}