# Target to compile the C++ program
quadraticequation : quadraticequation.o
	g++ quadraticequation.o -o quadraticequation

# Target to compile the object file
quadraticequation.o : quadraticequation.cpp
	g++ -c quadraticequation.cpp -o quadraticequation.o

# Target to run the program
run : quadraticequation
	./quadraticequation

# Target to compile the C++ program
testquadraticequation : testquadraticequation.o
	g++ testquadraticequation.o -o testquadraticequation

# Target to compile the test program
testquadraticequation.o : testquadraticequation.cpp
	g++ -c testquadraticequation.cpp -o testquadraticequation.o

# Target to compile and run the test program
test :	testquadraticequation
		./testquadraticequation

# Target to clean up compiled files
clean :
	rm -f quadraticequation.o quadraticequation
	rm -f testquadraticequation.o testquadraticequation