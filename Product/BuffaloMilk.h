#ifndef BUFFALOMILK_H
#define BUFFALOMILK_H

#include "Product.h"

class BuffaloMilk : public Product{
private:
	static int n;
	static int price;
public:
	static int GetNProduct();
	static int GetPrice();
	~BuffaloMilk();
};

#endif