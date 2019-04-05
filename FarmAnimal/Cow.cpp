# include <iostream>
# include "Cow.h"
using namespace std;

Cow::Cow(int _x, int _y) : MilkProducingFarmAnimal(_x,_y,false) , MeatProducingFarmAnimal(_x,_y,false)
{
    tickDie = 5;
    tickHungry = 10;
}
// Product Cow::grabMeat()
// {
//     // ??
// }
// Product Cow::grabMilk()
// {
//     // ??
// }
void Cow::moveAnimal() // method pergerakan Cow
{
    // case : kanan
    // case : kiri
    // case : atas
    // case : bawah
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
void Cow::die()
{
    cout << "Cow die" << endl;
}
void Cow::killed()
{
    MeatProducingFarmAnimal::setMeat(true);
}