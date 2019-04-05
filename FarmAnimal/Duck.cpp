# include <iostream>
# include "Duck.h"
using namespace std;

Duck::Duck(int _x, int _y) : EggProducingFarmAnimal(_x,_y,false) , MeatProducingFarmAnimal(_x,_y,false)
{
    tickDie = 5;
    tickHungry = 7;
}
// Product Duck::grabMeat()
// {
//     // ??
// }
// Product Duck::grabEgg()
// {
//     // ??
// }
void Duck::moveAnimal() // method pergerakan Duck
{
    // case : kanan
    // case : kiri
    // case : atas
    // case : bawah
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
void Duck::die()
{
    cout << "Duck die" << endl;
}
void Duck::killed()
{
    MeatProducingFarmAnimal::setMeat(true);
}