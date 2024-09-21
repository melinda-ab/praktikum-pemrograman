# Target to compile the C++ program
nomor1 : nomor1.o
  g ++ helloworld . o -o helloworld

# Target to compile the object file
nomor1.o : nomor1.cpp
  g ++ -c helloworld . cpp -o helloworld . o

# Target to run the program
run : nomor1
    ./nomor1
    
# Target to clean up compiled files
clean :
  rm -f nomor1.o nomor1
