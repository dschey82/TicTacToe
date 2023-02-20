#include "Turn.h"
#include <iostream>

Turn::Turn(Board* board) {
	row = -1;
	col = -1;
	_board = board;
}

void Turn::Start(Cell player) {
	do {
		std::cout << "Player " << GetString(player) << ":\r\n";
		std::cout << "Which row would you like to play? (1-3)\r\n";
		std::cin >> row;
		row -= 1;
		std::cout << "Which column would you like to play? (1-3)\r\n";
		std::cin >> col;
		col -= 1;
	} while (!_board->SetCell(row, col, player));
	_board->Print();
}

std::string Turn::GetString(Cell cell) {
	switch (cell) {
	case Cell::empty:
		return " ";
	case Cell::X:
		return "1";
	case Cell::O:
		return "2";
	default:
		return " ";
	}
}