//Nama file : DuckMeat.h

#ifndef DUCKMEAT_H
#define DUCKMEAT_H

#include "FarmProduct.h"
//Kelas DuckMeat adalah kelas dari objek objek daging sapi yang bisa didapat pemain saat bermain
class DuckMeat : public FarmProduct {
private:
	static string className;
	static int price; //harga dari penjualan dagin sapi setiap satuannya
public:
	string callGetClassName() {
		string a = getClassName();
		return a;
	}
	static string getClassName();
	static int getPrice(); //mengembalikan harga dari dagin sapi saat penjualan
};

#endif
