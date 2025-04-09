PROG = conversor
CC = g++
CPPFLAGS = -O0 -g -Wall -pedantic

OBJS = main.o conversor.o

$(PROG): $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

main.o: main.cpp
	$(CC) $(CPPFLAGS) -c main.cpp

conversor.o: conversor.cpp conversor.h
	$(CC) $(CPPFLAGS) -c conversor.cpp

clean:
	rm *.o conversor