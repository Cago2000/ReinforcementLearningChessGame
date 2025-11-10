#ifndef KNIGHT_HPP
#define KNIGHT_HPP

#include <vector>
#include <string>
#include "../../Game/header/Piece.hpp"

class Knight : public Piece {
public:
    Knight(const Color color, const Position position) : Piece(color, position, 3, 'N'){}
    std::vector<std::string> getMoves();

    void makeMove(Board &board, const Position &target) override;
};

#endif // KNIGHT_HPP
