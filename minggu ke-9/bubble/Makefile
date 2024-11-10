 #Target to compile the C++ program
bubble : bubble.o
	g++ bubble.o -o bubble

# Target to compile the object file
bubble.o : bubble.cpp
	g++ -c bubble.cpp -o bubble.o

# Target to run the program
run : bubble
	./bubble

# Target to compile the C++ program
testbubble : testbubble.o
	g++ testbubble.o -o testbubble

# Target to compile the test program
testbubble.o : testbubble.cpp
	g++ -c testbubble.cpp -o testbubble.o

# Target to compile and run the test program
test :	testbubble
		./testbubble

# Target to clean up compiled files
clean :
	rm -f bubble.o bubble
	rm -f testbubble.o testbubble