# include <iostream>
# include <cstdlib>
# include <ctime>
# include "Buffalo.h"
using namespace std;

string Buffalo::className = "Buffalo";

Buffalo::Buffalo (int _x, int _y) : MilkProducingFarmAnimal(_x,_y,false) , MeatProducingFarmAnimal(_x,_y,false) , FarmAnimal(_x,_y) {
    tickDie = 5;
    tickHungry = 10;
}
string Buffalo::getClassName()
{
    return className;
}
void Buffalo::moveAnimal() // method pergerakan Buffalo
{
    int randomVal = 1 + rand() % 4;

    switch (randomVal) {
        case 1 : {
            if ((FarmAnimal::x+1) >= 0 && (FarmAnimal::x+1 <=6)) {
                FarmAnimal::x++;
            }
        }
        break;
        case 2 : {
            if ((FarmAnimal::x-1) >= 0 && (FarmAnimal::x-1 <=6)) {
                FarmAnimal::x--;
            }
        }
        break;
        case 3 : {
            if ((FarmAnimal::y+1) >= 0 && (FarmAnimal::y+1 <=6)) {
                FarmAnimal::y++;
            }
        }
        break;
        case 4 : {
            if ((FarmAnimal::y-1) >= 0 && (FarmAnimal::y-1 <=6)) {
                FarmAnimal::y--;
            }
        }
        break;
        default : {
            // do nothing
        }
    }

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
   if (!MilkProducingFarmAnimal::milk) {
       MilkProducingFarmAnimal::milk == true;
   }
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