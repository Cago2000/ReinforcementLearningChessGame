#ifndef PIECE_HPP
#define PIECE_HPP

#include "../../Enums/Color.hpp"
#include "../../Structs/Position.hpp"
#include <vector>
#include <string>


class Board;

class Piece {
protected:
    Color color;
    Position position;
    int value;
    char symbol;

public:
    Piece(const Color color, const Position position, const int value, const char symbol)
        : color(color), position(position), value(value), symbol(symbol) {}

    virtual std::vector<std::string> getMoves() = 0;
    virtual void makeMove(Board& board, const Position& target) = 0;

    Color getColor() const {
        return this->color;
    }

    Position getPosition() const{
        return this->position;
    }

    int getValue() const{
        return this->value;
    }

    char getSymbol() const {
        return this->symbol;
    }
};

#endif // PIECE_HPP
