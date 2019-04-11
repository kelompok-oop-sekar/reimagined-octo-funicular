#include "Player.h"
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <cstring>

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
void Player::talk(LinkedList<FarmAnimal*> List, char direction) {
	/* direction :
		w -> atas
		d -> kanan
		s -> bawah
		a -> kiri
	*/

	// cari animal yang posisinya di dekat player

	// -- Kasus untuk direction
	int deltaX = 0;
	int deltaY = 0;

	switch (direction) {
	case 'w': {
		deltaY = -1;
	}
			break;
	case 'd': {
		deltaX = 1;
	}
			break;
	case 's': {
		deltaY = 1;
	}
			break;
	case 'a': {
		deltaX = -1;
	}
			break;
	default: {
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

	while (i < size && !found) {
		int xAnimalPos = List.get(i)->getX();
		int yAnimalPos = List.get(i)->getY();
		if ((xAnimalPos == xPos + deltaX) && (yAnimalPos == yPos + deltaY)) {
			found = true;
		}
		else {
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

void Player::interact(char dir) {
	int deltaX = 0;
	int deltaY = 0;

	switch (dir) {
	case 'w': {
		deltaY = -1;
	}
			  break;
	case 'd': {
		deltaX = 1;
	}
			  break;
	case 's': {
		deltaY = 1;
	}
			  break;
	case 'a': {
		deltaX = -1;
	}
			  break;
	default: {
		// do nothing
	}
	}
	if (Map[x + deltaX][y + deltaY] == 'T') {
		if (!inventory.isEmpty()) {
			int size = inventory.getSize();
			Product* prod;
			string namaBarang;
			int totalJual = 0;
			for (int i = 0; i < size; i++) {
				prod = inventory.get(i);
				// namaBarang = prod->callGetClassName();
				// namaBarang barang;
				totalJual += prod->getPrice();
				inventory.remove(i);
			}
			money += totalJual;
			cout << "Semua isi inventory berhasil dijual" << endl;
			cout << "Hasil Penjualan : " << totalJual << endl;
		}
	}
	else if (Map[x + deltaX][y + deltaY] == 'W') {
		wateringCan = 10;
	}
	else if (Map[x + deltaX][y + deltaY] == 'M') {

		if (inventory.getSize() > 1) {
			seeInventory();
			cout << "Select ingredients" << endl;
			int a, b;
			cout << "First ingredient : ";
			cin >> a;
			cout << "Second ingredient : ";
			cin >> b;
			mix(inventory.get(a), inventory.get(b));
			if (a > b) {
				inventory.remove(a);
				inventory.remove(b);
			}
			else {
				inventory.remove(b);
				inventory.remove(a);
			}
		}
		else {
			cout << "You don't have enough items in your inventory" << endl;
		}

	}
}

// Menyembelih hewan "MeatProducingFarmAnimal" untuk mendapatkan
// "Product" daging.
void Player::kill(LinkedList<FarmAnimal*>* List, char direction) {
	/* direction :
		w -> atas
		d -> kanan
		s -> bawah
		a -> kiri
	*/

	// cari animal yang posisinya di dekat player

	// -- Kasus untuk direction
	int deltaX = 0;
	int deltaY = 0;

	switch (direction) {
	case 'w': {
		deltaY = -1;
	}
			break;
	case 'd': {
		deltaX = 1;
	}
			break;
	case 's': {
		deltaY = 1;
	}
			break;
	case 'a': {
		deltaX = -1;
	}
			break;
	default: {
		// do nothing
	}
	}
	// -- Player position
	int xPos = this->getX();
	int yPos = this->getY();

	int i = 0;
	// -- ukuran List
	int size = List->getSize();
	// -- boolean found animal terdekat player
	bool found = false;

	while ((i < size) && (!found)) {
		int xAnimalPos = List->get(i)->getX();
		int yAnimalPos = List->get(i)->getY();
		if ((xAnimalPos == xPos + deltaX) && (yAnimalPos == yPos + deltaY)) {
			found = true;
		}
		else {
			i++;
		}
	}

	if (found) {
		cout << "Player gained meat" << endl;
		string animalClassName;
		animalClassName = List->get(i)->getClassName();
		// mendeteksi kelas riil animal
		if (animalClassName.compare("Buffalo") == 0) {
			BuffaloMeat* result = new BuffaloMeat();
		}
		else if (animalClassName.compare("Chicken") == 0) {
			ChickenMeat* result = new ChickenMeat();

			// menambahkan result ke inventory player
			this->inventory.add(result);
		}
		else if (animalClassName.compare("Cow") == 0) {
			CowMeat* result = new CowMeat();

			// menambahkan result ke inventory player
			this->inventory.add(result);
		}
		else if (animalClassName.compare("Duck") == 0) {
			DuckMeat* result = new DuckMeat();

			// menambahkan result ke inventory player
			this->inventory.add(result);
		}
		else if (animalClassName.compare("Goat") == 0) {
			GoatMeat* result = new GoatMeat();

			// menambahkan result ke inventory player
			this->inventory.add(result);
		}
		else if (animalClassName.compare("Sheep") == 0) {
			SheepMeat* result = new SheepMeat();

			// menambahkan result ke inventory player
			this->inventory.add(result);
		}
		// menghapus animal dari List animal
		delete List->get(i);
		List->remove(i);
	}
}

// Menyiram "Land" dengan wadah air yang dimiliki dan 
// menumbuhkan rumput di petak "Land" tempat "Player" berdiri.
void Player::grow(Land& land) {
	money--;
	cout << "Player grows grass" << endl;
	land.setGrass(true);
}

void Player::control(LinkedList<FarmAnimal*>* List, LinkedList<Cell*> List2) {
	char input;
	char dir;
	cin >> input;
	if (input == 'w' || input == 'a' || input == 's' || input == 'd') {
		move(input);
	}
	else if (input == 'b') {
		seeInventory();
	}
	else if (input == 'k') {
		cout << "direction : ";
		cin >> dir;
		kill(List, dir);
	}
	else if (input == 't') {
		cout << "direction : ";
		cin >> dir;
		talk(*List, dir);
	}
	else if (input == 'i') {
		cout << "direction : ";
		cin >> dir;
		interact(dir);
	}
	else if (input == 'g') {
		List2.get(y * 8 + x)->setGrass(true);
		wateringCan--;
	}
	else {
		cout << "Invalid input" << endl;
	}
}

// Membuat "SideProduct" dengan "Mixer":
// 	Mengombinasikan bahan-bahan dari tas (minimal 2 bahan
// 	[boleh sama]; cara implementasi bebas) 
void Player::mix(Product* o1, Product* o2) {
	if ((o1->getClassName().compare("ChickenMeat") && o2->getClassName().compare("ChickenEgg")) || (o2->getClassName().compare("ChickenMeat") && o1->getClassName().compare("ChickenEgg"))) {
		XXNormalChicken* side = new XXNormalChicken();
		inventory.add(side);
	}
	else if (o1->getClassName().compare("CowMilk") && o2->getClassName().compare("CowMilk")) {
		Cheese* side = new Cheese();
		inventory.add(side);
	}
	else if (o1->getClassName().compare("ChickenEgg") && o2->getClassName().compare("ChickenEgg")) {
		ChickenOmelette* side = new ChickenOmelette();
		inventory.add(side);
	}
	else {
		Junk* side = new Junk();
		inventory.add(side);
	}
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
			cout << i << ". " << inventory.get(i)->getClassName() << endl;
		}
	}
}