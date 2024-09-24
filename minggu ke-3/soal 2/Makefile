# Target to compile the C++ program
nomor2 : nomor2.o
	g++ nomor2.o -o nomor2

# Target to compile the object file
nomor2.o : nomor2.cpp
	g++ -c nomor2.cpp -o nomor2.o

# Target to run the program
run : nomor2
	./nomor2

# Target to compile the C++ program
testnomor2 : testnomor2.o
	g++ testnomor2.o -o testnomor2

# Target to compile the test program
testnomor2.o : testnomor2.cpp
	g++ -c testnomor2.cpp -o testnomor2.o

# Target to compile and run the test program
test :	testnomor2
		./testnomor2

# Target to clean up compiled files
clean :
	rm -f nomor2.o nomor2
	rm -f testnomor2.o testnomor2