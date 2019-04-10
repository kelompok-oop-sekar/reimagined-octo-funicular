# include <iostream>
# include <cstdlib>
# include <ctime>
# include "Goat.h"
using namespace std;

string Goat::className = "Goat";

Goat::Goat(int _x, int _y) : MilkProducingFarmAnimal(_x,_y,false) , MeatProducingFarmAnimal(_x,_y,false), FarmAnimal(_x,_y)
{
    tickDie = 5;
    tickHungry = 8;
}
string Goat::getClassName()
{
    return className;
}
void Goat::moveAnimal() // method pergerakan Sheep
{
    int randomVal = 1 + rand() % 4;

    switch (randomVal) {
        case 1 : {
            if ((FarmAnimal::x+1) >= 0 && (FarmAnimal::x+1 <=6) && !isObjectExist(x+1,y)) {
                FarmAnimal::x++;
            }
        }
        break;
        case 2 : {
            if ((FarmAnimal::x-1) >= 0 && (FarmAnimal::x-1 <=6) && !isObjectExist(x - 1, y)) {
                FarmAnimal::x--;
            }
        }
        break;
        case 3 : {
            if ((FarmAnimal::y+1) >= 0 && (FarmAnimal::y+1 <=6) && !isObjectExist(x, y + 1)) {
                FarmAnimal::y++;
            }
        }
        break;
        case 4 : {
            if ((FarmAnimal::y-1) >= 0 && (FarmAnimal::y-1 <=6) && !isObjectExist(x, y - 1)) {
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
}void Goat::moveAnimal() // method pergerakan Sheep
{
    int randomVal = 1 + rand() % 4;

    switch (randomVal) {
        case 1 : {
            if ((FarmAnimal::x+1) >= 0 && (FarmAnimal::x+1 <=6) && !isObjectExist(x+1,y)) {
                FarmAnimal::x++;
            }
        }
        break;
        case 2 : {
            if ((FarmAnimal::x-1) >= 0 && (FarmAnimal::x-1 <=6) && !isObjectExist(x - 1, y)) {
                FarmAnimal::x--;
            }
        }
        break;
        case 3 : {
            if ((FarmAnimal::y+1) >= 0 && (FarmAnimal::y+1 <=6) && !isObjectExist(x, y + 1)) {
                FarmAnimal::y++;
            }
        }
        break;
        case 4 : {
            if ((FarmAnimal::y-1) >= 0 && (FarmAnimal::y-1 <=6) && !isObjectExist(x, y - 1)) {
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
}void Goat::moveAnimal() // method pergerakan Sheep
{
    int randomVal = 1 + rand() % 4;

    switch (randomVal) {
        case 1 : {
            if ((FarmAnimal::x+1) >= 0 && (FarmAnimal::x+1 <=6) && !isObjectExist(x+1,y)) {
                FarmAnimal::x++;
            }
        }
        break;
        case 2 : {
            if ((FarmAnimal::x-1) >= 0 && (FarmAnimal::x-1 <=6) && !isObjectExist(x - 1, y)) {
                FarmAnimal::x--;
            }
        }
        break;
        case 3 : {
            if ((FarmAnimal::y+1) >= 0 && (FarmAnimal::y+1 <=6) && !isObjectExist(x, y + 1)) {
                FarmAnimal::y++;
            }
        }
        break;
        case 4 : {
            if ((FarmAnimal::y-1) >= 0 && (FarmAnimal::y-1 <=6) && !isObjectExist(x, y - 1)) {
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
}void Sheep::moveAnimal() // method pergerakan Sheep
{
    int randomVal = 1 + rand() % 4;

    switch (randomVal) {
        case 1 : {
            if ((FarmAnimal::x+1) >= 0 && (FarmAnimal::x+1 <=6) && !isObjectExist(x+1,y)) {
                FarmAnimal::x++;
            }
        }
        break;
        case 2 : {
            if ((FarmAnimal::x-1) >= 0 && (FarmAnimal::x-1 <=6) && !isObjectExist(x - 1, y)) {
                FarmAnimal::x--;
            }
        }
        break;
        case 3 : {
            if ((FarmAnimal::y+1) >= 0 && (FarmAnimal::y+1 <=6) && !isObjectExist(x, y + 1)) {
                FarmAnimal::y++;
            }
        }
        break;
        case 4 : {
            if ((FarmAnimal::y-1) >= 0 && (FarmAnimal::y-1 <=6) && !isObjectExist(x, y - 1)) {
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
}void Sheep::moveAnimal() // method pergerakan Sheep
{
    int randomVal = 1 + rand() % 4;

    switch (randomVal) {
        case 1 : {
            if ((FarmAnimal::x+1) >= 0 && (FarmAnimal::x+1 <=6) && !isObjectExist(x+1,y)) {
                FarmAnimal::x++;
            }
        }
        break;
        case 2 : {
            if ((FarmAnimal::x-1) >= 0 && (FarmAnimal::x-1 <=6) && !isObjectExist(x - 1, y)) {
                FarmAnimal::x--;
            }
        }
        break;
        case 3 : {
            if ((FarmAnimal::y+1) >= 0 && (FarmAnimal::y+1 <=6) && !isObjectExist(x, y + 1)) {
                FarmAnimal::y++;
            }
        }
        break;
        case 4 : {
            if ((FarmAnimal::y-1) >= 0 && (FarmAnimal::y-1 <=6) && !isObjectExist(x, y - 1)) {
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
}void Sheep::moveAnimal() // method pergerakan Sheep
{
    int randomVal = 1 + rand() % 4;

    switch (randomVal) {
        case 1 : {
            if ((FarmAnimal::x+1) >= 0 && (FarmAnimal::x+1 <=6) && !isObjectExist(x+1,y)) {
                FarmAnimal::x++;
            }
        }
        break;
        case 2 : {
            if ((FarmAnimal::x-1) >= 0 && (FarmAnimal::x-1 <=6) && !isObjectExist(x - 1, y)) {
                FarmAnimal::x--;
            }
        }
        break;
        case 3 : {
            if ((FarmAnimal::y+1) >= 0 && (FarmAnimal::y+1 <=6) && !isObjectExist(x, y + 1)) {
                FarmAnimal::y++;
            }
        }
        break;
        case 4 : {
            if ((FarmAnimal::y-1) >= 0 && (FarmAnimal::y-1 <=6) && !isObjectExist(x, y - 1)) {
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
}void Sheep::moveAnimal() // method pergerakan Sheep
{
    int randomVal = 1 + rand() % 4;

    switch (randomVal) {
        case 1 : {
            if ((FarmAnimal::x+1) >= 0 && (FarmAnimal::x+1 <=6) && !isObjectExist(x+1,y)) {
                FarmAnimal::x++;
            }
        }
        break;
        case 2 : {
            if ((FarmAnimal::x-1) >= 0 && (FarmAnimal::x-1 <=6) && !isObjectExist(x - 1, y)) {
                FarmAnimal::x--;
            }
        }
        break;
        case 3 : {
            if ((FarmAnimal::y+1) >= 0 && (FarmAnimal::y+1 <=6) && !isObjectExist(x, y + 1)) {
                FarmAnimal::y++;
            }
        }
        break;
        case 4 : {
            if ((FarmAnimal::y-1) >= 0 && (FarmAnimal::y-1 <=6) && !isObjectExist(x, y - 1)) {
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
}void Sheep::moveAnimal() // method pergerakan Sheep
{
    int randomVal = 1 + rand() % 4;

    switch (randomVal) {
        case 1 : {
            if ((FarmAnimal::x+1) >= 0 && (FarmAnimal::x+1 <=6) && !isObjectExist(x+1,y)) {
                FarmAnimal::x++;
            }
        }
        break;
        case 2 : {
            if ((FarmAnimal::x-1) >= 0 && (FarmAnimal::x-1 <=6) && !isObjectExist(x - 1, y)) {
                FarmAnimal::x--;
            }
        }
        break;
        case 3 : {
            if ((FarmAnimal::y+1) >= 0 && (FarmAnimal::y+1 <=6) && !isObjectExist(x, y + 1)) {
                FarmAnimal::y++;
            }
        }
        break;
        case 4 : {
            if ((FarmAnimal::y-1) >= 0 && (FarmAnimal::y-1 <=6) && !isObjectExist(x, y - 1)) {
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
}void Sheep::moveAnimal() // method pergerakan Sheep
{
    int randomVal = 1 + rand() % 4;

    switch (randomVal) {
        case 1 : {
            if ((FarmAnimal::x+1) >= 0 && (FarmAnimal::x+1 <=6) && !isObjectExist(x+1,y)) {
                FarmAnimal::x++;
            }
        }
        break;
        case 2 : {
            if ((FarmAnimal::x-1) >= 0 && (FarmAnimal::x-1 <=6) && !isObjectExist(x - 1, y)) {
                FarmAnimal::x--;
            }
        }
        break;
        case 3 : {
            if ((FarmAnimal::y+1) >= 0 && (FarmAnimal::y+1 <=6) && !isObjectExist(x, y + 1)) {
                FarmAnimal::y++;
            }
        }
        break;
        case 4 : {
            if ((FarmAnimal::y-1) >= 0 && (FarmAnimal::y-1 <=6) && !isObjectExist(x, y - 1)) {
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
}void Sheep::moveAnimal() // method pergerakan Sheep
{
    int randomVal = 1 + rand() % 4;

    switch (randomVal) {
        case 1 : {
            if ((FarmAnimal::x+1) >= 0 && (FarmAnimal::x+1 <=6) && !isObjectExist(x+1,y)) {
                FarmAnimal::x++;
            }
        }
        break;
        case 2 : {
            if ((FarmAnimal::x-1) >= 0 && (FarmAnimal::x-1 <=6) && !isObjectExist(x - 1, y)) {
                FarmAnimal::x--;
            }
        }
        break;
        case 3 : {
            if ((FarmAnimal::y+1) >= 0 && (FarmAnimal::y+1 <=6) && !isObjectExist(x, y + 1)) {
                FarmAnimal::y++;
            }
        }
        break;
        case 4 : {
            if ((FarmAnimal::y-1) >= 0 && (FarmAnimal::y-1 <=6) && !isObjectExist(x, y - 1)) {
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
}void Sheep::moveAnimal() // method pergerakan Sheep
{
    int randomVal = 1 + rand() % 4;

    switch (randomVal) {
        case 1 : {
            if ((FarmAnimal::x+1) >= 0 && (FarmAnimal::x+1 <=6) && !isObjectExist(x+1,y)) {
                FarmAnimal::x++;
            }
        }
        break;
        case 2 : {
            if ((FarmAnimal::x-1) >= 0 && (FarmAnimal::x-1 <=6) && !isObjectExist(x - 1, y)) {
                FarmAnimal::x--;
            }
        }
        break;
        case 3 : {
            if ((FarmAnimal::y+1) >= 0 && (FarmAnimal::y+1 <=6) && !isObjectExist(x, y + 1)) {
                FarmAnimal::y++;
            }
        }
        break;
        case 4 : {
            if ((FarmAnimal::y-1) >= 0 && (FarmAnimal::y-1 <=6) && !isObjectExist(x, y - 1)) {
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
}void Sheep::moveAnimal() // method pergerakan Sheep
{
    int randomVal = 1 + rand() % 4;

    switch (randomVal) {
        case 1 : {
            if ((FarmAnimal::x+1) >= 0 && (FarmAnimal::x+1 <=6) && !isObjectExist(x+1,y)) {
                FarmAnimal::x++;
            }
        }
        break;
        case 2 : {
            if ((FarmAnimal::x-1) >= 0 && (FarmAnimal::x-1 <=6) && !isObjectExist(x - 1, y)) {
                FarmAnimal::x--;
            }
        }
        break;
        case 3 : {
            if ((FarmAnimal::y+1) >= 0 && (FarmAnimal::y+1 <=6) && !isObjectExist(x, y + 1)) {
                FarmAnimal::y++;
            }
        }
        break;
        case 4 : {
            if ((FarmAnimal::y-1) >= 0 && (FarmAnimal::y-1 <=6) && !isObjectExist(x, y - 1)) {
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
}void Sheep::moveAnimal() // method pergerakan Sheep
{
    int randomVal = 1 + rand() % 4;

    switch (randomVal) {
        case 1 : {
            if ((FarmAnimal::x+1) >= 0 && (FarmAnimal::x+1 <=6) && !isObjectExist(x+1,y)) {
                FarmAnimal::x++;
            }
        }
        break;
        case 2 : {
            if ((FarmAnimal::x-1) >= 0 && (FarmAnimal::x-1 <=6) && !isObjectExist(x - 1, y)) {
                FarmAnimal::x--;
            }
        }
        break;
        case 3 : {
            if ((FarmAnimal::y+1) >= 0 && (FarmAnimal::y+1 <=6) && !isObjectExist(x, y + 1)) {
                FarmAnimal::y++;
            }
        }
        break;
        case 4 : {
            if ((FarmAnimal::y-1) >= 0 && (FarmAnimal::y-1 <=6) && !isObjectExist(x, y - 1)) {
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
}void Goat::moveAnimal() // method pergerakan Sheep
{
	int randomVal = 1 + rand() % 4;

	switch (randomVal) {
	case 1: {
		if ((FarmAnimal::x + 1) >= 0 && (FarmAnimal::x + 1 <= 6) && !isObjectExist(x + 1, y)) {
			FarmAnimal::x++;
		}
	}
			break;
	case 2: {
		if ((FarmAnimal::x - 1) >= 0 && (FarmAnimal::x - 1 <= 6) && !isObjectExist(x - 1, y)) {
			FarmAnimal::x--;
		}
	}
			break;
	case 3: {
		if ((FarmAnimal::y + 1) >= 0 && (FarmAnimal::y + 1 <= 6) && !isObjectExist(x, y + 1)) {
			FarmAnimal::y++;
		}
	}
			break;
	case 4: {
		if ((FarmAnimal::y - 1) >= 0 && (FarmAnimal::y - 1 <= 6) && !isObjectExist(x, y - 1)) {
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
bool Goat::isHungry() // true jika Goat dalam keadaan lapar
{
    return tickHungry==0;
}
void Goat::eat()
{
    if (!MilkProducingFarmAnimal::milk) {
       MilkProducingFarmAnimal::milk == true;
   }
}
void Goat::sounding() // menuliskan "Mbeek.. Mbeek.." ke layar ketika player melakukan Talk
{
    cout << "Mbeek.. Mbeek.." << endl;
}
char Goat::render()
{
    if (isHungry()) {
        return 'g';
    } else {
        return 'G';
    }
}
