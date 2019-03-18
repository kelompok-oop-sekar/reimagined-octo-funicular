#ifndef CHICKENOMELETTE_H
#define CHICKENOMELETTE_H

#include "Product.h"

class ChickenOmelette : public Product{
private:
	static string ingredients[2] = { "ChickenEgg", "ChickenEgg" };
	static int n;
	static int price;
public:
	static int getNProduct();
	static int getPrice();
	static string* getIngredients();
	~ChickenOmelette();
};

#endif