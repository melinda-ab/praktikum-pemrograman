# Target to compile the C++ program
sum : sum.o
	g++ sum.o -o sum

# Target to compile the object file
sum.o : sum.cpp
	g++ -c sum.cpp -o sum.o

# Target to run the program
run : sum
	./sum

# Target to compile the C++ program
testsum : testsum.o
	g++ testsum.o -o testsum

# Target to compile the test program
testsum.o : testsum.cpp
	g++ -c testsum.cpp -o testsum.o

# Target to compile and run the test program
test :	testsum
		./testsum

# Target to clean up compiled files
clean :
	rm -f sum.o sum
	rm -f testsum.o testsum