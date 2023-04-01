#include <iostream>
#include <vector>
#include <string>

#include "GameManager.h"

int main() {

	GameManager gameManager=GameManager();
	gameManager.game_loop();
	return 0;
}