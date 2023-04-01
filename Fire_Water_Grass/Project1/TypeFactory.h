#ifndef TYPEFACTORY_H
#define TYPEFACTORY_H

#include "Type.h"
#include "Fire.h"
#include "Grass.h"
#include "Water.h"

class TypeFactory
{
public:
    TypeFactory()=default;
    ~TypeFactory()=default;
    TypeFactory(TypeFactory const &typeFactory)=default;
    TypeFactory(TypeFactory &&typeFactory)=default;
    TypeFactory &operator=(TypeFactory const &typeFactory)=default;
    TypeFactory &operator=(TypeFactory &&typeFactory)=default;

    std::shared_ptr<Type> create_type(const std::string &type);
};

#endif