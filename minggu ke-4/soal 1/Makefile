# Target to compile the C++ program
sum : sum.o
	g++ sum.o -o sum

# Target to compile the object file
sum.o : sum.cpp
	g++ -c sum.cpp -o sum.o

# Target to run the program
run : sum
	./sum

# Target to clean up compiled files
clean :
	rm -f sum.o sum