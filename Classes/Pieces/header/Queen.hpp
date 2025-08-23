#ifndef QUEEN_HPP
#define QUEEN_HPP

#include <vector>
#include <string>
#include "../../Game/header/Piece.hpp"

class Queen : public Piece {
public:
    Queen() : Piece() {}

    std::vector<std::string> getMoves();
};

#endif // QUEEN_HPP
