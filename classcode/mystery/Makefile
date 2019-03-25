main: main.o ds.o
	g++ -o main main.o ds.o

test: test.o ds.o
	g++ -o test test.o ds.o

test.o: test.cpp ds.h

main.o: main.cpp ds.h

ds.o:ds.cpp ds.h

clean:
	rm ds.o main.o 
