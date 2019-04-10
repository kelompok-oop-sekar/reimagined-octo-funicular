//Nama File : Junk.h

#ifndef JUNK_H
#define JUNK_H

#include "SideProduct.h"
//Junk adalah nama kelas dari makanan yang terinspirasi dari menu ayam penyet XXNormal yang terdiri dari telur dan ayam
class Junk : public SideProduct {
public:
	string getClassName() { return "Junk"; }
	int getPrice() {
		return 0;
	}
	//mengembalikan harga dari Junk setiap sajiannya
	string getIngredients(int i) { return "Failures"; } //Mengembalikan komposisi dari Junk
};

#endif
