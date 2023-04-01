#include "ScoreRenderer.h"


ScoreRenderer::ScoreRenderer(std::shared_ptr<Player> &player1, std::shared_ptr<Player> &player2) :
player1{player1}, player2{player2} {

}

void ScoreRenderer::render() const{

    std::cout << "Player 1" << std::setw(20) <<"Player 2" << std::endl;
    std::cout << "-" << std::setw(36) << std::setfill('-') << "-" << std::endl;
    std::cout << std::setfill(' ') << player1->get_score() << std::setw(20) << player2->get_score() << std::endl;
}