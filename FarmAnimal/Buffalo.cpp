# include <iostream>
# include <cstdlib>
# include <ctime>
# include "Buffalo.h"
using namespace std;

Buffalo::Buffalo (int _x, int _y) : MilkProducingFarmAnimal(_x,_y,false) , MeatProducingFarmAnimal(_x,_y,false) , FarmAnimal(_x,_y) {
    tickDie = 5;
    tickHungry = 10;
}
void Buffalo::moveAnimal() // method pergerakan Buffalo
{
    srand((unsigned)time(0));
    int randomX;
    int randomY;
    int rangeX = (6-0+1);
    int rangeY = (8-0+1);
    
    randomX = 0+int(rangeX*rand()/RAND_MAX + 1.0);
    randomY = 0+int(rangeY*rand()/RAND_MAX + 1.0);

    FarmAnimal::x = randomX;
    FarmAnimal::y = randomY;

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
char Buffalo::render()
{
    if (isHungry()) {
        return 'b';
    } else {
        return 'B';
    }
}