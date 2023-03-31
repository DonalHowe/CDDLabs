# name : Donal howe 
#31/03/2023
# license : GNU LICENSE 3.0


OBJS	= main.o Semaphore.o
SOURCE	= main.cpp, Semaphore.cpp
HEADER	= Semaphore.h
OUT	= main.OUT
CC	= g++
CFLAGS = -std=c++11 -pthread 
DEBUGFLAGS = 

%.o: %.cpp
		$(CC) -c -o  $@ $< $(CFLAGS) $(DEBUGFLAGS)


All: $(OBJS)
		$(CC) -o $(OUT) $(OBJS) $(CFLAGS) $(DEBUGFLAGS)

DEBUG: DEBUGFLAGS = DDEBUG
DEBUG: ALL

clean:
		rm *.o

	
	