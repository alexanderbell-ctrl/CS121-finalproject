macro: main.o IngredientInfo.o Recipe.o
	g++ main.o IngredientInfo.o Recipe.o -o macro

main.o: main.cpp
	g++ -c main.cpp

IngredientInfo.o: IngredientInfo.cpp
	g++ -c IngredientInfo.cpp

Recipe.o: Recipe.cpp
	g++ -c Recipe.cpp

run: macro
	./macro

clean:
	rm macro
	rm *.o
