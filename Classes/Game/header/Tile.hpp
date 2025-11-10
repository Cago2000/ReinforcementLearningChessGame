#ifndef TILE_H
#define TILE_H

#include "Piece.hpp"

class Piece;

class Tile {
private:
    Piece* occupiedBy;
    Position position;
public:

    Tile(): occupiedBy(nullptr), position(0, 0) {}
    explicit Tile(const Position position): occupiedBy(nullptr), position(position) {}
    Tile(Piece* occupiedBy, const Position pos): occupiedBy(occupiedBy), position(pos) {}

    Piece* getPiece() const {return occupiedBy;}
    void setPiece(Piece* piece){occupiedBy = piece;}
    void removePiece(){occupiedBy = nullptr;}
    bool isOccupied() const {return occupiedBy != nullptr;}
};

#endif // TILE_H
