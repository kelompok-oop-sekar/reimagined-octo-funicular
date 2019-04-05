# include <iostream>
# include "Sheep.h"
using namespace std;

Sheep::Sheep(int _x, int _y) : MilkProducingFarmAnimal(_x,_y,false) , MeatProducingFarmAnimal(_x,_y,false)
{
    tickDie = 5;
    tickHungry = 8;
}
// Product Sheep::grabMeat()
// {
//     // return product??
// }
// Product Sheep::grabMilk()
// {
//     // return product??
// }
void Sheep::moveAnimal() // method pergerakan Sheep
{
    // ?
    if (tickHungry>0) {
        tickHungry--;
    }
    if (tickHungry==0) {
        tickDie--;
    }
}
bool Sheep::isHungry() // true jika Sheep dalam keadaan lapar
{
    return tickHungry==0;
}
void Sheep::eat()
{
    // ?
}
void Sheep::sounding() // menuliskan "Mbeek.. Mbeek.." ke layar ketika player melakukan Talk
{
    cout << "Mbiik.. Mbiik.." << endl;
}