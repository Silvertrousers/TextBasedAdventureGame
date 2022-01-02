#include "Rooms.h"


NPC* makeJenny(){
    NPC* Jenny = new NPC;
    Jenny->name = "Jenny";
    Jenny->description = "Blone, skinny essex girl studying biochem";
    return Jenny;
}

NPC* makeJason(){
    NPC* Jason = new NPC;
    Jason->name = "Jason";
    Jason->description = "Regular build, chinese guy from Hong Kong";
    return Jason;
}

Room::Room(){ 
    std::cout << "Room " << name << " created" << std::endl;
}

Room* makeStartRoom(){
    Room* startRoom = new Room;
    startRoom->name = "Start Room";
    startRoom->description = "You wake up in a car. \n The car is filled with your stuff. \n You're on your way to your first day at university."; 
    startRoom->connectedRooms.push_back("Halls Kitchen");
    //startRoom->characters.push_back();
    return startRoom;
}

Room* makeHallsKitchen(){
    Room* hallsKitchen = new Room;
    hallsKitchen->name = "Halls Kitchen";
    hallsKitchen->description = "Gotta git some writing in here"; 
    hallsKitchen->connectedRooms.push_back("Halls Bedroom");
    hallsKitchen->characters.push_back(makeJenny());
    hallsKitchen->characters.push_back(makeJason());
    return hallsKitchen;
}

GameWorld::GameWorld(){
    Room* room;

    room = makeStartRoom();
    rooms.insert({room->name, room});

    room = makeHallsKitchen();
    rooms.insert({room->name, room});
}