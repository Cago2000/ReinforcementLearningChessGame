#ifndef PIECE_HPP
#define PIECE_HPP

#include "../../Enums/Color.hpp"
#include "../../Structs/Position.hpp"
#include <vector>
#include <string>
#include "../../Utils/Utils.cpp"

class Piece {
protected:
    Color color;
    Position position;
    int value;

public:
    Piece(const Color color, const Position position, const int value)
        : color(color), position(position), value(value) {}
    std::vector<std::string> getMoves();

    Color getColor() const {
        return this->color;
    }
    Position getPosition() const{
        return this->position;
    }
    int getValue() const{
        return this->value;
    }
};

#endif // PIECE_HPP
