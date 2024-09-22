# Target to compile the C++ program
multiply : multiply.o
	g++ multiply.o -o multiply

# Target to compile the object file
multiply.o : multiply.cpp
	g++ -c multiply.cpp -o multiply.o

# Target to run the program
run : multiply
	./multiply

# Target to clean up compiled files
clean :
	rm -f multiply.o multiply