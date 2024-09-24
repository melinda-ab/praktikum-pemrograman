# Target to compile the C++ program
payslip : payslip.o
	g++ payslip.o -o payslip

# Target to compile the object file
payslip.o : payslip.cpp
	g++ -c payslip.cpp -o payslip.o

# Target to run the program
run : payslip
	./payslip

# Target to compile the C++ program
testpayslip : testpayslip.o
	g++ testpayslip.o -o testpayslip

# Target to compile the test program
testpayslip.o : testpayslip.cpp
	g++ -c testpayslip.cpp -o testpayslip.o

# Target to compile and run the test program
test :	testpayslip
		./testpayslip

# Target to clean up compiled files
clean :
	rm -f payslip.o payslip
	rm -f testpayslip.o testpayslip