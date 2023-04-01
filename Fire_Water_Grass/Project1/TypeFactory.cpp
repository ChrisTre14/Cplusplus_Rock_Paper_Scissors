#include "TypeFactory.h"

std::shared_ptr<Type> TypeFactory::create_type(const std::string &type){
   
    if(type=="Fire"){
        return std::make_shared<Fire>();
    }
    else if(type=="Grass"){
        return std::make_shared<Grass>();
    }
    else if(type=="Water"){
        return std::make_shared<Water>();
    }
    else{
        
        throw std::invalid_argument("Invalid type");
    }
}
