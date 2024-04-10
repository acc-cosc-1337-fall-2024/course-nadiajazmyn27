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
    bool is_game_over() const;
    std::string get_winner() const; 
    std::vector<std::string> get_pegs() const;

private:
    std::string player;
    std::vector<std::string> pegs{9, " "};
    std::string winner; 
    bool game_over = false;
    void set_next_player();
    void set_winner(); 
    bool check_column_win() const; 
    bool check_row_win() const; 
    bool check_diagonal_win() const; 
    bool check_for_win() const; 
};

#endif 

