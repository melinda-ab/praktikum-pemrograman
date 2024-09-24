# Target to compile the C++ program
nomor1 : nomor1.o
	g++ nomor1.o -o nomor1

# Target to compile the object file
nomor1.o : nomor1.cpp
	g++ -c nomor1.cpp -o nomor1.o

# Target to run the program
run : nomor1
	./nomor1

# Target to compile the C++ program
testnomor1 : testnomor1.o
	g++ testnomor1.o -o testnomor1

# Target to compile the test program
testnomor1.o : testnomor1.cpp
	g++ -c testnomor1.cpp -o testnomor1.o

# Target to compile and run the test program
test :	testnomor1
		./testnomor1

# Target to clean up compiled files
clean :
	rm -f nomor1.o nomor1
	rm -f testnomor1.o testnomor1