#ifndef COWMEAT_H
#define COWMEAT_H

#include "Product.h"

class CowMeat : public Product{
private:
	static int n;
	static int price;
public:
	static int GetNProduct();
	static int GetPrice();
	~CowMeat();
};

#endif