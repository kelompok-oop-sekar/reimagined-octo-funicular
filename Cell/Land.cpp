#include <iostream>
#include "Land.h"

using namespace std;

Land :: Land (int _x, int _y, bool _grass) : Cell(_x, _y) {
	this->grass = _grass;
}

bool Land :: isWithGrass() //Apakah Land (beserta turunannya) memiliki rumput atau tidak 
{
	return grass;
}

void Land :: setGrass() //set land (beserta turunannya) berumput
{
	this-> grass = true;
}

void Land :: removeGrass()//Untuk menghapus grass
{
	this-> grass = false;
}