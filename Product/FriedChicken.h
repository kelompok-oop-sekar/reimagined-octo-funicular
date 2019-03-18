#ifndef FRIEDCHICKEN_H
#define FRIEDCHICKEN_H

#include "Product.h"

class FriedChicken : public Product{
private:
	static string ingredients[1] = { "ChickenMeat" };
	static int n;
	static int price;
public:
	static int GetNProduct();
	static int GetPrice();
	static string* GetIngredients();
};

#endif