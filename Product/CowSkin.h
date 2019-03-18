#ifndef COWSKIN_H
#define COWSKIN_H

#include "Product.h"

class CowSkin : public Product{
private:
	static int n;
	static int price;
public:
	static int GetNProduct();
	static int GetPrice();
	~CowSkin;
};

#endif