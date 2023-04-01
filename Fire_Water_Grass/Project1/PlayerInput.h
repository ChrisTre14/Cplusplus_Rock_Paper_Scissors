#ifndef PlayerInput_H
#define PlayerInput_H

#include <iostream>
#include <string>
#include <iomanip>

#include "InputManager.h"

class PlayerInput : public InputManager {
private:

FileManager fileManager;
public:

    PlayerInput()=default;
    PlayerInput(PlayerInput const &playerInput)=default;
    PlayerInput(PlayerInput &&playerInput)=default;

    PlayerInput &operator=(PlayerInput const &playerInput)=default;
    PlayerInput &operator=(PlayerInput &&playerInput)=default;

    ~PlayerInput()=default;
    
    virtual std::string get_input() override;
};

#endif

