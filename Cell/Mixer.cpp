#include <iostream>
//#include "Product.h"
#include "Mixer.h"

Mixer :: Mixer(int x, int y) : Facility(x,y){}

char Mixer :: render (){
	return 'M';
}
