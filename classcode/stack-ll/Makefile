main: main.o Stack.o Node.o
	g++ -o main main.o Stack.o Node.o

test: test.o Stack.o
	g++ -o test test.o Stack.o

test.o: test.cpp Stack.h

main.o: main.cpp Stack.h

stack.o:Stack.cpp Stack.h Node.h

Node.o: Node.cpp Node.h

clean:
	rm Stack.o main.o Node.o
