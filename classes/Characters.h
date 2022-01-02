#include <iostream>
#include <vector>
#include <string>

#ifndef CHARACTERS_H
#define CHARACTERS_H

class Item {
    static int ID;
    std::string name;
    std::string description;
};

class Inventory {
    public:
        std::vector<Item> items;
    
};



class Player {
    public:
        Inventory inventory;
        std::vector<std::string> societies; 

};

class NPC {
    public:
        static int ID;
        std::string name;
        std::string description;
        Inventory inventory;
        std::vector<std::string> societies;
        NPC();
        NPC* makeJenny();
        NPC* makeJason();
};

class Society {
    static int ID;
    std::string name;
    std::string description;
    std::vector<NPC*> members;
    Inventory stores;
};

class Narrator {};

#endif