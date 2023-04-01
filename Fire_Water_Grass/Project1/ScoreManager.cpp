#include "ScoreManager.h"



void ScoreManager::score_system(std::shared_ptr<Type> type1,std::shared_ptr<Type> type2, std::shared_ptr<Player> &player1, std::shared_ptr<Player> &player2, std::unique_ptr<GameLogic> &gameLogic){
    if (gameLogic->is_draw(type1,type2)){

    }
    else if(gameLogic->is_win(type1,type2)){
        player1->set_score(player1->get_score()+1);
    }
    else{
        player2->set_score(player2->get_score()+1);
    }
}