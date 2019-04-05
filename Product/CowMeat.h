//Nama file : CowMeat.h

#ifndef COWMEAT_H
#define COWMEAT_H

#include "FarmProduct.h"
//Kelas CowMeat adalah kelas dari objek objek daging sapi yang bisa didapat pemain saat bermain
class CowMeat : public FarmProduct{
private:
	static int price; //harga dari penjualan dagin sapi setiap satuannya
public:
	static int getPrice(); //mengembalikan harga dari dagin sapi saat penjualan
};

#endif
