#include <iostream>
#include "Coop.h"

using namespace std;

Coop :: Coop (int _x, int _y, bool _grass) : Land (_x, _y, _grass){
	
}

char Coop :: render(){
	if (!isWithGrass()){
		return ('o');
	} else {
		return ('*');
	}
}
