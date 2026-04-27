#ifndef ADDRESS_H_EXISTS
#define ADDRESS_H_EXISTS

#include <iostream>
#include <string>

class IngredientInfo{
	private:
		std::string name;
		double calories;
		double protein;
		double carbs;
		double fats;
	public:
		IngredientInfo();
		void init(std::string name, double calories, double protein, double carbs, double fats);
		double getCalories();
		double getProtein();
		double getCarbs();
		double getFats();
		void printValues();
		static void loadFromFile(std::string file);
};


#endif
