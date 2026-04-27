macro: main.o
	g++ main.o -o macro

main.o: main.cpp
	g++ -c main.cpp

run: macro
	./macro

clean:
	rm macro
	rm *.o
