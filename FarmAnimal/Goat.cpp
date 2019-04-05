# include <iostream>
# include <cstdlib>
# include <ctime>
# include "Goat.h"
using namespace std;

Goat::Goat(int _x, int _y) : MilkProducingFarmAnimal(_x,_y,false) , MeatProducingFarmAnimal(_x,_y,false)
{
    tickDie = 5;
    tickHungry = 8;
}
void Goat::moveAnimal() // method pergerakan Goat
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
bool Goat::isHungry() // true jika Goat dalam keadaan lapar
{
    return tickHungry==0;
}
void Goat::eat()
{
    // ?
}
void Goat::sounding() // menuliskan "Mbeek.. Mbeek.." ke layar ketika player melakukan Talk
{
    cout << "Mbeek.. Mbeek.." << endl;
}
char Goat::render()
{
    if (isHungry()) {
        return 'g';
    } else {
        return 'G';
    }
}
