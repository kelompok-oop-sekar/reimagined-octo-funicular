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
void Duck::moveAnimal() // method pergerakan Sheep
{
	int randomVal = 1 + rand() % 4;

	switch (randomVal) {
	case 1: {
		if ((FarmAnimal::x + 1) >= 0 && (FarmAnimal::x + 1 <= 7) && !isObjectExist(x + 1, y)) {
			FarmAnimal::x++;
		}
	}
			break;
	case 2: {
		if ((FarmAnimal::x - 1) >= 0 && (FarmAnimal::x - 1 <= 7) && !isObjectExist(x - 1, y)) {
			FarmAnimal::x--;
		}
	}
			break;
	case 3: {
		if ((FarmAnimal::y + 1) >= 6 && (FarmAnimal::y + 1 <= 7) && !isObjectExist(x, y + 1)) {
			FarmAnimal::y++;
		}
	}
			break;
	case 4: {
		if ((FarmAnimal::y - 1) >= 6 && (FarmAnimal::y - 1 <= 7) && !isObjectExist(x, y - 1)) {
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
bool Duck::isHungry() // true jika Duck dalam keadaan lapar
{
    return (tickHungry == 0);
}
void Duck::eat(LinkedList<Cell*> List)
{
	if (tickDie < 5) {
		FarmAnimal::eat(List);
		if (!EggProducingFarmAnimal::egg && (Map[x][y] == '@' || Map[x][y] == '#' || Map[x][y] == '*')) {
			EggProducingFarmAnimal::egg == true;
			tickDie = 5;
			tickHungry = 7;
		}
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