#ifndef RECIPE_H_EXISTS
#define RECIPE_H_EXISTS

#include <string>
#include <iostream>
#include <map>

#include "IngredientInfo.h"

class Recipe{
	private:
		std::string name;
		std::map<std::string, double> ingredientsList;
		std::map<std::string, IngredientInfo> ingredientDatabase;
	public:
		Recipe();
		void init(std::string name);
		void addIngredientInfo(IngredientInfo info, std::string name);
		void addIngredient(std::string name, double mass);
		void removeIngredient(std::string name);
		double getTotalCalories();
		double getTotalProtein();
		double getTotalCarbs();
		double getTotalFats();
		void printSummary();
		std::string getName();	
};

#endif
