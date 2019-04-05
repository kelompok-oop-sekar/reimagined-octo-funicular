//Nama File : CowMilk.h

#ifndef COWMILK_H
#define COWMILK_H

#include "FarmProduct.h"
//CowMilk merupakan nama kelas dari objek susu sapi yang bisa didapat pemain saat bermain
class CowMilk : public FarmProduct{
private:
	static int price; //harga dari CowMilk setiap satuannya 
public:
	static int getPrice(); //mengembalikan harga dari CowMilk setiap satuannya
};

#endif
