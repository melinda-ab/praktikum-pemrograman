# Target to compile the C++ program
fizzbuzz : fizzbuzz.o
	g++ fizzbuzz.o -o fizzbuzz

# Target to compile the object file
fizzbuzz.o : fizzbuzz.cpp
	g++ -c fizzbuzz.cpp -o fizzbuzz.o

# Target to run the program
run : fizzbuzz
	./fizzbuzz

# Target to compile the C++ program
testfizzbuzz : testfizzbuzz.o
	g++ testfizzbuzz.o -o testfizzbuzz

# Target to compile the test program
testfizzbuzz.o : testfizzbuzz.cpp
	g++ -c testfizzbuzz.cpp -o testfizzbuzz.o

# Target to compile and run the test program
test :	testfizzbuzz
		./testfizzbuzz

# Target to clean up compiled files
clean :
	rm -f fizzbuzz.o fizzbuzz
	rm -f testfizzbuzz.o testfizzbuzz