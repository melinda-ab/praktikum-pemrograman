 #Target to compile the C++ program
insertion : insertion.o
	g++ insertion.o -o insertion

# Target to compile the object file
insertion.o : insertion.cpp
	g++ -c insertion.cpp -o insertion.o

# Target to run the program
run : insertion
	./insertion

# Target to compile the C++ program
testinsertion : testinsertion.o
	g++ testinsertion.o -o testinsertion

# Target to compile the test program
testinsertion.o : testinsertion.cpp
	g++ -c testinsertion.cpp -o testinsertion.o

# Target to compile and run the test program
test :	testinsertion
		./testinsertion

# Target to clean up compiled files
clean :
	rm -f insertion.o insertion
	rm -f testinsertion.o testinsertion