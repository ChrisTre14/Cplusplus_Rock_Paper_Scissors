#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include <iostream>
#include <string>
#include <iomanip>
#include <memory>

#include "Type.h"
#include "Player.h"
#include "GameLogic.h"
#include "ScoreManager.h"
#include "ScoreRenderer.h"
#include "TypeFactory.h"
#include "PlayerInput.h"

class GameManager{
private:

    std::shared_ptr<Player> player1;
	std::shared_ptr<Player> player2;
    std::unique_ptr<ScoreManager> scoreManager;
    std::unique_ptr<GameLogic> gamelogic;
    std::unique_ptr<TypeFactory> factory;
    std::unique_ptr<Renderer> scoreRender;
    std::unique_ptr<PlayerInput> playerInput;
public:

    GameManager();
    GameManager(GameManager const &gameManager)=default;
    GameManager(GameManager &&gameManager)=default;

    GameManager &operator=(GameManager const &gameManager)=default;
    GameManager &operator=(GameManager &&gameManager)=default;

    ~GameManager()=default;
    
    void game_loop();
    std::shared_ptr<Type> handle_input();
};


#endif

