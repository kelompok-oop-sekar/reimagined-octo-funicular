# include <iostream>
# include "Buffalo.h"
using namespace std;

Buffalo::~Buffalo() // dtor Buffalo
{
    cout << "Buffalo die" << endl;
}
Product Buffalo::grabMeat()
{
    // return product??
}
Product Buffalo::grabMilk()
{
    // return product??
}
void Buffalo::moveAnimal() // method pergerakan Buffalo
{
    // masih ga ngerti
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