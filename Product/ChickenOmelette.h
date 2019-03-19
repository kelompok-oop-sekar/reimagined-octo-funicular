//Nama file : ChickenOmelette.h

#ifndef CHICKENOMELETTE_H
#define CHICKENOMELETTE_H

#include "SideProduct.h"
//ChickenOmelette adalah nama kelas dari objek obhek omelet ayam yang bisa dimiliki oleh player saat besrmain
class ChickenOmelette : public SideProduct{
private:
	static string ingredients[2] = { "ChickenEgg", "ChickenEgg" }; //komposisi dari ChickenOmelette saat pembuatan ChickenOmelette
	static int price; //harga dari omelet ayam satuannya
public:
	static int getPrice(); //mengembalikan harga dari chicken omelette setiap satuannya
	static string* getIngredients(); //mengembalikan komposisi dari chickenomelette
	~ChickenOmelette();
};

#endif
