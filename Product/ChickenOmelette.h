#ifndef CHICKENOMELETTE_H
#define CHICKENOMELETTE_H

#include "Product.h"

class ChickenOmelette : public Product{
private:
	static string ingredients[2] = { "ChickenEgg", "ChickenEgg" };
	static int n;
	static int price;
public:
	static int GetNProduct();
	static int GetPrice();
	static string* GetIngredients();
	~ChickenOmelette();
};

#endif