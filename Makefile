#/**
# * @file Makefile
# * @author Tucker Self, Braden Windsor
# * @date 2023-12-01
# * @brief the makefile for Deque Toolkit
# * 
# * allows for the usage of make commands for the code within the DualDequeToolkit file
# */

#Compile using g++
CC = g++
#Compile with all errors and warnings
CFLAGS = -g -Wall -Wextra
#The build target
TARGET = DualDequeToolkit

#Compilation commands
all: $(TARGET)

$(TARGET): deque.o main.o
	$(CC) $(CFLAGS) -o $(TARGET) deque.o main.o

deque.o: deque.cpp deque.h
	$(CC) $(CFLAGS) -c deque.cpp

main.o: main.cpp deque.h
	$(CC) $(CFLAGS) -c main.cpp

#Clean up files
clean:
	$(RM) $(TARGET) *.o *~
