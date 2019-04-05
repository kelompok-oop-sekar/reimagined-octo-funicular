# include <iostream>
# include <cstdlib>
# include <ctime>
# include "Chicken.h"
using namespace std;

string Chicken::className = "Chicken";

Chicken::Chicken(int _x, int _y) : EggProducingFarmAnimal(_x,_y,false) , MeatProducingFarmAnimal(_x,_y,false) , FarmAnimal(_x,_y)
{
    tickDie = 5;
    tickHungry = 7;
}
string Chicken::getClassName()
{
    return className;
}
void Chicken::moveAnimal() // method pergerakan Chicken
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
bool Chicken::isHungry() // menghasilkan true jika Chicken dalam keadaan lapar
{
    return tickHungry==0;
}
void Chicken::eat()
{
    if (!EggProducingFarmAnimal::milk) {
       EggProducingFarmAnimal::milk == true;
   }
}
void Chicken::sounding() // menuliskan "Petok.. Petok.." ke layar ketika player melakukan Talk
{
    cout << "Petok.. Petok.." << endl;
}
char Chicken::render()
{
    if (isHungry()){
        return 'i';
    } else {
        return 'I';
    }
}