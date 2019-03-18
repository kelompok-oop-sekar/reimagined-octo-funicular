//Nama File : CowMilk.h

#ifndef COWMILK_H
#define COWMILK_H

#include "Product.h"
//CowMilk merupakan nama kelas dari objek susu sapi yang bisa didapat pemain saat bermain
class CowMilk : public Product{
private:
	static int n; //jumlah dari CowMilk yang dimiliki oleh pemain
	static int price; //harga dari CowMilk setiap satuannya 
public:
	static int GetNProduct(); //mengembalikan jumlah dari CowMilk yang dimiliki pemain
	static int GetPrice(); //mengembalikan harga dari CowMilk setiap satuannya
	~CowMilk();
};

#endif
