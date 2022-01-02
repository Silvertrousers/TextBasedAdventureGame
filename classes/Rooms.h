#include <string>
#include <vector>
#include <iostream>
#include "Characters.h"
#include <map>

#ifndef ROOMS_H
#define ROOMS_H

class Room {
    public:
        static int roomID;
        std::string name;
        std::string description;
        std::vector<NPC> characters;
        std::vector<std::string> connectedRooms; //filled with room names
        Room();

};

class GameWorld {
    public:
        std::map<std::string, Room*> rooms;
        GameWorld();
};

#endif