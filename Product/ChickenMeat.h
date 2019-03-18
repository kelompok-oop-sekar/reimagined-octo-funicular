#ifndef CHICKENMEAT_H
#define CHICKENMEAT_H

#include "Product.h"

class ChickenMeat : public Product {
private:
	static int n;
	static int price;
public:
	static int getNProduct();
	static int getPrice();
	~ChickenMeat();
};

#endif