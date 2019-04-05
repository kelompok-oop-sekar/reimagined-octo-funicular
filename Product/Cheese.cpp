#include "Cheese.h"

string Cheese::className = "Cheese";

string Cheese::getClassName() {
	return className;
}


const string Cheese::ingredients[2] = { "Milk", "Milk" };

int Cheese::price = 0;

int Cheese::getPrice() {
	return price;
}

string Cheese::getIngredients(int i) {
	return ingredients[i];
}