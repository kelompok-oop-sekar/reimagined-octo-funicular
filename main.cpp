#include <iostream>
#include <cstdlib>
#include "Classes.h"

int main() {
	system("CLS");
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
	
                          
	std::cout << ",---.          o     |   /" << std::endl;
	std::cout << "|--- ,---.,---..,---.|__/ " << std::endl;
	std::cout << "|    |   ||   ||`---.|  \\ " << std::endl;
	std::cout << "`---'`   '`---|``---'`   `" << std::endl;
	std::cout << "          `---'           " << std::endl;

	LinkedList<FarmAnimal*> listofanimal;
	FarmAnimal* a = new Chicken(6,6);
	listofanimal.add(a);
	a = new Goat(1,2);
	listofanimal.add(a);
	a = new Sheep(6,1);
	listofanimal.add(a);
	
	// inisialisasi kondisi awal sampai -HERE
	LinkedList<Cell*> listofcell;

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
		listofcell.add(l);
	}

	Player player;

	//-HERE

	while (!listofanimal.isEmpty()) {
		for (int i = 0; i < 64; i++) {
			Renderable::setMap(listofcell.get(i)->getX(), listofcell.get(i)->getY(), listofcell.get(i)->render());
		}

		Renderable::setMap(player.getX(), player.getY(), player.render());

		for (int i = 0; i < listofanimal.getSize(); i++) {
			Renderable::setMap(listofanimal.get(i)->getX(), listofanimal.get(i)->getY(), listofanimal.get(i)->render());
		}
		system("CLS");
		Renderable::display();
		player.control(&listofanimal,listofcell);
		player.printCan();
		player.printMoney();
		int i = 0;
		while (i < listofanimal.getSize()) {
			if (listofanimal.get(i)->isDie()) {
				listofanimal.remove(i);
			}
			else {
				listofanimal.get(i)->moveAnimal();
				listofanimal.get(i)->eat(listofcell);
				i++;
			}
		}
	}

	for (int i = 0; i < listofanimal.getSize(); i++) {
		Renderable::setMap(listofanimal.get(i)->getX(), listofanimal.get(i)->getY(), listofanimal.get(i)->render());
	}
	Renderable::display();

	std::cout << ".|'''''|      /.\\      '||\\   /||` '||''''| " << std::endl;
	std::cout << "|| .         // \\\\      ||\\\\.//||   ||   .  " << std::endl;
	std::cout << "|| |''||    //...\\\\     ||     ||   ||'''|  " << std::endl;
	std::cout << "||    ||   //     \\\\    ||     ||   ||      " << std::endl;
	std::cout << "`|....|' .//       \\\\. .||     ||. .||....| " << std::endl;
	std::cout << endl;
	std::cout << ".|''''|, \\\\      // '||''''| '||'''|, " << std::endl;
	std::cout << "||    ||  \\\\    //   ||   .   ||   || " << std::endl;
	std::cout << "||    ||   \\\\  //    ||'''|   ||...|' " << std::endl;
	std::cout << "||    ||    \\\\//     ||       || \\\\   " << std::endl;
	std::cout << "`|....|'     \\/     .||....| .||  \\\\. " << std::endl;

	return 0;
}