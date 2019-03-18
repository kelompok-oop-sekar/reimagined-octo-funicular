#ifndef COWMILK_H
#define COWMILK_H

#include "Product.h"

class CowMilk : public Product{
private:
	static int n;
	static int price;
public:
	static int GetNProduct();
	static int GetPrice();
	~CowMilk();
};

#endif