main: main.o stack.o
	g++ -o main main.o stack.o

test: test.o stack.o
	g++ -o test test.o stack.o

test.o: test.cpp stack.h

main.o: main.cpp stack.h

stack.o:stack.cpp stack.h

clean:
	rm stack.o main.o 
