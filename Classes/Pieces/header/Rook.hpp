#ifndef ROOK_HPP
#define ROOK_HPP

#include <vector>
#include <string>
#include "../../Game/header/Piece.hpp"

class Rook : public Piece {
public:
    Rook(const Color color, const Position position) : Piece(color, position, 5, 'R'){}
    std::vector<std::string> getMoves();

    void makeMove(Board &board, const Position &target) override;
};

#endif // ROOK_HPP
