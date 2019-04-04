# include <iostream>
# include "Cow.h"
using namespace std;

Cow::~Cow() // dtor
{
    cout << "Cow die" << endl;
}
Product Cow::grabMeat()
{
    // ??
}
Product Cow::grabMilk()
{
    // ??
}
void Cow::moveAnimal() // method pergerakan Cow
{
    // ??
}
bool Cow::isHungry() // menghasilkan true jika Cow dalam keadaan lapar
{
    return tickHungry==0;
}
void Cow::eat()
{
    // ??
}
void Cow::sounding() // menuliskan "Mooo.. Mooo.." ke layar ketika player melakukan Talk
{
    cout << "Mooo.. Mooo.." << endl;
}