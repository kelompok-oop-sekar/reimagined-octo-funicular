# include <iostream>
# include "Sheep.h"
using namespace std;

Sheep::~Sheep() // dtor
[
    cout << "Sheep die" << endl;
]
Product Sheep::grabMeat()
{
    // ?
}
Product Sheep::grabMilk()
{
    // ?
}
void Sheep::moveAnimal() // method pergerakan Sheep
{
    // ?
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