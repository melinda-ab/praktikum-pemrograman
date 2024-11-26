maks : maks.o; g++ maks.o -o maks
maks.o : maks.cpp; g++ -c maks.cpp -o maks.o
testmaks : testmaks.o; g++ testmaks.o -o testmaks
testmaks.o : testmaks.cpp; g++ -c testmaks.cpp -o testmaks.o
run : maks; ./maks
test : testmaks; ./testmaks
clean :; rm -f maks.o maks; rm -f testmaks.o testmaks