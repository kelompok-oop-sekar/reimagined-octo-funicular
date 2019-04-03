#include <iostream>
#include "Truck.h"

using namespace std;
Truck :: Truck(int x, int y) : Facility(x,y){}

char Truck :: render(){
	return 'T';
}
