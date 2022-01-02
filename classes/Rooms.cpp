#include "Rooms.h"

Room::Room(){ 
    std::cout << name << "created" << std::endl;
}

Room* makeStartRoom(){
    Room* startRoom = new Room;
    startRoom->name = "Start Room";
    startRoom->description = "You wake up in a car. \n The car is filled with your stuff. \n You're on your way to your first day at university."; 
    startRoom->connectedRooms.push_back("Halls Kitchen");
    return startRoom;
}

Room* makeHallsKitchen(){
    Room* hallsKitchen = new Room;
    hallsKitchen->name = "Halls Kitchen";
    hallsKitchen->description = ""; 
    hallsKitchen->connectedRooms.push_back("Halls Bedroom");
    return hallsKitchen;
}

GameWorld::GameWorld(){
    Room* room;

    room = makeStartRoom();
    rooms.insert({room->name, room});

    room = makeHallsKitchen();
    rooms.insert({room->name, room});
}