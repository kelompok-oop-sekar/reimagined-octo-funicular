#include <iostream>
#include <stdlib.h>
#include "Classes.h"

int main() {
	/*
	std::cout << "Press Enter button to continue";
	std::cin.get();

	//initializing map
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {

		}
	}

	//masukin hewan2 ke dalam linked list
	while (true) { //Badan utama permainan

		// lakukan control P.control()
		
		/* untuk semua hewan di dalam linked list, move. dan tambah tick*/
	
	LinkedList<FarmAnimal*> listofanimal;
	FarmAnimal* a = new Cow(6,6);
	listofanimal.add(a);
	a = new Goat(3,3);
	listofanimal.add(a);
	a = new Sheep(5,5);
	listofanimal.add(a);
	
	// inisialisasi kondisi awal sampai -HERE
	Cell* halaman[64];

	for (int i = 0; i < 64; i++) {
		Cell* l;
		if (i / 8 >= 3 && i / 8 < 6) {
			l = new Grassland(i % 8, i / 8, true);
		}
		else if (i / 8 < 3) {
			l = new Barn(i % 8, i / 8, true);
		}
		else {
			l = new Coop(i % 8, i / 8, true);
		}

		if (i % 8 == 3 && i / 8 == 0) {
			l = new Well(i % 8, i / 8);
		}
		else if (i % 8 == 4 && i / 8 == 0)  {
			l = new Truck(i % 8, i / 8);
		}
		else if (i % 8 == 5 && i / 8 == 0) {
			l = new Mixer(i % 8, i / 8);
		}
		halaman[i] = l;
	}

	Player player;

	//-HERE

	while (true) {
		for (int i = 0; i < 64; i++) {
			Renderable::setMap(halaman[i]->getX(), halaman[i]->getY(), halaman[i]->render());
		}

		Renderable::setMap(player.getX(), player.getY(), player.render());

		for (int i = 0; i < listofanimal.getSize(); i++) {
			Renderable::setMap(listofanimal.get(i)->getX(), listofanimal.get(i)->getY(), listofanimal.get(i)->render());
		}
		Renderable::display();
		player.control();
		player.printCan();
		player.printMoney();
		for (int i = 0; i < 3; i++) {
			listofanimal.get(i)->moveAnimal();
		}
	}
	return 0;
}