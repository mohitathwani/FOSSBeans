fossbeans: main.o project.o
	g++ main.o project.o -o fossbeans

main.o: main.cpp project.h
	g++ -c main.cpp
project.o: project.cpp project.h
	g++ -c project.cpp

clean:
	rm -f project.o fossbeans
