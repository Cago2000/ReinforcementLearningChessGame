#ifndef BOARD_HPP
#define BOARD_HPP

#include <vector>
#include "Tile.hpp"
#include "Piece.hpp"

class Board {
private:
    static constexpr int SIZE = 8;

public:
    std::vector<std::vector<Tile>> tiles;

    Board();

    void initTiles();

    void initPieces();

    Tile& getTile(int x, int y);
    Tile& getTile(Position pos);

    bool isOccupied(int x, int y) const;
    bool isOccupied(Position pos) const;

    void printBoard();
};

#endif // BOARD_HPP
