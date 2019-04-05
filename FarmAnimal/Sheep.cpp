# include <iostream>
# include <cstdlib>
# include <ctime>
# include "Sheep.h"
using namespace std;

Sheep::Sheep(int _x, int _y) : MilkProducingFarmAnimal(_x,_y,false) , MeatProducingFarmAnimal(_x,_y,false) , FarmAnimal(_x,_y)
{
    tickDie = 5;
    tickHungry = 8;
}
void Sheep::moveAnimal() // method pergerakan Sheep
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
bool Sheep::isHungry() // true jika Sheep dalam keadaan lapar
{
    return tickHungry==0;
}
void Sheep::eat()
{
    // ?
}
void Sheep::sounding() // menuliskan "Mbeek.. Mbeek.." ke layar ketika player melakukan Talk
{
    cout << "Mbiik.. Mbiik.." << endl;
}
char Sheep::render()
{
    if (isHungry()) {
        return 's';
    } else {
        return 'S';
    }
}