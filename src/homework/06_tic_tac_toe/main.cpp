// main.cpp

#include "tic_tac_toe.h"
#include <iostream>

int main() {
    TicTacToe game;
    std::string player;
    std::string continue_game;

    do {
        std::cout << "Enter first player (X or O): ";
        std::cin >> player;
        game.start_game(player);

        while (!game.check_board_full()) {
            game.display_board();
            int position;
            std::cout << "Enter position (1-9): ";
            std::cin >> position;
            game.mark_board(position);
        }

        game.display_board();
        game.clear_board();

        std::cout << "Game over. Play again? (y/n): ";
        std::cin >> continue_game;
    } while (continue_game == "y");

    return 0;
}

