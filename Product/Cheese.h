#ifndef CHEESE_H
#define CHEESE_H

#include "Product.h"

class Cheese : public Product{
private:
	static string ingredients[2] = { "CowMilk", "CowMilk" };
	static int n;
public:
	static int GetNProduct();
	static int GetPrice();
	static string* GetIngredients();
};

#endif