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
		if ((FarmAnimal::y + 1) >= 0 && (FarmAnimal::y + 1 <= 5) && !isObjectExist(x, y + 1)) {
			FarmAnimal::y++;
		}
	}
			break;
	case 4: {
		if ((FarmAnimal::y - 1) >= 0 && (FarmAnimal::y - 1 <= 5) && !isObjectExist(x, y - 1)) {
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
bool Cow::isHungry() // menghasilkan true jika Cow dalam keadaan lapar
{
    return tickHungry==0;
}
void Cow::eat(LinkedList<Cell*> List)
{
	if (tickDie < 5) {
		FarmAnimal::eat(List);
		if (!MilkProducingFarmAnimal::milk && (Map[x][y] == '@' || Map[x][y] == '#' || Map[x][y] == '*')) {
			MilkProducingFarmAnimal::milk = true;
		}
		tickDie = 5;
		tickHungry = 8;
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