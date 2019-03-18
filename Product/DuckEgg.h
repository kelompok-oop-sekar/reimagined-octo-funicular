#ifndef DUCKEGG_H
#define DUCKEGG_H

#include "Product.h"

class DuckEgg : public Product{
private:
	static int n;
	static int price;
public:
	static int GetNProduct();
	static int GetPrice();
	~DuckEgg();
};

#endif