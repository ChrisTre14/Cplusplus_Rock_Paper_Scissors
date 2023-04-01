#ifndef TYPE_H
#define TYPE_H

#include <iostream>
#include <vector>
#include <string>

class Type{
protected:

    std::vector<std::string> typeAdvantages;
    std::vector<std::string> typeDisadvantages;
    std::string name;

public:

    Type(std::string name, std::vector<std::string> typeAdvantages, std::vector<std::string> typeDisadvantages);
    Type(Type const &type)=default;
    Type(Type &&type)=default;

    Type &operator=(Type const &type)=default;
    Type &operator=(Type &&type)=default;

    ~Type()=default;

    std::string get_name();
    std::vector<std::string> get_typeAdvantages();
    std::vector<std::string> get_typeDisadvantages();
    void add_typeAdvantages(std::string &newTypeAdvantage);
    void add_typeDisadvantages(std::string &newTypeDisadvantage);
};

#endif