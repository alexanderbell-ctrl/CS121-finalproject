#include <string>
#include <iostream>
#include <map>

#include "Recipe.h"
#include "IngredientInfo.h"

Recipe::Recipe() {
	name = "default";
} //end constructor

void Recipe::init(std::string recipeName) {
	name = recipeName;
} //end init

void Recipe::addIngredientInfo(IngredientInfo info, std::string name) {
	ingredientDatabase[name] = info;
} //end addIngredientInfo

void Recipe::addIngredient(std::string name, double mass) {
	ingredientsList[name] = mass;
} //end addIngredient

void Recipe::removeIngredient(std::string name) {
	ingredientsList.erase(name);
} //end removeIngredient

std::string Recipe::getName() {
	return name;
} //end getName

double Recipe::getTotalCalories() {
	double total = 0;

	for(const auto& keyValue : ingredientsList) {
		std::string name = keyValue.first;
		double mass = keyValue.second;

		IngredientInfo info = ingredientDatabase[name];
		total += info.getCalories() * (mass/100.0);
	} //end for
	return total;
} //end getTotalCalories
double Recipe::getTotalProtein() {
	double total = 0;

	for(const auto& keyValue : ingredientsList) {
		std::string name = keyValue.first;
		double mass = keyValue.second;

		IngredientInfo info = ingredientDatabase[name];
		total += info.getProtein() * (mass/100.0);
	} //end for
	return total;
} //end getTotalProtein
double Recipe::getTotalCarbs() {
	double total = 0;

	for(const auto& keyValue : ingredientsList) {
		std::string name = keyValue.first;
		double mass = keyValue.second;

		IngredientInfo info = ingredientDatabase[name];
		total += info.getCarbs() * (mass/100.0);
	} //end for
	return total;
} //end getTotalCarbs
double Recipe::getTotalFats() {
	double total = 0;

	for(const auto& keyValue : ingredientsList) {
		std::string name = keyValue.first;
		double mass = keyValue.second;

		IngredientInfo info = ingredientDatabase[name];
		total += info.getFats() * (mass/100.0);
	} //end for
	return total;
} //end getTotalFats
