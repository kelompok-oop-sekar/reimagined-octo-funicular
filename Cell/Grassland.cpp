#include <iostream>
#include "Grassland.h"

using namespace std;

Grassland :: Grassland (int _x, int _y, bool _grass) : Land(_x, _y, _grass){
	
}

char Grassland :: render (){
	if (!isWithGrass()){
		return ('-');
	} else {
		return ('#');
	}
}