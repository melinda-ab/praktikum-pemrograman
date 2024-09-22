# Target to compile the C++ program
nomor2 : nomor2.o
	g++ nomor2.o -o nomor2

# Target to compile the object file
nomor2.o : nomor2.cpp
	g++ -c nomor2.cpp -o nomor2.o

# Target to run the program
run : nomor2
	./nomor2

# Target to clean up compiled files
clean :
	rm -f nomor2.o nomor2