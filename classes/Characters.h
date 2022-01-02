#include <iostream>
#include <vector>
#include <string>

#ifndef CHARACTERS_H
#define CHARACTERS_H

enum ItemProperty {clean, dirty, hot, heavy, light, conductive};

class Item {
    static int ID;
    std::string name;
    std::string description;
    std::vector<ItemProperty> properties;
    bool is(ItemProperty property);
};

class Inventory {
    public:
        std::vector<Item> items;
    
};



class Player {
    public:
        Inventory inventory;
        std::vector<std::string> societies; 
        int MP; //mental health points
        int HP; //physical health points
};

class NPC {
    public:
        static int ID;
        std::string name;
        std::string description;
        Inventory inventory;
        std::vector<std::string> societies;
        NPC();
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