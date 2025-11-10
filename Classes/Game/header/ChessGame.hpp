#ifndef CHESSGAME_HPP
#define CHESSGAME_HPP

#include "Board.hpp"

class ChessGame {
private:
    Board* board;

public:
    ChessGame() : board(new Board()) {}
    Board* getBoard() const {return board;}
};

#endif // CHESSGAME_HPP
