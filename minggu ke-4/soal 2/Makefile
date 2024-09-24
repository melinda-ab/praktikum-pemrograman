# Target to compile the C++ program
multiply : multiply.o
	g++ multiply.o -o multiply

# Target to compile the object file
multiply.o : multiply.cpp
	g++ -c multiply.cpp -o multiply.o

# Target to run the program
run : multiply
	./multiply

# Target to compile the C++ program
testmultiply : testmultiply.o
	g++ testmultiply.o -o testmultiply

# Target to compile the test program
testmultiply.o : testmultiply.cpp
	g++ -c testmultiply.cpp -o testmultiply.o

# Target to compile and run the test program
test :	testmultiply
		./testmultiply

# Target to clean up compiled files
clean :
	rm -f multiply.o multiply
	rm -f testmultiply.o testmultiply