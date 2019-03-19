//Namafile : ChickenEgg.h

#ifndef CHICKENEGG_H
#define CHICKENEGG_H

#include "FarmProduct.h"
//ChickenEgg adalah kelas dari telur ayam yang bisa didapat pemain dari ayam
class ChickenEgg : public FarmProduct{
private:
	static int price; //harga jual setiap satu chickenegg
public:
	static int GetPrice(); //mengembalikan jumlah harga yang didapat pada saat penjualan chickenegg
	~ChickenEgg();
};

#endif
