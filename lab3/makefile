OBJS	= main.o Semaphore.o
SOURCE	= main.cpp, Semaphore.cpp
HEADER	= Semaphore.h
OUT	= main.OUT
CC	= g++
CFLAGS = -std=c++11 -pthread 
DEBUGFLAGS = 

%.o: %.cpp
		$(CC) -c -o  $@ $< $(CFLAGS) $(DEBUGFLAGS)


All: $(OBJECTS)
		$(CC) -o $(OUT) $(OBJS) $(CFLAGS) $(DEBUGFLAGS)

DEBUG: DEBUGFLAGS = DDEBUG
DEBUG: ALL

clean:
		rm *.o

	
	