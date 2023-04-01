#ifndef GAMELOGIC_H
#define GAMELOGIC_H

#include <iostream>
#include <string>
#include <iomanip>
#include <memory>

#include "Type.h"
#include "Player.h"

class GameLogic{
public:

    GameLogic()=default;
    GameLogic(GameLogic const &gameLogic)=default;
    GameLogic(GameLogic &&gameLogic)=default;

    GameLogic &operator=(GameLogic const &gameLogic)=default;
    GameLogic &operator=(GameLogic &&gameLogic)=default;

    ~GameLogic()=default;

    bool is_win(std::shared_ptr<Type> type1, std::shared_ptr<Type> type2);
    bool is_draw(std::shared_ptr<Type> type1, std::shared_ptr<Type> type2);
    void win_condition(std::shared_ptr<Type> type1, std::shared_ptr<Type> type2);
};

#endif