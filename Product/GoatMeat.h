#ifndef GOATMEAT_H
#define GOATMEAT_H

#include "FarmProduct.h"
//Kelas GoatMeat adalah kelas dari objek objek daging sapi yang bisa didapat pemain saat bermain
class GoatMeat : public FarmProduct {
private:
	static string className;
	static int price; //harga dari penjualan dagin sapi setiap satuannya
public:
	static string getClassName();
	static int getPrice(); //mengembalikan harga dari dagin sapi saat penjualan
};

#endif
