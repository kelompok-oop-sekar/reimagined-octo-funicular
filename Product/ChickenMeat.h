// Nama file : ChickenMeat.h

#ifndef CHICKENMEAT_H
#define CHICKENMEAT_H

#include "FarmProduct.h"
//ChickenMeat adalah nama kelas dari objek dagin ayam yang dapat didapat saat permainan
class ChickenMeat : public FarmProduct {
private:
	static string className;
	static int price; //harga dari daging ayam jika dijual
public:
	string getClassName();
	int getPrice(); //mengembalikan harga dari telur ayam
};

#endif
