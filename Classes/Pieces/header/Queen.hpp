#ifndef QUEEN_HPP
#define QUEEN_HPP

#include <vector>
#include <string>
#include "../../Game/header/Piece.hpp"

class Queen : public Piece {
public:
    Queen(const Color color, const Position position) : Piece(color, position, 9, 'Q'){}


    std::vector<std::string> getMoves();

    void makeMove(Board &board, const Position &target) override;
};

#endif // QUEEN_HPP
