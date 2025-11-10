#ifndef KING_HPP
#define KING_HPP

#include <vector>
#include <string>
#include "../../Game/header/Piece.hpp"

class King : public Piece {
    bool hasMoved;
public:
    King(const Color color, const Position position) : Piece(color, position, 3, 'K'), hasMoved(false) {}
    std::vector<std::string> getMoves();

    void makeMove(Board &board, const Position &target) override;
};

#endif // KING_HPP
