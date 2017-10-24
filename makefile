start:finish.out
	./finish.out

CLINK=-lm
CPPFLAGS = --std=c++11 -Wall
CC=g++

finish.out:main.o wielomiany.o
	$(CC) -o finish.out  $(CLINK) main.o wielomiany.o

main.o: main.cpp wielomiany.h
	$(CC) -c main.cpp $(CPPFLAGS)

wielomiany.o: wielomiany.cpp wielomiany.h
	$(CC) -c wielomiany.cpp $(CPPFLAGS)

clean:
	- rm *.o
	- rm tests_bin
