#include "Decisions.h"

void DecisionNode::display(){
    std::cout<< text <<std::endl;
}

void DecisionNode::playerInput(){
    while(true){
        std::cout << playerInputPrompt;
        std::cin >> playerDecision;
        if((playerDecision == "1") || (playerDecision == "2") || (playerDecision == "3")|| (playerDecision == "4")){
            break;
        }
        else{
            std::cout << invalidInput << std::endl;
        }
    }
}

DecisionNode* DecisionNode::outcome(){
    if(playerDecision == "1"){
        std::cout << "" << std::endl;
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



