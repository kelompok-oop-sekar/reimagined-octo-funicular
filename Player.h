#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <map>
#include <string>
using namespace std;

class Player : class Renderable {
private:
    // Wadah air untuk menanam rumput.
    int wateringCan;

    // Menyimpan barang hasil interaksi dengan ternak.
    map<Product, int> inventory;
	
public:
    // Bergerak pada semua "Cell" yang bertipe "Land" selama tidak 
    // ada hewan.
    void move(char direction);

    // Berbicara dengan hewan.
    void talk(FarmAnimal animal);

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
    // NOTE
    // "Product" memiliki harga yang berbeda.
    // "Truck" tidak dapat digunakan untuk jangka waktu tertentu
    // setelah "Player" berinteraksi dengan "Truck".
    void interact(EggProducingFarmAnimal animal);
    void interact(MilkProducingFarmAnimal animal);
    void interact(Well well);
    void interact(Truck truck);

    // Menyembelih hewan "MeatProducingFarmAnimal" untuk mendapatkan
    // "Product" daging.
    void kill(MeatProducingFarmAnimal animal);

    // Menyiram "Land" dengan wadah air yang dimiliki dan 
    // menumbuhkan rumput di petak "Land" tempat "Player" berdiri.
    void grow(Land land);

    // Membuat "SideProduct" dengan "Mixer":
    // 	Mengombinasikan bahan-bahan dari tas (minimal 2 bahan
    // 	[boleh sama]; cara implementasi bebas) 
    void mix(Product product, Product product);

    // Melakukan render.
    char render();
};
#endif
