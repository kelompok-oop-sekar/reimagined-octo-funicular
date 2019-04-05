# include <iostream>
# include "Goat.h"
using namespace std;

Goat::Goat(int _x, int _y) : MilkProducingFarmAnimal(_x,_y,false) , MeatProducingFarmAnimal(_x,_y,false)
{
    tickDie = 5;
    tickHungry = 8;
}
// Product Goat::grabMeat()
// {
//     // return product??
// }
// Product Goat::grabMilk()
// {
//     // return product??
// }
void Goat::moveAnimal() // method pergerakan Goat
{
    // ?
}
bool Goat::isHungry() // true jika Goat dalam keadaan lapar
{
    return tickHungry==0;
}
void Goat::eat()
{
    // ?
}
void Goat::sounding() // menuliskan "Mbeek.. Mbeek.." ke layar ketika player melakukan Talk
{
    cout << "Mbeek.. Mbeek.." << endl;
}
void Goat::die()
{
    cout << "Goat die" << endl;
}
void Goat::killed()
{
    MeatProducingFarmAnimal::setMeat(true);
}