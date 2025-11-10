#ifndef BISHOP_HPP
#define BISHOP_HPP

#include <vector>
#include <string>
#include "../../Game/header/Piece.hpp"

class Bishop : public Piece {
public:
    Bishop(const Color color, const Position position) : Piece(color, position, 3, 'B'){}

    std::vector<std::string> getMoves();


    void makeMove(Board &board, const Position &target) override;
};

#endif // BISHOP_HPP
