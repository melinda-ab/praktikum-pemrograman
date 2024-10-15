# Target to compile the C++ program
swalayan : swalayan.o
	g++ swalayan.o -o swalayan

# Target to compile the object file
swalayan.o : swalayan.cpp
	g++ -c swalayan.cpp -o swalayan.o

# Target to run the program
run : swalayan
	./swalayan

# Target to compile the C++ program
testswalayan : testswalayan.o
	g++ testswalayan.o -o testswalayan

# Target to compile the test program
testswalayan.o : testswalayan.cpp
	g++ -c testswalayan.cpp -o testswalayan.o

# Target to compile and run the test program
test :	testswalayan
		./testswalayan

# Target to clean up compiled files
clean :
	rm -f swalayan.o swalayan
	rm -f testswalayan.o testswalayan