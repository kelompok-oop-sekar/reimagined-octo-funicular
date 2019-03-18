//Nama File : XXNormalChicken.h

#ifndef XXNORMALCHICKEN_H
#define XXNORMALCHICKEN_H

#include "Product.h"
//XXNormalChicken adalah nama kelas dari makanan yang terinspirasi dari menu ayam penyet XXNormal yang terdiri dari telur dan ayam
class XXNormalChicken : public Product{
private:
	static string ingredients[2] = { "ChickenMeat", "ChickenEgg" }; // komposisi dari kelas makanan ini
	static int n; // mengembalikan jumlah dari objek kelas XXNormalChicken yang dimiliki pemain
	static int price; //harga dari XXNormalProduct setiap sajiannya
public:
	static int getNProduct(); //mengembalikan jumlah dari XXNormalChicken yang dimiliki pemain
	static int getPrice(); //mengembalikan harga dari XXNormalChicken setiap sajiannya
	static string* getIngredients(); //Mengembalikan komposisi dari XXNormalChicken
};

#endif
