#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "classes/Characters.h"
#include "classes/Rooms.h"


class DecisionNode {
    public:
        static int ID;
        std::string text;
        std::string playerInputPrompt;
        std::vector<DecisionNode*> followingDecisions;
        
        std::vector<std::string> paths; //each entry is the text for an option
        std::string invalidInput;
        std::string playerDecision;

        void display(){
            std::cout<< text <<std::endl;
        }

        void playerInput(){
            while(true){
                std::cout << playerInputPrompt;
                std::cin >> playerDecision;
                if((playerDecision == "1") || (playerDecision == "2") || (playerDecision == "3")|| (playerDecision == "4")){
                    break;
                }
                else{
                    std::cout << "Not a valid action." << std::endl;
                }
            }
        }

        DecisionNode* outcome(){
            if(playerDecision == "1"){
                std::cout << "Fantastic, let get started then." << std::endl;
            }
            if(playerDecision == "2"){
                std::cout << "Sorry, this option isn't available at the moment." << std::endl;
            }
            if(playerDecision == "3"){
                std::cout << "Sorry, this option isn't available at the moment." << std::endl;
            }
            if(playerDecision == "4"){
                std::cout << "Bye for now!" << std::endl;
            }
            return NULL;
        }
};

DecisionNode* startMenu(){
    DecisionNode* startMenu = new DecisionNode;
    startMenu->text = "You have started the game, would you like to: \n  1. New Game \n  2. Continue Game \n  3. Load Game \n  4. Return to Terminal \n";
    startMenu->playerInputPrompt = "Enter: ";
    return startMenu;
}

DecisionNode* startMenu(){
    DecisionNode* startMenu = new DecisionNode;
    startMenu->text = "You have started the game, would you like to: \n  1. New Game \n  2. Continue Game \n  3. Load Game \n  4. Return to Terminal \n";
    startMenu->playerInputPrompt = "Enter: ";
    return startMenu;
}

//need to be able to add story lines
//how to construct a story line
//ideally the functionality allows me to add a story line or quest, maybe have a strcutre of quests

//need to be able to construct the story graph from a set of nodes, charcters
int main(){
    GameWorld* World = new GameWorld;

    Room* currentRoom = World->rooms["Start Room"];
    DecisionNode* currentDecisionNode = startMenu();
    
    //enter room
    std::cout << currentRoom->description << std::endl;

    currentDecisionNode->display();
    currentDecisionNode->playerInput();
    currentDecisionNode->outcome();

    // Game loop
    // Display appropriate text
    // Provide action options to player
    //// search for items (item found will go into inventory)
    //// list NPC's in room
    //// talk to an NPC
    //// list items in inventory
    ////// use item on person (use - on -)
    ////// use item on item (use - on -)
    ////// special actions for certain items
    // take player input
    //// add parser, there will be several options  for each text option
    

    return 0;
}