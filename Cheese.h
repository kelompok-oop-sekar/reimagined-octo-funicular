//Nama File : Cheese.h

#ifndef CHEESE_H
#define CHEESE_H

#include "SideProduct.h"
//Cheese adalah nama kelas dari makanan yang terinspirasi dari menu ayam penyet XXNormal yang terdiri dari telur dan ayam
class Cheese : public SideProduct {
private:
	static string className;
	static const string ingredients[2]; // komposisi dari kelas makanan ini
	static int price; //harga dari XXNormalProduct setiap sajiannya
public:
	string getClassName();
	int getPrice(); //mengembalikan harga dari Cheese setiap sajiannya
	string getIngredients(int i); //Mengembalikan komposisi dari Cheese
};

#endif
