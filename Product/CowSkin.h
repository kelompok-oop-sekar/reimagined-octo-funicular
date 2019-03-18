#ifndef COWSKIN_H
#define COWSKIN_H

#include "Product.h"

class CowSkin : public Product{
private:
	static int n;
	static int price;
public:
	static int getNProduct();
	static int getPrice();
	~CowSkin;
};

#endif