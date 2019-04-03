#include <iostream>
#include "Well.h"
using namespace std;


Well :: Well(int x, int y) : Facility(x,y){}

char Well :: render(){
	return 'W';
}