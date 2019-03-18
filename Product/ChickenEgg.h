//Namafile : ChickenEgg.h

#ifndef CHICKENEGG_H
#define CHICKENEGG_H

#include "Product.h"
//ChickenEgg adalah kelas dari telur ayam yang bisa didapat pemain dari ayam
class ChickenEgg : public Product{
private:
	static int n; //jumlah dari chickenegg yang sedang dimiliki oleh pemain
	static int price; //harga jual setiap satu chickenegg
public:
	static int GetNProduct(); //mengembalikan jumlah dari chickenegg yang sedang dimiliki oleh pemain
	static int GetPrice(); //mengembalikan jumlah harga yang didapat pada saat penjualan chickenegg
	~ChickenEgg();
};

#endif
