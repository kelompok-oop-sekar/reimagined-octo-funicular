#ifndef BUFFALOMEAT_H
#define BUFFALOMEAT_H

#include "Product.h"

class BuffaloMeat : public Product{
private:
	static int n;
	static int price;
public:
	static int GetNProduct();
	static int GetPrice();
	~BuffaloMeat();
};

#endif