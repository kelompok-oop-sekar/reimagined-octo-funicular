# include <iostream>
# include "Buffalo.h"
using namespace std;

Buffalo::Buffalo(int _x, int _y) : MilkProducingFarmAnimal(_x,_y,false) , MeatProducingFarmAnimal(_x,_y,false)
{
    tickDie = 5;
    tickHungry = 10;
}
void Buffalo::moveAnimal() // method pergerakan Buffalo
{
    // case : kanan
    // case : kiri
    // case : atas
    // case : bawah
    if (tickHungry>0) {
        tickHungry--;
    }
    if (tickHungry==0) {
        tickDie--;
    }
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