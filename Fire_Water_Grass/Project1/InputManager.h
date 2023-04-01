#ifndef InputManager_H
#define InputManager_H

#include <iostream>
#include <string>
#include <iomanip>

#include "Player.h"
#include "FileManager.h"

class InputManager{
protected:

FileManager fileManager;
public:

    InputManager()=default;
    InputManager(InputManager const &inputManager)=default;
    InputManager(InputManager &&inputManager)=default;

    InputManager &operator=(InputManager const &inputManager)=default;
    InputManager &operator=(InputManager &&inputManager)=default;

    virtual ~InputManager()=default;
    
    virtual std::string get_input()=0;
};

#endif
