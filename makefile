macro: main.o IngredientInfo.o
	g++ main.o IngredientInfo.o -o macro

main.o: main.cpp
	g++ -c main.cpp

IngredientInfo.o: IngredientInfo.cpp
	g++ -c IngredientInfo.cpp

run: macro
	./macro

clean:
	rm macro
	rm *.o
