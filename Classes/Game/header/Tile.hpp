#ifndef TILE_H
#define TILE_H

#include <string>
#include <vector>
#include "Piece.hpp"

class Tile {
public:
    std::string name;
    Piece* occupiedBy;
    std::vector<Piece*> whiteLookedAt;
    std::vector<Piece*> blackLookedAt;

    Tile();
};

#endif // TILE_H
