#ifndef BUFFALOMILK_H
#define BUFFALOMILK_H

#include "Product.h"

class BuffaloMilk : public Product{
private:
	static int n;
	static int price;
public:
	static int getNProduct();
	static int getPrice();
	~BuffaloMilk();
};

#endif