#include "ChickenOmelette.h"

string ChickenOmelette::className = "ChickenOmelette";

string ChickenOmelette::getClassName() {
	return className;
}

const string ChickenOmelette::ingredients[] = { "Milk", "Milk" };

int ChickenOmelette::price = 0;

int ChickenOmelette::getPrice() {
	return price;
}

string ChickenOmelette::getIngredients(int i) {
	return ingredients[i];
}