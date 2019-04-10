// File : FarmAnimal.cpp
// Berisi driver kelas FarmAnimal

# include <iostream>
# include "FarmAnimal.h"
using namespace std;

// ctor
FarmAnimal::FarmAnimal(int _x, int _y)
{
    x = _x;
    y = _y;
}
int FarmAnimal::getX()
{
    return x;
}
int FarmAnimal::getY()
{
    return y;
}

void FarmAnimal::eat(LinkedList<Cell*> List) {
	if (Map[x][y] == '@' || Map[x][y] == '#' || Map[x][y] == '*') {
		List.get(y * 8 + x)->setGrass(false);
	}
}