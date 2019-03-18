//Namafile = Cheese.h

#ifndef CHEESE_H
#define CHEESE_H

#include "Product.h"
//Kelas Cheese adalah side product yang bisa didapat dari hasil mix antara 2 CowMilk
class Cheese : public Product{
private:
	static string ingredients[2] = { "CowMilk", "CowMilk" }; // Farm product yang dibutuhkan untuk membuat cheese
	static int n; //Jumlah dari Cheese yang dimiliki pemain
	static int price;
public:
	static int getNProduct(); //Mengembalikan jumlah cheese yang dimiliki oleh pemain
	static int getPrice(); //Mengembalikan harga apabila satu cheese terjual
	static string* getIngredients(); //mengembalikan komposisi dari cheese
};

#endif
