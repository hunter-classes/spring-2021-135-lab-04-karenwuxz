main: main.o box.o checkerboard.o cross.o lower.o upper.o trapezoid.o checkerboard3x3.o
	g++ -o main main.o box.o checkerboard.o cross.o lower.o upper.o trapezoid.o checkerboard3x3.o

main.o: main.cpp box.h checkerboard.h cross.h lower.h upper.h trapezoid.h checkerboard3x3.h
	g++ -c main.cpp

box.o: box.cpp
	g++ -c box.cpp

checkerboard.o: checkerboard.cpp
	g++ -c checkerboard.cpp

cross.o: cross.cpp
	g++ -c cross.cpp

lower.o: lower.cpp
	g++ -c lower.cpp

upper.o: upper.cpp
	g++ -c upper.cpp

trapezoid.o: trapezoid.cpp
	g++ -c trapezoid.cpp

checkerboard3x3.o: checkerboard3x3.cpp
	g++ -c checkerboard3x3.cpp
clean: 
	rm *.o main