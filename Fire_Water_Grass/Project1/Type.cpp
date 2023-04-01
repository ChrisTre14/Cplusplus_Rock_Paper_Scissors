#include "Type.h"


Type::Type(std::string name, std::vector<std::string> typeAdvantages, std::vector<std::string> typeDisadvantages):
name{name},typeAdvantages{typeAdvantages}, typeDisadvantages{typeDisadvantages} {

}

std::vector<std::string> Type::get_typeAdvantages(){

    return typeAdvantages;
}

std::vector<std::string> Type::get_typeDisadvantages(){

    return typeDisadvantages;
}

std::string Type::get_name(){

    return name;
}

void Type::add_typeAdvantages(std::string &newTypeAdvantage){

    typeAdvantages.push_back(newTypeAdvantage);
}

void Type::add_typeDisadvantages(std::string &newTypeDisadvantage){
    
    typeDisadvantages.push_back(newTypeDisadvantage);
}

