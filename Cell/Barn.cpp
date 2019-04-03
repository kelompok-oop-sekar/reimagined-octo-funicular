#include <iostream>
#include "Barn.h"

using namespace std;
Barn :: Barn(int _x, int _y, bool _grass) : Land(_x, _y, _grass){

}

char Barn :: render(){
	if (!isWithGrass()){
		return ('x');
	} else {
		return ('@');
	}
}
