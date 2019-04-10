//Namafile : ChickenEgg.h

#ifndef CHICKENEGG_H
#define CHICKENEGG_H

#include "FarmProduct.h"
//ChickenEgg adalah kelas dari telur ayam yang bisa didapat pemain dari ayam
class ChickenEgg : public FarmProduct{
private:
	static string className;
	static int price; //harga jual setiap satu chickenegg
public:

	string getClassName();
	int getPrice(); //mengembalikan jumlah harga yang didapat pada saat penjualan chickenegg
};

#endif
