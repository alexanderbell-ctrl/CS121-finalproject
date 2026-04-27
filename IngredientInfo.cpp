#include <iostream>
#include <string>

#include "IngredientInfo.h"

IngredientInfo::IngredientInfo() {
	name = "default";
	calories = 100;
	protein = 100;
	carbs = 100;
	fats = 100;
} //end constructor
 
void IngredientInfo::init(std::string name, double calories, double protein, double carbs, double fats) {
	name = name;
	calories = calories;
	protein = protein;
	carbs = carbs;
	fats = fats;
} //end init

double IngredientInfo::getCalories() {
	return calories;
}; //end getCalories
double IngredientInfo::getProtein() {
	return protein;
}; //end getProtein
double IngredientInfo::getCarbs() {
	return carbs;
}; //end getCarbs
double IngredientInfo::getFats() {
	return fats;
}; //end getFats
