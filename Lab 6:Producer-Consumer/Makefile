CC=g++
CFLAGS= -std=c++11 -pthread
CFiles= SafeBuffer.cpp Semaphore.cpp Event.cpp main.cpp
OBJFILES= SafeBuffer.o Semaphore.o Event.o main.o

%.o:%.cpp
	$(CC) -c -o $@ $< $(CFLAGS)

ALL: $(OBJFILES)
	$(CC) -o lab6 $(OBJFILES) $(CFLAGS)

CLEAN:
	rm *.o
