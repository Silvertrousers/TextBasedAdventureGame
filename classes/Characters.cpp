#include "Characters.h"

bool Item::is(ItemProperty property){
    for(auto prop : properties){
        if(prop == property){
            return true;
        }
    }
    return false;
}

NPC::NPC(){
    std::cout << "Character " << name << " created" << std::endl;
}


