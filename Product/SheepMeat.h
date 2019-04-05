#ifndef SHEEPMEAT_H
#define SHEEPMEAT_H

#include "FarmProduct.h"
//Kelas SheepMeat adalah kelas dari objek objek daging sapi yang bisa didapat pemain saat bermain
class SheepMeat : public FarmProduct {
private:
	static int price; //harga dari penjualan dagin sapi setiap satuannya
public:
	static int getPrice(); //mengembalikan harga dari dagin sapi saat penjualan
};

#endif
