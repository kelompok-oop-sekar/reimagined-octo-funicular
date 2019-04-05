# include <iostream>
# include "Duck.h"
using namespace std;

string Duck::className = "Duck";

Duck::Duck(int _x, int _y) : EggProducingFarmAnimal(_x,_y,false) , MeatProducingFarmAnimal(_x,_y,false) , FarmAnimal(_x,_y)
{
    tickDie = 5;
    tickHungry = 7;
}
string Duck::getClassName()
{
    return className;
}
void Duck::moveAnimal() // method pergerakan Duck
{
    srand((unsigned)time(0));
    int randomX;
    int randomY;
    int rangeX = (8-6+1);
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
bool Duck::isHungry() // true jika Duck dalam keadaan lapar
{
    return (tickHungry == 0);
}
void Duck::eat()
{
    if (!EggProducingFarmAnimal::egg) {
       EggProducingFarmAnimal::egg == true;
   }
}
void Duck::sounding() // menuliskan "Kwek.. Kwek.." ke layar ketika player melakukan Talk
{
    cout << "Kwek.. Kwek.." << endl;
}
char Duck::render()
{
    if (isHungry()) {
        return 'd';
    } else {
        return 'D';
    }
}