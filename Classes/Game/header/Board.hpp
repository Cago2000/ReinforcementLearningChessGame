#ifndef BOARD_HPP
#define BOARD_HPP
#include <vector>
#include "Tile.hpp"

class Board {
public:
    std::vector<std::vector<Tile>> tiles;

    Board() : tiles() {};

    bool isOccupied();
};

#endif // BOARD_HPP
