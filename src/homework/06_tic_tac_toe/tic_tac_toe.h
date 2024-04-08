//h

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include <string>
#include <vector>

class TicTacToe {
public:
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player() const;
    void display_board() const;
    bool check_board_full() const;
    void clear_board();
private:
    std::string player;
    std::vector<std::string> pegs{9, " "};
    bool game_over = false;
    void set_next_player();
};

#endif
