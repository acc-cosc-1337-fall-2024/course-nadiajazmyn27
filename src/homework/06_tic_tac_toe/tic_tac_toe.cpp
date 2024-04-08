//cpp

#include "tic_tac_toe.h"
#include <iostream>

// Initialize player to X or O and clear the board
void TicTacToe::start_game(std::string first_player) {
    player = first_player;
    clear_board();
}

// Mark the board at position -1 and switch players
void TicTacToe::mark_board(int position) {
    pegs[position - 1] = player;
    set_next_player();
}

// Return the current player
std::string TicTacToe::get_player() const {
    return player;
}

// Display the tic tac toe board in a 3x3 format
void TicTacToe::display_board() const {
    for (int i = 0; i < 9; i += 3) {
        std::cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << std::endl;
        if (i < 6) {
            std::cout << "-+-+-" << std::endl;
        }
    }
}

// Check if the board is full
bool TicTacToe::check_board_full() const {
    for (auto peg : pegs) {
        if (peg == " ") {
            return false;
        }
    }
    return true;
}

// Clear the board to start a new game
void TicTacToe::clear_board() {
    pegs.assign(9, " ");
}

// Private function to toggle between X and O
void TicTacToe::set_next_player() {
    if (player == "X") {
        player = "O";
    } else {
        player = "X";
    }
}
