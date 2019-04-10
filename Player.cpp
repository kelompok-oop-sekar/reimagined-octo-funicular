#include "Player.h"
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

// ctor dengan kapasitas wadah air default.
Player::Player() {
    wateringCan = 5;
    money = 5000;
	Product* a = new ChickenEgg();
	inventory.add(a);
	x = 4;
	y = 4;
}

// ctor dengan kapasitas wadah air.
Player::Player(int capacity, int coin) {
    wateringCan = capacity;
    money = coin;
	Product* a = new ChickenEgg();
	inventory.add(a);
	x = 4;
	y = 4;
}

// Bergerak pada semua "Cell" yang bertipe "Land" selama tidak 
// ada hewan.
// 'w' = up
// 'a' = left
// 's' = down
// 'd' = right
void Player::move(char direction) {
	if (direction == 'w') {
		if (y == 0) {
			cout << "Player has reached top boundary" << endl;
		}
		else {
			if (!isObjectExist(x, y - 1)) {
				y--;
				cout << "Player moves up" << endl;
			}
		}
	}
	else if (direction == 'a') {
		if (x == 0) {
			cout << "Player has reached left boundary" << endl;
		}
		else {
			if (!isObjectExist(x - 1, y)) {
				x--;
				cout << "Player moves left" << endl;
			}
		}
	}
	else if (direction == 's') {
		if (y == 7) {
			cout << "Player has reached bottom boundary" << endl;
		}
		else {
			if (!isObjectExist(x, y + 1)) {
				y++;
				cout << "Player moves down" << endl;
			}
		}
	}
	else if (direction == 'd') {
		if (x == 7) {
			cout << "Player has reached right boundary" << endl;
		}
		else {
			if (!isObjectExist(x + 1, y)) {
				x++;
				cout << "Player moves right" << endl;
			}
		}
	}
	else {
		cout << "Invalid input of direction." << endl;
	}
}

// Berbicara dengan hewan.
void Player::talk(LinkedList<FarmAnimal*> List, int direction) {
	/* direction :
		1 -> atas
		2 -> kanan
		3 -> bawah
		4 -> kiri
	*/

	// cari animal yang posisinya di dekat player

	// -- Kasus untuk direction
	int deltaX = 0;
	int deltaY = 0;

	switch (direction) {
		case 1 : {
			deltaY = -1;
		}
		break;
		case 2 : {
			deltaX = 1;
		}
		break;
		case 3 : {
			deltaY = 1;
		}
		break;
		case 4 : {
			deltaX = -1;
		}
		break;
		default : {
			// do nothing
		}
	}

	// -- Player position
	int xPos = this->getX();
	int yPos = this->getY();

	int i = 0;
	// -- ukuran List
	int size = List.getSize();
	// -- boolean found animal terdekat player
	bool found = false;

	while (i<size && !found) {
		int xAnimalPos = List.get(i)->getX();
		int yAnimalPos = List.get(i)->getY();
		if ((xAnimalPos == xPos+deltaX) && (yAnimalPos == yPos+deltaY)) {
			found = true;
		} else {
			i++;
		}
	}

	if (found) {
		List.get(i)->sounding();
	}
}

// Interaksi Player:
// 1. "FarmAnimal":
// 	a. "EggProducingFarmAnimal" - mendapat telur.
// 	b. "MilkProducingFarmAnimal" - mendapat susu.
// 2. "Facility":
// 	a. "Well": mengisi air.
// 	b. "Truck": 
// 		1) mengosongkan tas.
// 		2) <bold>menjual seluruh</bold> "Product" pada
// 		inventory.
// 		3) mendapatkan uang.
// 	c. "Mixer": menggunakan "Mixer" untuk melakukan "mix" pada
// 		"FarmProduct".
// NOTE
// "Product" memiliki harga yang berbeda.
// "Truck" tidak dapat digunakan untuk jangka waktu tertentu
// setelah "Player" berinteraksi dengan "Truck".

