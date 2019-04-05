# include <iostream>
# include "Buffalo.h"
using namespace std;

Buffalo::Buffalo(int _x, int _y) : MilkProducingFarmAnimal(_x,_y,false) , MeatProducingFarmAnimal(_x,_y,false)
{
    tickDie = 5;
    tickHungry = 10;
}
// Product Buffalo::grabMeat()
// {
//     // return product??
// }
// Product Buffalo::grabMilk()
// {
//     // return product??
// }
void Buffalo::moveAnimal() // method pergerakan Buffalo
{
    // case : kanan
    // case : kiri
    // case : atas
    // case : bawah
}
bool Buffalo::isHungry()// menghasilkan true jika Buffalo dalam keadaan lapar
{
    return (tickHungry==0);
}
void Buffalo::eat()
{
    // jika grassland, ubah cell grassland; ubah milk; render milk
}
void Buffalo::sounding() // menuliskan "MOOOO.." ke layar ketika player melakukan Talk
{
    cout << "MOOOO.." << endl;
}
void Buffalo::die()
{
    cout << "Buffalo die" << endl;
}
void Buffalo::killed()
{
    MeatProducingFarmAnimal::setMeat(true);
}