// TicTacToe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Game.h"

int main()
{
    bool playAgain = true;
    while (playAgain) {
        auto game = Game();
        game.Start();

        bool validResponse = false;
        while (!validResponse) {
            std::cout << "Would you like to play again? (Y/N)";
            std::string reply;
            std::cin >> reply;
            if (reply == "Y") {
                playAgain = true;
                validResponse = true;
            }
            else if (reply == "N") {
                playAgain = false;
                validResponse = true;
            }
            else
            {
                validResponse = false;
                std::cout << "Invalid Response";
            }
        }    
    }
    
    std::string response;
    std::cout << "Thank you for playing Tic Tac Toe!";
    std::cin >> response;
}

