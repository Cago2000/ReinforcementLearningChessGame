#ifndef KNIGHT_HPP
#define KNIGHT_HPP

#include <vector>
#include <string>
#include "../../Game/header/Piece.hpp"

class Knight : public Piece {
public:
    Knight() : Piece() {}

    std::vector<std::string> getMoves();
};

#endif // KNIGHT_HPP
