//Nama file : SheepMilk.h

#ifndef SHEEPMILK_H
#define SHEEPMILK_H

#include "FarmProduct.h"
//SheepMilk adalah nama kelas dari objek objek susu domba yang bisa dimilki pemain saat permainan
class SheepMilk : public FarmProduct{
private:
	static string className;
	static int price;//Harga dari sheepmilk setiap satuannya
public :
	string callGetClassName() {
		string a = getClassName();
		return a;
	}
	static string getClassName();
	static int getPrice();//Mengembalikan harga dari sheepmilk setiap satuannya
};

#endif
