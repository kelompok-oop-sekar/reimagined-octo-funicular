# include <iostream>
# include "Goat.h"
using namespace std;

Goat::~Goat() // dtor
[
    cout << "Goat die" << endl;
]
Product Goat::grabMeat()
{
    // ?
}
Product Goat::grabMilk()
{
    // ?
}
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