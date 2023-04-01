#ifndef WATER_H
#define WATER_H

#include "Type.h"

class Water : public Type {
public:

    Water();
    ~Water()=default;
    Water(Water const &water)=default;
    Water(Water &&water)=default;
    Water &operator=(Water const &water)=default;
    Water &operator=(Water &&water)=default;
};


#endif