//void interact(EggProducingFarmAnimal& animal) {

//void interact(MilkProducingFarmAnimal& animal);
void Player::interact(Well& well){
	wateringCan = 10;
}

void Player::interact(Truck& truck){
}

// Menyembelih hewan "MeatProducingFarmAnimal" untuk mendapatkan
// "Product" daging.
void Player::kill(LinkedList<FarmAnimal*> List, int direction) {
	/* direction :
		1 -> atas
		2 -> kanan
		3 -> bawah
		4 -> kiri
	*/

	// cari animal yang posisinya di dekat player

	// -- Kasus untuk direction
	int deltaX = 0;
	int deltaY = 0;

	switch (direction) {
		case 1 : {
			deltaY = -1;
		}
		break;
		case 2 : {
			deltaX = 1;
		}
		break;
		case 3 : {
			deltaY = 1;
		}
		break;
		case 4 : {
			deltaX = -1;
		}
		break;
		default : {
			// do nothing
		}
	}
	// -- Player position
	int xPos = this->getX();
	int yPos = this->getY();

	int i = 0;
	// -- ukuran List
	int size = List.getSize();
	// -- boolean found animal terdekat player
	bool found = false;

	while ((i<size) && (!found)) {
		int xAnimalPos = List.get(i)->getX();
		int yAnimalPos = List.get(i)->getY();
		if ((xAnimalPos == xPos+deltaX) && (yAnimalPos == yPos+deltaY)) {
			found = true;
		} else {
			i++;
		}
	}
	
	if (found) {
		cout << "Player gained meat" << endl;
		string animalClassName;
		animalClassName = List.get(i)->callGetClassName();
		// mendeteksi kelas riil animal
		if (strcmp(animalClassName, "Buffalo") == 0) {
			BuffaloMeat* result = new BuffaloMeat();
		} else if (strcmp(animalClassName, "Chicken") == 0) {
			ChickenMeat* result = new ChickenMeat();
		} else if (strcmp(animalClassName, "Cow") == 0) {
			CowMeat* result = new CowMeat();
		} else if (strcmp(animalClassName, "Duck") == 0) {
			// DuckMeat* result = new DuckMeat();
		} else if (strcmp(animalClassName, "Goat") == 0) {
			GoatMeat* result = new GoatMeat();
		} else if (strcmp(animalClassName, "Sheep") == 0) {
			SheepMeat* result = new SheepMeat();
		}
		// menambahkan result ke inventory player
		this->inventory.add(result);
		// menghapus animal dari List animal
		delete List.get(i);
		List.remove(i);
	}
}

// Menyiram "Land" dengan wadah air yang dimiliki dan 
// menumbuhkan rumput di petak "Land" tempat "Player" berdiri.
void Player::grow(Land& land) {
	money--;
	cout << "Player grows grass" << endl;
	land.setGrass();
}

void Player::control() {
	char input;
	cin >> input;
	if (input == 'w' || input == 'a' || input == 's' || input == 'd') {
		move(input);
	}
	else if (input == 'i') {
		seeInventory();
	}
	else {
		cout << "Invalid input" << endl;
	}
}

// Membuat "SideProduct" dengan "Mixer":
// 	Mengombinasikan bahan-bahan dari tas (minimal 2 bahan
// 	[boleh sama]; cara implementasi bebas) 
void Player::mix(FarmProduct& o1, FarmProduct& o2) {

}

// Melakukan render.
char Player::render() {
    return 'P';
}

int Player::getX() {
	return x;
}

int Player::getY() {
	return y;
}

void Player::printCan() {
	cout << "Watering Can : " << wateringCan << endl;
}

void Player::printMoney() {
	cout << "Money : " << money << endl;
}

void Player::seeInventory() {
	if (inventory.isEmpty()) {
		cout << "No items in inventory" << endl;
	}
	else {
		for (int i = 0; i < inventory.getSize(); i++) {
			cout << inventory.get(i)->callGetClassName() << endl;
		}
	}
}