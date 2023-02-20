#pragma once
#include "Board.h"

class Game {
private:
	Board _board;
	Cell _activePlayer;
	void ToggleActivePlayer();
public:
	Game();
	void Start();
};