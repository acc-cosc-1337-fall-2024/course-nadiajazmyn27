
#include "tic_tac_toe.h"
#include <iostream>

bool test_win(TicTacToe& game, const std::vector<int>& moves, const std::string& expected_winner) {
    game.clear_board();
    for (size_t i = 0; i < moves.size(); ++i) {
        game.mark_board(moves[i]);
        if (game.is_game_over()) break;
    }
    return game.get_winner() == expected_winner;
}

int main() {
    TicTacToe game;


    if (!test_win(game, {1, 4, 2, 5, 3}, "X")) {
        std::cerr << "Test failed: X should win with the first row." << std::endl;
        return 1;
    }

   
    if (!test_win(game, {1, 2, 4, 3, 7}, "X")) {
        std::cerr << "Test failed: X should win with the first column." << std::endl;
        return 1;
    }

    
    if (!test_win(game, {1, 2, 5, 3, 9}, "X")) {
        std::cerr << "Test failed: X should win with a diagonal." << std::endl;
        return 1;
    }

    
    if (!test_win(game, {1, 2, 3, 4, 6, 5, 8, 9, 7}, "C")) {
        std::cerr << "Test failed: The game should be a tie." << std::endl;
        return 1;
    }

    std::cout << "All tests passed." << std::endl;
    return 0;
}
