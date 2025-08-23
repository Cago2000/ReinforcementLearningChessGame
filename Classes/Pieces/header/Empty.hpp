#ifndef EMPTY_HPP
#define EMPTY_HPP

#include <vector>
#include <string>
#include "../../Game/header/Piece.hpp"

class Empty : public Piece {
public:
    Empty() : Piece() {}

    std::vector<std::string> getMoves();
};

#endif // EMPTY_HPP
