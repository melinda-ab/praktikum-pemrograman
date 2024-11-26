luas : luas.o; g++ luas.o -o luas
luas.o : luas.cpp; g++ -c luas.cpp -o luas.o
testluas : testluas.o; g++ testluas.o -o testluas
testluas.o : testluas.cpp; g++ -c testluas.cpp -o testluas.o
run : luas; ./luas
test : testluas; ./testluas
clean :; rm -f luas.o luas; rm -f testluas.o testluas