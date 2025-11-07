#ifndef TILE_H
#define TILE_H

#include <string>
#include "Piece.hpp"

class Tile {
private:
    Piece* occupiedBy;
    Position position;
public:

    Tile();
    Tile(Piece* occupiedBy, Position pos);

    Piece* getPiece() const {return occupiedBy;}
    void setPiece(Piece* piece){occupiedBy = piece;}
    void removePiece(){occupiedBy = nullptr;}
    bool isOccupied() const {return occupiedBy != nullptr;}
};

#endif // TILE_H
