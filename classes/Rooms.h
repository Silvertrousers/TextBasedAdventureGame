#include <string>
#include <vector>
#include <iostream>
#include "Characters.h"
#include <map>

#ifndef ROOMS_H
#define ROOMS_H

class Room {
    public:
        static int ID;
        std::string name;
        std::string description;
        std::vector<NPC*> characters;
        Inventory items;
        std::vector<std::string> connectedRooms; //filled with room names
        Room();
        Room* makeStartRoom();
        Room* makeHallsKitchen();

};

class GameWorld {
    public:
        std::map<std::string, Room*> rooms;
        GameWorld();
};

#endif