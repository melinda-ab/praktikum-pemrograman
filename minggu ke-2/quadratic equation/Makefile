# Target to compile the C++ program
quadraticequation : quadraticequation.o
	g++ quadraticequation.o -o quadraticequation

# Target to compile the object file
quadraticequation.o : quadraticequation.cpp
	g++ -c quadraticequation.cpp -o quadraticequation.o

# Target to run the program
run : quadraticequation
	./quadraticequation

# Target to clean up compiled files
clean :
	rm -f quadraticequation.o quadraticequation