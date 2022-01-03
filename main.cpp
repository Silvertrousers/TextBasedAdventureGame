#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "classes/Characters.h"
#include "classes/Rooms.h"
#include "classes/Decisions.h"


DecisionNode* startMenu(){
    DecisionNode* startMenu = new DecisionNode;
    startMenu->text = "You have started the game, would you like to: \n  1. New Game \n  2. Continue Game \n  3. Load Game \n  4. Return to Terminal \n";
    startMenu->playerInputPrompt = "Enter: ";
    startMenu->invalidInput = "Not a valid action.";
    return startMenu;
}

int main(){
    GameWorld* World = new GameWorld;

    Room* currentRoom = World->rooms["Start Room"];
    DecisionNode* currentDecisionNode = startMenu();
    
    //enter room
    std::cout << currentRoom->description << std::endl;

    currentDecisionNode->display();
    currentDecisionNode->playerInput();
    currentDecisionNode = currentDecisionNode->outcome();

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