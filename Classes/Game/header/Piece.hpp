#ifndef PIECE_HPP
#define PIECE_HPP

#include "../../Enums/Color.hpp"
#include <vector>
#include <string>

class Piece {
protected:
    Color color;
    int value;

public:
    Piece();

    std::vector<std::string> getMoves();
    Color getColor();
    int getValue();
};

#endif // PIECE_HPP
