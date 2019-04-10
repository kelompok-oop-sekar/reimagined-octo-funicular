//Nama File : ChickenOmelette.h

#ifndef CHICKENOMELETTE_H
#define CHICKENOMELETTE_H

#include "SideProduct.h"
//ChickenOmelette adalah nama kelas dari makanan yang terinspirasi dari menu ayam penyet XXNormal yang terdiri dari telur dan ayam
class ChickenOmelette : public SideProduct {
private:
	static string className;
	static const string ingredients[2]; // komposisi dari kelas makanan ini
	static int price; //harga dari XXNormalProduct setiap sajiannya
public:
	string getClassName();
	int getPrice(); //mengembalikan harga dari ChickenOmelette setiap sajiannya
	string getIngredients(int i); //Mengembalikan komposisi dari ChickenOmelette
};

#endif
