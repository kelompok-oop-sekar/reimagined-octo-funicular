# include <iostream>
# include "Chicken.h"
using namespace std;

// inisialisasi class member static
Chicken::Chicken(int _x, int _y) : EggProducingFarmAnimal(_x,_y,false) , MeatProducingFarmAnimal(_x,_y,false)
{
    tickDie = 5;
    tickHungry = 7;
}
// Product Chicken::grabMeat()
// {
//     // ??
// }
// Product Chicken::grabEgg()
// {
//     // ??
// }
void Chicken::moveAnimal() // method pergerakan Chicken
{
    // case : kanan
    // case : kiri
    // case : atas
    // case : bawah
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
void Chicken::die()
{
    cout << "Chicken die" << endl;
}
void Chicken::killed()
{
    MeatProducingFarmAnimal::setMeat(true);
}