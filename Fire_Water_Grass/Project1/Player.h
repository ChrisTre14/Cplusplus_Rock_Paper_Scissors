#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>

class Player{
private:

	int score;
public:

	Player();
	Player(Player const &player) = default;
	Player(Player &&player) = default;

	Player &operator=(Player const &player) = default;
	Player &operator=(Player &&player) = default;

	~Player() = default;

	void set_score(const int &score);
	int get_score();
};

#endif
