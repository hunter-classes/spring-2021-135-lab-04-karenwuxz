main: main.o box.o checkerBoard.o lower.o upper.o trapezoid.o
	g++ -o main main.o box.o checkerBoard.o lower.o upper.o trapezoid.o

main.o: main.cpp box.h checkerBoard.h lower.h upper.h
	g++ -c main.cpp

box.o: box.cpp
	g++ -c box.cpp

checkerBoard.o: checkerboard.cpp
	g++ -c checkerboard.cpp


lower.o: lower.cpp
	g++ -c lower.cpp

upper.o: upper.cpp
	g++ -c upper.cpp

trapezoid.o: trapezoid.cpp
	g++ -c trapezoid.cpp
	
clean: 
	rm *.o main