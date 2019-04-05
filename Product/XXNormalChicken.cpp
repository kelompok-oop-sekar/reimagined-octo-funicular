#include "XXNormalChicken.h"

const string XXNormalChicken::ingredients[] = { "ChickenMeat", "ChickenEgg" };

int XXNormalChicken::price = 0;

int XXNormalChicken::getPrice() {
	return price;
}

string XXNormalChicken::getIngredients(int i) {
	return ingredients[i];
}