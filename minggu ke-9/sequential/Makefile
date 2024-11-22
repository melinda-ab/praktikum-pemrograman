 #Target to compile the C++ program
sequential : sequential.o
	g++ sequential.o -o sequential

# Target to compile the object file
sequential.o : sequential.cpp
	g++ -c sequential.cpp -o sequential.o

# Target to run the program
run : sequential
	./sequential

# Target to compile the C++ program
testsequential : testsequential.o
	g++ testsequential.o -o testsequential

# Target to compile the test program
testsequential.o : testsequential.cpp
	g++ -c testsequential.cpp -o testsequential.o

# Target to compile and run the test program
test :	testsequential
		./testsequential

# Target to clean up compiled files
clean :
	rm -f sequential.o sequential
	rm -f testsequential.o testsequential