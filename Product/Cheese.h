//Namafile = Cheese.h

#ifndef CHEESE_H
#define CHEESE_H

#include "SideProduct.h"
//Kelas Cheese adalah side product yang bisa didapat dari hasil mix antara 2 CowMilk
class Cheese : public SideProduct{
private:
	static string ingredients[2] = { "CowMilk", "CowMilk" }; // Farm product yang dibutuhkan untuk membuat cheese
	static int price;
public:
	static int getPrice(); //Mengembalikan harga apabila satu cheese terjual
	static string* getIngredients(); //mengembalikan komposisi dari cheese
};

#endif
