#include "XXNormalChicken.h"

string XXNormalChicken::className = "XXNormalChicken";

string XXNormalChicken::getClassName() {
	return className;
}

const string XXNormalChicken::ingredients[] = { "ChickenMeat", "ChickenEgg" };

int XXNormalChicken::price = 0;

int XXNormalChicken::getPrice() {
	return price;
}

string XXNormalChicken::getIngredients(int i) {
	return ingredients[i];
}