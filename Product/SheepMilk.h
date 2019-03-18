//Nama file : SheepMilk.h

#ifndef SHEEPMILK_H
#define SHEEPMILK_H

#include "Product.h"
//SheepMilk adalah nama kelas dari objek objek susu domba yang bisa dimilki pemain saat permainan
class SheepMilk : public Product{
private:
	static int n;//Jumlah dari sheepmilk yang dimiliki pemain saat permainan
	static int price;//Harga dari sheepmilk setiap satuannya
public :
	static int getNProduct();//Mengembalika jumlah dari sheepmilk yang dibutuhkan
	static int getPrice();//Mengembalikan harga dari sheepmilk setiap satuannya
	¬SheepMilk;
};

#endif
