// main.cpp

#include "tic_tac_toe.h"
#include <iostream>

int main() {
    TicTacToe game;
    std::string player;

    std::cout << "Enter first player (X or O): ";
    std::cin >> player;
    game.start_game(player);

    while (!game.is_game_over()) {  
        game.display_board();
        int position;
        std::cout << "Enter position (1-9): ";
        std::cin >> position;

        
        auto pegs = game.get_pegs();  
        while (position < 1 || position > 9 || pegs[position - 1] != " ") {
            std::cout << "Invalid position. Enter position (1-9): ";
            std::cin >> position;
        }
        
        game.mark_board(position);
    }

    game.display_board();
    std::cout << "Game over! " << (game.get_winner() == "C" ? "It's a tie." : "Winner is " + game.get_winner()) << std::endl;

    return 0;
}



