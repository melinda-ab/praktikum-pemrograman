 #Target to compile the C++ program
binary : binary.o
	g++ binary.o -o binary

# Target to compile the object file
binary.o : binary.cpp
	g++ -c binary.cpp -o binary.o

# Target to run the program
run : binary
	./binary

# Target to compile the C++ program
testbinary : testbinary.o
	g++ testbinary.o -o testbinary

# Target to compile the test program
testbinary.o : testbinary.cpp
	g++ -c testbinary.cpp -o testbinary.o

# Target to compile and run the test program
test :	testbinary
		./testbinary

# Target to clean up compiled files
clean :
	rm -f binary.o binary
	rm -f testbinary.o testbinary