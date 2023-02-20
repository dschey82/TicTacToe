#pragma once
#include "Board.h"
#include "Cell.h"
#include <string>

class Turn {
private:
	Board* _board;
	std::string GetString(Cell cell);
	int row;
	int col;
public:
	Turn(Board* board);
	void Start(Cell player);
};