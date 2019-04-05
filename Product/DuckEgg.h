//Nama File : DuckEgg.h

#ifndef DUCKEGG_H
#define DUCKEGG_H

#include "FarmProduct.h"
//kelas DuckEgg adalah nama kelas dari objek objek telur bebek
class DuckEgg : public FarmProduct{
private:
	static string className;
	static int price; //Harga DuckEgg setiap satuannya
public:
	string callGetClassName() {
		string a = getClassName();
		return a;
	}
	static string getClassName();
	static int getPrice(); //mengembalikan harga dari telur bebek setiap satuannya
};

#endif
