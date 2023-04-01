#ifndef SCOREMANAGER_H
#define SCOREMANAGER_H

#include <iostream>
#include <string>
#include <memory>

#include "GameLogic.h"
#include "Type.h"
#include "Player.h"


class ScoreManager
{
private:

public:

    ScoreManager()=default;
    ScoreManager(ScoreManager const &scoreManager)=default;

    ScoreManager(ScoreManager &&scoreManager)=default;
    ScoreManager &operator=(ScoreManager const &scoreManager)=default;
    ScoreManager &operator=(ScoreManager &&scoreManager)=default;

     ~ScoreManager()=default;

    void score_system(std::shared_ptr<Type> type1, std::shared_ptr<Type> type2, std::shared_ptr<Player> &player1, std::shared_ptr<Player> &player2, std::unique_ptr<GameLogic> &gameLogic);
};

#endif
