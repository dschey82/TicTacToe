#include "Board.h"
#include <iostream>

Board::Board() {
	_cells = std::vector<Cell>(9);
}

Cell Board::CheckCell(int row, int col) {
	return _cells.at(3 * row + col);
}

bool Board::SetCell(int row, int col, Cell cell) {
	if (row < 0 || row > 2 || col < 0 || col > 2 || CheckCell(row, col) != Cell::empty) {
		std::cout << "Invalid play, try again.\r\n";
		return false;
	}
	
	_cells[3 * row + col] = cell;
	return true;
}

bool Board::GameOver() {
	if (_cells[0] == _cells[1] && _cells[1] == _cells[2] && _cells[2] != Cell::empty)
		return true;
	if (_cells[0] == _cells[3] && _cells[3] == _cells[6] && _cells[6] != Cell::empty)
		return true;
	if (_cells[0] == _cells[4] && _cells[4] == _cells[8] && _cells[8] != Cell::empty)
		return true;
	if (_cells[2] == _cells[4] && _cells[4] == _cells[6] && _cells[6] != Cell::empty)
		return true;
	if (_cells[1] == _cells[4] && _cells[4] == _cells[7] && _cells[7] != Cell::empty)
		return true;
	if (_cells[2] == _cells[5] && _cells[5] == _cells[8] && _cells[8] != Cell::empty)
		return true;
	if (_cells[3] == _cells[4] && _cells[4] == _cells[5] && _cells[5] != Cell::empty)
		return true;
	if (_cells[6] == _cells[7] && _cells[7] == _cells[8] && _cells[8] != Cell::empty)
		return true;
	return false;
}

void Board::Print() {
	std::cout << "\r\n";
	std::cout << GetString(_cells[0]) << "|" << GetString(_cells[1]) << "|" << GetString(_cells[2]) << "\r\n";
	std::cout << GetString(_cells[3]) << "|" << GetString(_cells[4]) << "|" << GetString(_cells[5]) << "\r\n";
	std::cout << GetString(_cells[6]) << "|" << GetString(_cells[7]) << "|" << GetString(_cells[8]) << "\r\n";
}

std::string Board::GetString(Cell cell) {
	switch (cell) {
	case Cell::empty:
		return " ";
	case Cell::X:
		return "X";
	case Cell::O:
		return "O";
	default:
		return " ";
	}
}