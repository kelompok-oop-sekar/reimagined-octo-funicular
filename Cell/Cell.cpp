#include <iostream>
#include "Cell.h"
using namespace std;

Cell :: Cell(int x, int y)
/*Ctor dengan parameter. 
 * x merepresentasikan posisi Cell dalam sumbu x (Horizontal), 
 * y merepresentasikan posisi Cell dalam sumbu y (vertikal) */
{
	this->x = x;
	this->y = y;
}

int Cell :: getX() const
// Mendapatkan posisi x dari cell
{
	return x;
}
int Cell :: getY() const
// Mendapatkan posisi y dari cell
{
	return y;
}
void Cell :: setX(int x)
// Mengeset posisi x dari cell
{
	this-> x = x;
}
void Cell :: setY(int y)
// Mengeset posisi y dari cell
{
	this->y = y;
}