#ifndef FIRE_H
#define FIRE_H

#include "Type.h"

class Fire : public Type{
public:

    Fire();
    Fire(Fire const &fire)=default;
    Fire(Fire &&fire)=default;

    Fire &operator=(Fire const &fire)=default;
    Fire &operator=(Fire &&fire)=default;

    ~Fire()=default;
};


#endif
