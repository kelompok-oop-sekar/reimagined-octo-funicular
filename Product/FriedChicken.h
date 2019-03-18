#ifndef FRIEDCHICKEN_H
#define FRIEDCHICKEN_H

#include "Product.h"

class FriedChicken : public Product{
private:
	static string ingredients[1] = { "ChickenMeat" };
	static int n;
	static int price;
public:
	static int getNProduct();
	static int getPrice();
	static string* getIngredients();
};

#endif