# Target to compile the C++ program
fibonacci : fibonacci.o
	g++ fibonacci.o -o fibonacci

# Target to compile the object file
fibonacci.o : fibonacci.cpp
	g++ -c fibonacci.cpp -o fibonacci.o

# Target to run the program
run : fibonacci
	./fibonacci

# Target to compile the C++ program
testfibonacci : testfibonacci.o
	g++ testfibonacci.o -o testfibonacci

# Target to compile the test program
testfibonacci.o : testfibonacci.cpp
	g++ -c testfibonacci.cpp -o testfibonacci.o

# Target to compile and run the test program
test :	testfibonacci
		./testfibonacci

# Target to clean up compiled files
clean :
	rm -f fibonacci.o fibonacci
	rm -f testfibonacci.o testfibonacci