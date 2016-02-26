Start: main.o DrawLine.o
	g++ -g main.o DrawLine.o -o Start
DrawLine.o: DrawLine.cpp
	g++ -c DrawLine.cpp -o DrawLine.o
main.o: main.cpp
	g++ -c main.cpp -o main.o
clean:
	rm -rf *.o Start
