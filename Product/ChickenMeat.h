#ifndef CHICKENMEAT_H
#define CHICKENMEAT_H

#include "Product.h"

class ChickenMeat : public Product {
private:
	static int n;
	static int price;
public:
	static int GetNProduct();
	static int GetPrice();
	~ChickenMeat();
};

#endif