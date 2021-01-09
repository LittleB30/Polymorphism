CC=g++
CFLAGS=-std=c++11
all:FruitImplementation main
	$(CC) $(CFLAGS) FruitImplementation.o main.o -o out
FruitImplementation:FruitImplementation.cpp
	$(CC) $(CFLAGS) -c FruitImplementation.cpp
main:main.cpp
	$(CC) $(CFLAGS) -c main.cpp
clean:
	rm *.o out
