 #Target to compile the C++ program
change : change.o
	g++ change.o -o change

# Target to compile the object file
change.o : change.cpp
	g++ -c change.cpp -o change.o

# Target to run the program
run : change
	./change

# Target to compile the C++ program
testchange : testchange.o
	g++ testchange.o -o testchange

# Target to compile the test program
testchange.o : testchange.cpp
	g++ -c testchange.cpp -o testchange.o

# Target to compile and run the test program
test :	testchange
		./testchange

# Target to clean up compiled files
clean :
	rm -f change.o change
	rm -f testchange.o testchange