run_heartCalc: main.o heart_calculator.o 

	g++ main.o heart_calculator.o  -o run_heartCalc

main.o: main.cpp heart_calculator.hpp 
	g++  -c main.cpp

heart_calculator.o: heart_calculator.cpp heart_calculator.hpp
	g++  -c heart_calculator.cpp

clean:

	rm *.o
	rm run_heartCalc
