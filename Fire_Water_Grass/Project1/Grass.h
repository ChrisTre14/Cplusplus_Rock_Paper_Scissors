#ifndef GRASS_H
#define GRASS_H

#include "Type.h"

class Grass : public Type{
public:

    Grass();
    Grass(Grass const &grass)=default;
    Grass(Grass &&grass)=default;

    Grass &operator=(Grass const &grass)=default;
    Grass &operator=(Grass &&grass)=default;

    ~Grass()=default;
};


#endif
