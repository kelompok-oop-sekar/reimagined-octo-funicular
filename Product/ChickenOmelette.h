//Nama file : ChickenOmelette.h

#ifndef CHICKENOMELETTE_H
#define CHICKENOMELETTE_H

#include "Product.h"
//ChickenOmelette adalah nama kelas dari objek obhek omelet ayam yang bisa dimiliki oleh player saat besrmain
class ChickenOmelette : public Product{
private:
	static string ingredients[2] = { "ChickenEgg", "ChickenEgg" }; //komposisi dari ChickenOmelette saat pembuatan ChickenOmelette
	static int n; //Jumlah dari omelet ayam yang dimiliki oleh pemain
	static int price; //harga dari omelet ayam satuannya
public:
	static int getNProduct(); //mengembalikan jumlah dari chickenomelette yang dimiliki oleh player saat itu
	static int getPrice(); //mengembalikan harga dari chicken omelette setiap satuannya
	static string* getIngredients(); //mengembalikan komposisi dari chickenomelette
	~ChickenOmelette();
};

#endif
