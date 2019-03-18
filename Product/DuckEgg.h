#ifndef DUCKEGG_H
#define DUCKEGG_H

#include "Product.h"

class DuckEgg : public Product{
private:
	static int n;
	static int price;
public:
	static int getNProduct();
	static int getPrice();
	~DuckEgg();
};

#endif