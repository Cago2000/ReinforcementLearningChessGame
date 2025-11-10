#ifndef EMPTY_HPP
#define EMPTY_HPP

#include <vector>
#include <string>
#include "../../Game/header/Piece.hpp"

class Empty : public Piece {
public:
    Empty(const Color color, const Position position) : Piece(color, position, 0, '.'){}

    std::vector<std::string> getMoves();

    void makeMove(Board &board, const Position &target) override;
};

#endif // EMPTY_HPP
