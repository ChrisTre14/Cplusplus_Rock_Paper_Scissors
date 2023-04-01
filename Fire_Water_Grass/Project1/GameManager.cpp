#include "GameManager.h"


GameManager::GameManager() :
player1{std::make_shared<Player>()},player2{std::make_shared<Player>()},scoreManager{std::make_unique<ScoreManager>()}, gamelogic{std::make_unique<GameLogic>()}, factory{std::make_unique<TypeFactory>()},
scoreRender{std::make_unique<ScoreRenderer>(player1,player2)}, playerInput{std::make_unique<PlayerInput>()}
{

}

void GameManager::game_loop(){

    while (player1->get_score()<3 && player2->get_score()<3){
        std::shared_ptr<Type> type1 = handle_input();
        if(type1 !=nullptr){
            std::shared_ptr<Type> type2 = handle_input();
            if (type2 !=nullptr){
                scoreManager->score_system(type1,type2,player1,player2,gamelogic);
                gamelogic->win_condition(type1,type2);
                scoreRender->render();
            }
        }
    }
}


 std::shared_ptr<Type> GameManager::handle_input(){

    std::string input=playerInput->get_input();
    try{
       
        return factory->create_type(input);
    }
    catch (const std::invalid_argument &ex) {
        
        std::cerr<<"Enter a valid type" << std::endl;
        return nullptr;
    }

}


