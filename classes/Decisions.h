#include <iostream>
#include <vector>
#include <string>
#include <map>

#ifndef DECISIONS_H
#define DECISIONS_H

enum PlayerInputProperties{friendly, nice, sad, angry, drunk, one, two, three, four, invalid};

class DecisionNode {
    public:
        static int ID;
        std::string text;
        std::string playerInputPrompt;
        std::map<PlayerInputProperties, DecisionNode*> followingDecisions;
        
        std::string invalidInput;
        std::string playerDecision;

        void display();
        void playerInput();
        DecisionNode* outcome();
        
};


//need to be able to add story lines
//how to construct a story line
//ideally the functionality allows me to add a story line or quest, maybe have a strcutre of quests

//need to be able to construct the story graph from a set of nodes, charcters
class QuestLine{
    public:
        static int ID;
        std::string name;
        DecisionNode* head;
        DecisionNode* tail;
        QuestLine();
};

#endif