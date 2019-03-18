//Nama File : DuckEgg.h

#ifndef DUCKEGG_H
#define DUCKEGG_H

#include "Product.h"
//kelas DuckEgg adalah nama kelas dari objek objek telur bebek
class DuckEgg : public Product{
private:
	static int n; //Jumlah dari DuckEgg yang dimiliki pemain saat ini
	static int price; //Harga DuckEgg setiap satuannya
public:
	static int getNProduct(); //Mengembalikan jumlah dari telur bebek yang dimiliki oleh pemain
	static int getPrice(); //mengembalikan harga dari telur bebek setiap satuannya
	~DuckEgg();
};

#endif
