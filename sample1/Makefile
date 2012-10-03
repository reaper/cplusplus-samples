CC=g++
EXEC=main

all: $(EXEC)

main: complex.o main.o
	$(CC) -o complex main.o complex.o

complex.o: complex.cpp
	$(CC) -o complex.o -c complex.cpp

main.o: main.cpp
	$(CC) -o main.o -c main.cpp

clean:
	rm -rf *.o
