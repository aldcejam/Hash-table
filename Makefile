PROG = bin/main
CC = g++
CPPFLAGS = -O0 -g -std=c++11 -Wall -pedantic
OBJS = bin/main.o bin/HashTable.o

$(PROG): $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

bin/main.o: main.cpp
	mkdir -p bin
	$(CC) $(CPPFLAGS) -c main.cpp -o bin/main.o

bin/HashTable.o: HashTable.cpp HashTable.h
	mkdir -p bin
	$(CC) $(CPPFLAGS) -c HashTable.cpp -o bin/HashTable.o


clean:
	rm -f $(PROG) $(OBJS)
