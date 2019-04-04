# include <iostream>
# include "Chicken.h"
using namespace std;

Chicken::~Chicken() // dtor
{
    cout << "Chicken die" << endl;
}
Product Chicken::grabMeat()
{
    // ??
}
Product Chicken::grabEgg()
{
    // ??
}
void Chicken::moveAnimal() // method pergerakan Chicken
{
    // ??
}
bool Chicken::isHungry() // menghasilkan true jika Chicken dalam keadaan lapar
{
    return tickHungry==0;
}
void Chicken::eat()
{
    // ??
}
void Chicken::sounding() // menuliskan "Petok.. Petok.." ke layar ketika player melakukan Talk
{
    cout << "Petok.. Petok.." << endl;
}