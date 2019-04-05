//Nama File : CowMilk.h

#ifndef COWMILK_H
#define COWMILK_H

#include "FarmProduct.h"
//CowMilk merupakan nama kelas dari objek susu sapi yang bisa didapat pemain saat bermain
class CowMilk : public FarmProduct{
private:
	static string className;
	static int price; //harga dari CowMilk setiap satuannya 
public:
	string callGetClassName() {
		string a = getClassName();
		return a;
	}
	static string getClassName();
	static int getPrice(); //mengembalikan harga dari CowMilk setiap satuannya
};

#endif
