#include "../header/Board.hpp"
#include "../header/Tile.hpp"
#include "../header/Piece.hpp"
#include "../../Pieces/header/Pawn.hpp"
#include "../Enums/Color.hpp"
#include <iostream>

Board::Board() {
    initTiles();
    initPieces();
}

void Board::initTiles() {
    tiles.resize(SIZE);
    for (int y = 0; y < SIZE; ++y) {
        tiles[y].reserve(SIZE);
        for (int x = 0; x < SIZE; ++x) {
            tiles[y].emplace_back(nullptr, Position(x, y));
        }
    }
}

void Board::initPieces() {
    for (int x = 0; x < SIZE; ++x) {
        auto pawn = new Pawn(Color::WHITE, Position(x, 1), false);
        tiles[1][x].setPiece(pawn);
    }

    for (int x = 0; x < SIZE; ++x) {
        auto pawn = new Pawn(Color::BLACK, Position(x, 1), false);
        tiles[6][x].setPiece(pawn);
    }

    // TODO: Add other pieces (Rooks, Knights, Bishops, Queen, King)
}

Tile& Board::getTile(int x, int y) {
    return tiles[y][x];
}

Tile& Board::getTile(Position pos) {
    return tiles[pos.y][pos.x];
}

bool Board::isOccupied(int x, int y) const {
    return tiles[y][x].isOccupied();
}

bool Board::isOccupied(Position pos) const {
    return tiles[pos.y][pos.x].isOccupied();
}

void Board::printBoard() {
    for (int y = SIZE - 1; y >= 0; --y) {
        for (int x = 0; x < SIZE; ++x) {
            if (tiles[y][x].isOccupied())
                std::cout << "P "; // Simplified: P = any piece
            else
                std::cout << ". ";
        }
        std::cout << "\n";
    }
}
