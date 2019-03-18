#ifndef XXNORMALCHICKEN_H
#define XXNORMALCHICKEN_H

#include "Product.h"

class XXNormalChicken : public Product{
private:
	static string ingredients[1] = { "ChickenMeat", "ChickenEgg" };
	static int n;
	static int price;
public:
	static int getNProduct();
	static int getPrice();
	static string* getIngredients();
};

#endif