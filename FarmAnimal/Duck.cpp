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
    int randomVal = 1 + rand() % 4;

    switch (randomVal) {
        case 1 : {
            if ((FarmAnimal::x+1) >= 6 && (FarmAnimal::x+1 <=8)) {
                FarmAnimal::x++;
            }
        }
        break;
        case 2 : {
            if ((FarmAnimal::x-1) >= 6 && (FarmAnimal::x-1 <=8)) {
                FarmAnimal::x--;
            }
        }
        break;
        case 3 : {
            if ((FarmAnimal::y+1) >= 6 && (FarmAnimal::y+1 <=8)) {
                FarmAnimal::y++;
            }
        }
        break;
        case 4 : {
            if ((FarmAnimal::y-1) >= 6 && (FarmAnimal::y-1 <=8)) {
                FarmAnimal::y--;
            }
        }
        break;
        default : {
            // do nothing
        }
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