TARGET = main

CFLAGS = -g -Wall

CC = g++

all: $(TARGET) run

$(TARGET): $(TARGET).o classes/Characters.o classes/Rooms.o classes/Decisions.o
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).o classes/Characters.o classes/Rooms.o classes/Decisions.o

$(TARGET).o: main.cpp classes/Characters.h classes/Rooms.h classes/Decisions.h
	$(CC) $(CFLAGS) -c $(TARGET).cpp

classes/Characters.o: classes/Characters.h
classes/Rooms.o: classes/Rooms.h
classes/Decisions.o: classes/Decisions.h
run:
	./$(TARGET)

clean:
	rm -f $(TARGET)
