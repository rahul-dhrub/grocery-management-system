all: sample

sample: main.o grocery.o  list.o node.o fruits.o vegetables.o
	g++ main.o grocery.o list.o node.o fruits.o vegetables.o -o sample

main.o: main.cpp
	g++ -c main.cpp

grocery.o: grocery.cpp
	g++ -c grocery.cpp

list.o: list.cpp
	g++ -c list.cpp

node.o: node.cpp
	g++ -c node.cpp
	
fruits.o: fruits.cpp
	g++ -c fruits.cpp
	  	
vegetables.o: vegetables.cpp
	g++ -c vegetables.cpp	

clean:
	rm *o sample
