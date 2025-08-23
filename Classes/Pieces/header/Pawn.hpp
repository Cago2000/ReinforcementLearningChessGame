#ifndef PAWN_HPP
#define PAWN_HPP

#include <vector>
#include <string>
#include "../../Game/header/Piece.hpp"

class Pawn : public Piece {
public:
    Pawn() : Piece() {}

    std::vector<std::string> getMoves();
};

#endif // PAWN_HPP
