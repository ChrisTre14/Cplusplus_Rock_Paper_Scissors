#include "Player.h"

Player::Player():
score{0}{

}

void Player::set_score(const int &newScore){
    score=newScore;
}

int Player::get_score(){
    return score;
}