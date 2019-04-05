#include <iostream>
#include <map>
using namespace std;
// Player merupakan kelas yang mendefinisikan 'command' yang bisa diperintahkan
// saat menjalankan program.
#include "Classes.h"
class Player : public Renderable {
private:
	int x, y; 
    int wateringCan;	// Wadah air untuk menanam rumput.
    
    // Uang.
    int money;

    // Menyimpan barang hasil interaksi dengan ternak.
    map<Product, int> inventory;
	
public:
    // ctor dengan kapasitas wadah air default.
    Player();

    // ctor dengan kapasitas wadah air.
    Player(int capacity, int coin);

    // Bergerak pada semua "Cell" yang bertipe "Land" selama tidak 
    // ada hewan.
    // 'w' = up
    // 'a' = left
    // 's' = down
    // 'd' = right
    void move(char direction);

    // Berbicara dengan hewan.
    void talk(FarmAnimal& animal) ;

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
    //void interact(Well& well);
    //void interact(Truck& truck);

    // Menyembelih hewan "MeatProducingFarmAnimal" untuk mendapatkan
    // "Product" daging.
    void kill(MeatProducingFarmAnimal& animal);

    // Menyiram "Land" dengan wadah air yang dimiliki dan 
    // menumbuhkan rumput di petak "Land" tempat "Player" berdiri.
    void grow(Land& land) ;

    // Membuat "SideProduct" dengan "Mixer":
    // 	Mengombinasikan bahan-bahan dari tas (minimal 2 bahan
    // 	[boleh sama]; cara implementasi bebas) 
    void mix(FarmProduct& o1, FarmProduct& o2) ;

    // Melakukan render.
    char render() ;
};

