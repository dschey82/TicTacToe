#include <iostream>
#include "Game.h"
#include "Turn.h"

Game::Game() {
	_board = Board();
	_activePlayer = Cell::X;
}

void Game::Start() {
	std::cout << "Welcome to Tic Tac Toe!\r\n";

	while (!_board.GameOver()) {
		auto turn = Turn(&_board);
		turn.Start(_activePlayer);
		ToggleActivePlayer();
	}
}

void Game::ToggleActivePlayer() {
	if (_activePlayer == Cell::X)
		_activePlayer = Cell::O;
	else
		_activePlayer = Cell::X;
}