# CS121-finalproject

Proposal
=
Macro Calculator
## Purpose & Overview
This project is intended to make meal prepping easier by calculating the total amount of calories, protein, carbs, and fats there are within a given meal. The user can then use this data to track their daily intake.
## Classes
The project will be made up of 4 classes: Ingredient, IngredientInfo, Recipe, and RecipeBook. Each instance of IngredientInfo is a single ingredient, such as Chicken or Jelly Beans, with macro information being for 100g. The Ingredient class takes in a user defined weight for the ingredient, creates a ratio with the known values for 100g, and then multiplies all of the macros to determine the amount within the given weight. Recipie combines each user given ingredient and weight, calculating total macros. RecipeBook saves recipes, allowing the user to quickly remake a meal by just inputing the amount of each ingredient they used. 
## Milestones
- Algorithms for Ingredient and IngredientInfo
- Algorithms for Recipe and RecipeBook & Added file save/load capabilities
- Ingredient Done
- IngredientInfo Done
- Recipe Done
- RecipeBook Done
## Files & Formats
- ingredients.csv
Name, Calories, Protein, Carbs, Fats
- recipebook.csv
RecipeName, Ingredient1Name, amount1, Ingredient2Name, amount2
## UML
``` mermaid
classDiagram

class RecipeBook {
    -recipes : vector~Recipe~
    +addRecipe(Recipe)
	+removeRecipe(name : string)
    -createRecipe() Recipe
	-createIngredientInfo(): IngredientInfo
    +findRecipe(name : string) Recipe*
    +listAll() void
    -saveToFile() void
	-loadFromFile() void
	-loadIngredients() void
	-saveIngredient(info: IngredientInfo) void
	+menu() void
}

class Recipe {
    -name : string
    -ingredients : map ~IngredientInfo, double~ (info, grams)
    +addIngredient(IngredientInfo, grams) void
    +removeIngredient(name : string) void
    +getTotalCalories() double
    +getTotalProtein() double
    +getTotalCarbs() double
    +getTotalFats() double
    +printSummary() void
	+getName() string
}

class IngredientInfo {
    -name : string
    -calories : double
    -protein : double
    -carbs : double
    -fats : double
    +getCalories() double
    +getProtein() double
    +getCarbs() double
    +getFats() double
	+printValues() void
	+static loadFromFile
}

RecipeBook --> Recipe
Recipe --> Ingredient
Ingredient --> IngredientInfo
```
