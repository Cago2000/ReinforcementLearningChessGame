#ifndef BISHOP_HPP
#define BISHOP_HPP

#include <vector>
#include <string>
#include "../../Game/header/Piece.hpp"

class Bishop : public Piece {
public:
    Bishop() : Piece() {}

    std::vector<std::string> getMoves();
};

#endif // BISHOP_HPP
