//cpp
#include "tic_tac_toe.h"
#include <iostream>

void TicTacToe::start_game(std::string first_player) {
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position) {
    pegs[position - 1] = player;
    if (check_column_win() || check_row_win() || check_diagonal_win()) {
        set_winner();
        game_over = true;
    } else if (check_board_full()) {
        winner = "C";  
        game_over = true;
    } else {
        set_next_player();
    }
}

std::string TicTacToe::get_player() const {
    return player;
}

void TicTacToe::display_board() const {
    for (int i = 0; i < 9; i += 3) {
        std::cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << std::endl;
        if (i < 6) {
            std::cout << "-+-+-" << std::endl;
        }
    }
}

bool TicTacToe::check_board_full() const {
    for (auto peg : pegs) {
        if (peg == " ") {
            return false;
        }
    }
    return true;
}

void TicTacToe::clear_board() {
    pegs.assign(9, " ");
}

void TicTacToe::set_next_player() {
    if (player == "X") {
        player = "O";
    } else {
        player = "X";
    }
}

void TicTacToe::set_winner() {
    winner = player;
}

bool TicTacToe::check_column_win() const {
    for (int i = 0; i < 3; i++) {
        if (pegs[i] != " " && pegs[i] == pegs[i + 3] && pegs[i + 3] == pegs[i + 6]) {
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_row_win() const {
    for (int i = 0; i < 9; i += 3) {
        if (pegs[i] != " " && pegs[i] == pegs[i + 1] && pegs[i + 1] == pegs[i + 2]) {
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_diagonal_win() const {
    if (pegs[0] != " " && pegs[0] == pegs[4] && pegs[4] == pegs[8]) {
        return true;
    } else if (pegs[2] != " " && pegs[2] == pegs[4] && pegs[4] == pegs[6]) {
        return true;
    }
    return false;
}
bool TicTacToe::is_game_over()const {
    return game_over;
}
std::vector<std::string> TicTacToe::get_pegs() const {
    return pegs;
}
std::string TicTacToe::get_winner() const {
    return winner;
}

