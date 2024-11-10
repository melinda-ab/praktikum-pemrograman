 #Target to compile the C++ program
selection : selection.o
	g++ selection.o -o selection

# Target to compile the object file
selection.o : selection.cpp
	g++ -c selection.cpp -o selection.o

# Target to run the program
run : selection
	./selection

# Target to compile the C++ program
testselection : testselection.o
	g++ testselection.o -o testselection

# Target to compile the test program
testselection.o : testselection.cpp
	g++ -c testselection.cpp -o testselection.o

# Target to compile and run the test program
test :	testselection
		./testselection

# Target to clean up compiled files
clean :
	rm -f selection.o selection
	rm -f testselection.o testselection