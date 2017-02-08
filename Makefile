fossbeans: Main.cpp Project.h
	g++ main.cpp -o fossbeans

Project.o: Project.cpp Project.h
	g++ -c Project.cpp

clean:
	rm -f Project.o fossbeans
