// Nama file : ChickenMeat.h

#ifndef CHICKENMEAT_H
#define CHICKENMEAT_H

#include "Product.h"
//ChickenMeat adalah nama kelas dari objek dagin ayam yang dapat didapat saat permainan
class ChickenMeat : public Product {
private:
	static int n; //jumlah dari daging ayam yang dimiliki pemain
	static int price; //harga dari daging ayam jika dijual
public:
	static int getNProduct(); //mengembalikan jumlah telur ayam yang sedang dimiliki oleh pemain
	static int getPrice(); //mengembalikan harga dari telur ayam
	~ChickenMeat();
};

#endif
