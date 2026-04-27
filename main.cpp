#include <iostream>
#include <string>
#include <vector>

int main() {
	bool keepGoing = true;
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
			std::cout << "Recipe --> printSummary\n";
		} //end if 1
		if (user_menu == 2) {
			std::cout << "RecipeBook --> createRecipe\n";
		} //end if 2
		if (user_menu == 3) {
			std::cout << "RecipeBook --> removeRecipe\n";
		} //end if 3
		if (user_menu == 4) {
			std::cout << "RecipeBook --> createIngredientInfo\n";
		} //end if 4
		if (user_menu == 5) {
			std::cout << "RecipeBook --> listAll\n";
		} //end if 5


	} //end while
} //end main
