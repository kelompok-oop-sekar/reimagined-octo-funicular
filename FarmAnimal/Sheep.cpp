# include <iostream>
# include <cstdlib>
# include <ctime>
# include "Sheep.h"

string Sheep::className = "Sheep";

Sheep::Sheep(int _x, int _y) : MilkProducingFarmAnimal(_x,_y,false) , MeatProducingFarmAnimal(_x,_y,false) , FarmAnimal(_x,_y)
{
    tickDie = 5;
    tickHungry = 8;
}
string Sheep::getClassName()
{
    return className;
}
void Sheep::moveAnimal() // method pergerakan Sheep
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
bool Sheep::isHungry() // true jika Sheep dalam keadaan lapar
{
    return tickHungry==0;
}
void Sheep::eat()
{
    if (!MilkProducingFarmAnimal::milk) {
       MilkProducingFarmAnimal::milk == true;
   }
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