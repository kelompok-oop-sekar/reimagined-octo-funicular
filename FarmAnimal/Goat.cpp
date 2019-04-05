# include <iostream>
# include "Goat.h"
using namespace std;

Goat::Goat(int _x, int _y) : MilkProducingFarmAnimal(_x,_y,false) , MeatProducingFarmAnimal(_x,_y,false)
{
    tickDie = 5;
    tickHungry = 8;
}
void Goat::moveAnimal() // method pergerakan Goat
{
    // ?
    if (tickHungry>0) {
        tickHungry--;
    }
    if (tickHungry==0) {
        tickDie--;
    }
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
