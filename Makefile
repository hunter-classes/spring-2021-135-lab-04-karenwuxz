main: main.o box.o checkerBoard.o
	g++ -o main main.o box.o checkerBoard.o

main.o: main.cpp box.h checkerBoard.h
	g++ -c main.cpp

box.o: box.cpp
	g++ -c box.cpp

checkerBoard.o: checkerboard.cpp
	g++ -c checkerboard.cpp
clean: 
	rm *.o main