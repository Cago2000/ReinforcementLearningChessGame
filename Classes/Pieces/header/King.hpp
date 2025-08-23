#ifndef KING_HPP
#define KING_HPP

#include <vector>
#include <string>
#include "../../Game/header/Piece.hpp"

class King : public Piece {
public:
    King() : Piece() {}

    std::vector<std::string> getMoves();
};

#endif // KING_HPP
