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
	int randomVal = 1 + rand() % 4;

	switch (randomVal) {
	case 1: {
		if ((FarmAnimal::x + 1) >= 6 && (FarmAnimal::x + 1 <= 8) && !isObjectExist(x + 1, y)) {
			FarmAnimal::x++;
		}
	}
			break;
	case 2: {
		if ((FarmAnimal::x - 1) >= 6 && (FarmAnimal::x - 1 <= 8) && !isObjectExist(x - 1, y)) {
			FarmAnimal::x--;
		}
	}
			break;
	case 3: {
		if ((FarmAnimal::y + 1) >= 6 && (FarmAnimal::y + 1 <= 8) && !isObjectExist(x, y + 1)) {
			FarmAnimal::y++;
		}
	}
			break;
	case 4: {
		if ((FarmAnimal::y - 1) >= 6 && (FarmAnimal::y - 1 <= 8) && !isObjectExist(x, y - 1)) {
			FarmAnimal::y--;
		}
	}
			break;
	default: {
		// do nothing
	}
	}

	if (tickHungry > 0) {
		tickHungry--;
	}
	if (tickHungry == 0) {
		tickDie--;
	}
}
bool Chicken::isHungry() // menghasilkan true jika Chicken dalam keadaan lapar
{
    return tickHungry==0;
}
void Chicken::eat()
{
    if (!EggProducingFarmAnimal::egg) {
       EggProducingFarmAnimal::egg == true;
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