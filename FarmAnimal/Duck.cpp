# include <iostream>
# include "Duck.h"
using namespace std;

Duck::~Duck() // dtor
{
    cout << "Duck die" << endl;
}
Product Duck::grabMeat()
{
    // ??
}
Product Duck::grabEgg()
{
    // ??
}
void Duck::moveAnimal() // method pergerakan Duck
{
    // ?
}
bool Duck::isHungry() // true jika Duck dalam keadaan lapar
{
    return (tickHungry == 0);
}
void Duck::eat()
{
    // ??
}
void Duck::sounding() // menuliskan "Kwek.. Kwek.." ke layar ketika player melakukan Talk
{
    cout << "Kwek.. Kwek.." << endl;
}