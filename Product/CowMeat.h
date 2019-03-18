//Nama file : CowMeat.h

#ifndef COWMEAT_H
#define COWMEAT_H

#include "Product.h"
//Kelas CowMeat adalah kelas dari objek objek daging sapi yang bisa didapat pemain saat bermain
class CowMeat : public Product{
private:
	static int n; //jumlah dari daging sapi yang dimiliki oleh pemain
	static int price; //harga dari penjualan dagin sapi setiap satuannya
public:
	static int getNProduct(); //mengembalikan jumlah dari daging sapi yang dimiliki pemain
	static int getPrice(); //mengembalikan harga dari dagin sapi saat penjualan
	~CowMeat();
};

#endif
