# Target to compile the C++ program
reverse : reverse.o
	g++ reverse.o -o reverse

# Target to compile the object file
reverse.o : reverse.cpp
	g++ -c reverse.cpp -o reverse.o

# Target to run the program
run : reverse
	./reverse

# Target to compile the C++ program
testreverse : testreverse.o
	g++ testreverse.o -o testreverse

# Target to compile the test program
testreverse.o : testreverse.cpp
	g++ -c testreverse.cpp -o testreverse.o

# Target to compile and run the test program
test :	testreverse
		./testreverse

# Target to clean up compiled files
clean :
	rm -f reverse.o reverse
	rm -f testreverse.o testreverse