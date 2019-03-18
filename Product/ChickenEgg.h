#ifndef CHICKENEGG_H
#define CHICKENEGG_H

#include "Product.h"

class ChickenEgg : public Product{
private:
	static int n;
	static int price;
public:
	static int GetNProduct();
	static int GetPrice();
	~ChickenEgg();
};

#endif