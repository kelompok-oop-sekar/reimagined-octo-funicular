#include <iostream>
#include <stdlib.h>
#include "Classes.h"

int main() {
	/*
	std::cout << "Press Enter button to continue";
	std::cin.get();
	system("CLS");

	//initializing map
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {

		}
	}

	//masukin hewan2 ke dalam linked list
	while (true) { //Badan utama permainan

		// lakukan control P.control()
		
		/* untuk semua hewan di dalam linked list, move. dan tambah tick*/

	Cell* halaman[64];

	for (int i = 0; i < 64; i++) {
		Cell* l;
		if (i / 8 >= 3 && i/8 < 6) {
			l = new Grassland(i % 8, i / 8, true);
		}
		else if (i / 8 < 3) {
			l = new Barn(i % 8, i / 8, true);
		}
		else {
			l = new Coop(i % 8, i / 8, true);
		}
		halaman[i] = l;
	}
	
	for (int i = 0; i < 64; i++) {
		Renderable::setMap(halaman[i]->getX(), halaman[i]->getY(), halaman[i]->render());
	}

	Renderable::display();
	while (true);
	return 0;
}