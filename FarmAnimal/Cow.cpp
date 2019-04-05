# include <iostream>
# include <cstdlib>
# include <ctime>
# include "Cow.h"
using namespace std;

Cow::Cow(int _x, int _y) : MilkProducingFarmAnimal(_x,_y,false) , MeatProducingFarmAnimal(_x,_y,false) , FarmAnimal(_x,_y)
{
    tickDie = 5;
    tickHungry = 10;
}

string Cow::className = "Cow";

string Cow::getClassName() {
	return className;
}

void Cow::moveAnimal() // method pergerakan Cow
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
bool Cow::isHungry() // menghasilkan true jika Cow dalam keadaan lapar
{
    return tickHungry==0;
}
void Cow::eat()
{
    if (!MilkProducingFarmAnimal::milk) {
        MilkProducingFarmAnimal::milk = true;
    }
}
void Cow::sounding() // menuliskan "Mooo.. Mooo.." ke layar ketika player melakukan Talk
{
    cout << "Mooo.. Mooo.." << endl;
}
char Cow::render()
{
    if (isHungry()) {
        return 'c';
    } else {
        return 'C';
    }
}