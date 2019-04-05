#include <iostream>
#include <string>
#include "XXNormalChicken.h"

int main() {
	XXNormalChicken meal;
	string komposisi[2];
	for (int i = 0; i < 2; i++) {
		komposisi[i] = meal.getIngredients(i);
	}
	for (int i = 0; i < 2; i++) {
		cout << komposisi[i] << endl;
	}
}