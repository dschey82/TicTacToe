#pragma once
#include <vector>
#include <string>
#include "Cell.h"

class Board {
private:
	std::vector<Cell> _cells;
	std::string GetString(Cell cell);
public:
	Board();
	Cell CheckCell(int row, int col);
	bool SetCell(int row, int col, Cell cell);
	bool GameOver();
	void Print();
};