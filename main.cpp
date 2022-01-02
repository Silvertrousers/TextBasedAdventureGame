#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "classes/Characters.h"
#include "classes/Rooms.h"


class StoryNode {
    public:
        std::vector<StoryNode*> Decisions;
        std::string Text;
       // location
};

//need to be able to add story lines
//how to construct a story line
//ideally the functionality allows me to add a story line or quest, maybe have a strcutre of quests

//need to be able to construct the story graph from a set of nodes, charcters
int main(){
    std::cout << "hello world" << std::endl;
    GameWorld* World = new GameWorld;

    Room* currentRoom = World->rooms["Start Room"];
    std::cout << currentRoom->description << std::endl;
    return 0;
}