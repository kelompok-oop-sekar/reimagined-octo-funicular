#include "Player.h"
#include <iostream>
#include <map>
using namespace std;

// ctor dengan kapasitas wadah air default.
Player::Player() {
    wateringCan = 5;
    money = 5000;
	ChickenEgg a();
	inventory.insert(make_pair(a, 0));
	x = 0;
	y = 0;
}

// ctor dengan kapasitas wadah air.
Player::Player(int capacity, int coin, int x, int y) {
    wateringCan = capacity;
    money = coin;
	ChickenEgg a();
	inventory.insert(make_pair(a, 0));
	this -> x = x;
	this -> y = y;
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
			y--;
			cout << "Player moves up" << endl;
		}
	}
	else if (direction == 'a') {
		if (x == 0) {
			cout << "Player has reached left boundary" << endl;
		}
		else {
			x--;
			cout << "Player moves left" << endl;
		}
	}
	else if (direction == 's') {
		if (y == 9) {
			cout << "Player has reached bottom boundary" << endl;
		}
		else {
			y++;
			cout << "Player moves down" << endl;
		}
	}
	else if (direction == 'd') {
		if (x == 9) {
			cout << "Player has reached right boundary" << endl;
		}
		else {
			x++;
			cout << "Player moves right" << endl;
		}
	}
	else {
		cout << "Invalid input of direction." << endl;
	}
}

// Berbicara dengan hewan.
void Player::talk(FarmAnimal& animal) {
	animal.sounding();
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
void interact(Well& well){
	watercan = 10;
}

void interact(Truck& truck){
	int size = inventory.size();
	while (size > 0){
		
		size--;
	}
}

// Menyembelih hewan "MeatProducingFarmAnimal" untuk mendapatkan
// "Product" daging.
void Player::kill(MeatProducingFarmAnimal& animal) {
	animal.~MeatProducingFarmAnimal();
	cout << "Player gained meat" << endl;
}

// Menyiram "Land" dengan wadah air yang dimiliki dan 
// menumbuhkan rumput di petak "Land" tempat "Player" berdiri.
void Player::grow(Land& land) {
	money--;
	cout << "Player grows grass" << endl;
	land.setGrass();
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

