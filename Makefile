TARGET = main

CFLAGS = -g -Wall

CC = g++

$(TARGET): $(TARGET).o classes/Characters.o classes/Rooms.o
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).o classes/Characters.o classes/Rooms.o

$(TARGET).o: main.cpp classes/Characters.h classes/Rooms.h
	$(CC) $(CFLAGS) -c $(TARGET).cpp

classes/Characters.o: classes/Characters.h
classes/Rooms.o: classes/Rooms.h

run:
	./$(TARGET)

clean:
	rm -f $(TARGET)
