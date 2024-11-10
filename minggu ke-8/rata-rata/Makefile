# Target to compile the C++ program
rata : rata.o
	g++ rata.o -o rata

# Target to compile the object file
rata.o : rata.cpp
	g++ -c rata.cpp -o rata

# Target to run the program
run : rata
	./rata

# Target to compile the C++ program
testrata : testrata.o
	g++ testrata.o -o testrata

# Target to compile the test program
testrata.o : testrata.cpp
	g++ -c testrata.cpp -o testrata.o

# Target to compile and run the test program
test :	testrata
		./testrata

# Target to clean up compiled files
clean :
	rm -f rata.o rata
	rm -f testrata.o testrata