#ifndef ROOK_HPP
#define ROOK_HPP

#include <vector>
#include <string>
#include "../../Game/header/Piece.hpp"

class Rook : public Piece {
public:
    Rook() : Piece() {}

    std::vector<std::string> getMoves();
};

#endif // ROOK_HPP
