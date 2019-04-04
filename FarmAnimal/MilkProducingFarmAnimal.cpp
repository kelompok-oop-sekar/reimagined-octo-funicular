# include <iostream>
# include "MilkProducingFarmAnimal.h"
using namespace std;

void MilkProducingFarmAnimal::setMilk(bool state)
{
    milk = state;
}
bool MilkProducingFarmAnimal::getMilk()
{
    return milk;
}