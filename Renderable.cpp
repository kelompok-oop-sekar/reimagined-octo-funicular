#include <iostream>
#include "Renderable.h"

char Renderable::Map[8][8];

void Renderable::display() {
	for (int j = 0; j < 8; j++) {
		for (int i = 0; i < 8; i++) {
			std::cout << Map[i][j];
		}
		std::cout << std::endl;
	}
}

char Renderable::getMap(int i, int j) {
	return Map[i][j];
}

void Renderable::setMap(int i, int j, char r) {
	Map[i][j] = r;
}

bool Renderable::isObjectExist(int i, int j) {
	if (Map[i][j] != '#' && Map[i][j] != '-' && Map[i][j] != '*' && Map[i][j] != '@' && Map[i][j] != 'o' && Map[i][j] != 'x') {
		return true;
	}
	else {
		return false;
	}
}