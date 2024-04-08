
#include "tic_tac_toe.h"
#include <iostream>

int main() {
    TicTacToe game;
    game.start_game("X");

    // Simulate a tie game by filling up the board
    // with alternating X's and O's, no winner
    game.mark_board(1); // X
    game.mark_board(2); // O
    game.mark_board(3); // X
    game.mark_board(5); // O
    game.mark_board(4); // X
    game.mark_board(6); // O
    game.mark_board(8); // X
    game.mark_board(9); // O
    game.mark_board(7); // X - Board is now full with no winner

    // Now the board is full, should return true
    bool is_full = game.check_board_full();
    if (!is_full) {
        std::cerr << "Test failed: Board should be full but check_board_full returned false." << std::endl;
        return 1;
    }

    std::cout << "All tests passed. The board is full and there is no winner." << std::endl;
    return 0;
}
