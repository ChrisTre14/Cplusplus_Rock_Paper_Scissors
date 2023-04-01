#ifndef RENDERER_H
#define RENDERER_H

#include <iostream>
#include <string>
#include <iomanip>

#include "Player.h"

class Renderer{
public:

    Renderer()=default;
    Renderer(Renderer const &renderer)=default;
    Renderer(Renderer &&renderer)=default;

    Renderer &operator=(Renderer const &renderer)=default;
    Renderer &operator=(Renderer &&renderer)=default;

    virtual ~Renderer()=default;
    
    virtual void render() const=0;
};

#endif
