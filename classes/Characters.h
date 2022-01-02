#include <iostream>
#include <vector>
#include <string>

#ifndef CHARACTERS_H
#define CHARACTERS_H

class Item {};

class Inventory {
    public:
        std::vector<Item> Items;
    
};

class Player {
    public:
        Inventory inventory;

};

class NPC {
    public:
        std::string description;
};
class Narrator {};

#endif