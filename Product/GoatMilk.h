//Nama File : GoatMilk.h

#ifndef GOATMILK_H
#define GOATMILK_H

#include "FarmProduct.h"
//CowMilk merupakan nama kelas dari objek susu sapi yang bisa didapat pemain saat bermain
class GoatMilk : public FarmProduct {
private:
	static int price; //harga dari CowMilk setiap satuannya 
public:
	static int getPrice(); //mengembalikan harga dari CowMilk setiap satuannya
};

#endif
