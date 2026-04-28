#include <iostream>
#include <string>
#include <vector>

#include "Recipe.h"
#include "IngredientInfo.h"

int main() {
	bool keepGoing = true;

	std::map<std::string, Recipe> recipeBook;
	std::map<std::string, IngredientInfo> ingredientBook;

	while (keepGoing) {
		int user_menu;
		std::cout<<
			"Please select an option:\n"
			"0) exit\n"
			"1) Print a recipe \n"
			"2) Add a recipe \n"
			"3) Remove a recipe \n"
			"4) Add an ingredient \n"
			"5) List all recipes\n";
		std::cin >> user_menu;
		if (user_menu == 0) {
			keepGoing = false;
		} //end if 0
		if (user_menu == 1 ) {
			std::string name;
			std::cout << "Enter recipe name: ";
			std::cin >> name;
			if (recipeBook.count(name)) {
				Recipe& r = recipeBook[name];

				std::cout << "Recipe: " << r.getName() << "\n";
				std::cout << "Calories: " << r.getTotalCalories() << "\n";
				std::cout << "Protein: " << r.getTotalProtein() << "\n";
				std::cout << "Carbs: " << r.getTotalCarbs() << "\n";
				std::cout << "Fats: " << r.getTotalFats() << "\n";
			}
			else {
				std::cout << "Recipe not found.\n";
			}
		} //end if 1
		if (user_menu == 2) {
			std::string name;
			std::cout << "Enter recipe name: ";
			std::cin >> name;

			Recipe x;
			x.init(name);
			recipeBook[name] = x;
			std::cout << "Recipe created.\n";
		} //end if 2
		if (user_menu == 3) {
			std::string name;
			std::cout << "Enter recipe name: ";
			std::cin >> name;

			recipeBook.erase(name);
			std::cout << "Recipe removed.\n";
		} //end if 3
		if (user_menu == 4) {
			std::string recipeName;
			std::cout << "Recipe name: ";
			std::cin >> recipeName;

			if (!recipeBook.count(recipeName)) {
				std::cout << "Recipe not found.\n";
				continue;
			}

			std::string ingredientName;
			double calories, protein, carbs, fats, mass;

			std::cout << "Ingredient name: ";
			std::cin >> ingredientName;
			std::cout << "Calories per 100g: ";
			std::cin >> calories;
			std::cout << "Protein per 100g: ";
			std::cin >> protein;
			std::cout << "Carbs per 100g: ";
			std::cin >> carbs;
			std::cout << "Fats per 100g: ";
			std::cin >> fats;
			std::cout << "Mass used (g): ";
			std::cin >> mass;
			IngredientInfo info;
			info.init(ingredientName, calories, protein, carbs, fats);

			ingredientBook[ingredientName] = info;
			Recipe& r = recipeBook[recipeName];

			r.addIngredientInfo(info, ingredientName);
			r.addIngredient(ingredientName, mass);

			std::cout << "Ingredient added.\n";
		} //end if 4
		if (user_menu == 5) {
			std::cout << "Recipes:\n";
			for (auto& keyValue : recipeBook) {
				std::cout << "- " << keyValue.first << "\n";
			} //end for
		} //end if 5

	} //end while
}; //end main






	
