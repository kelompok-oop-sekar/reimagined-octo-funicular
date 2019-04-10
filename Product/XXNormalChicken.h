//Nama File : XXNormalChicken.h

#ifndef XXNORMALCHICKEN_H
#define XXNORMALCHICKEN_H

#include "SideProduct.h"
//XXNormalChicken adalah nama kelas dari makanan yang terinspirasi dari menu ayam penyet XXNormal yang terdiri dari telur dan ayam
class XXNormalChicken : public SideProduct{
private:
	static string className;
	static const string ingredients[2]; // komposisi dari kelas makanan ini
	static int price; //harga dari XXNormalProduct setiap sajiannya
public:
	static string getClassName();
	static int getPrice(); //mengembalikan harga dari XXNormalChicken setiap sajiannya
	static string getIngredients(int i); //Mengembalikan komposisi dari XXNormalChicken
};

#endif
