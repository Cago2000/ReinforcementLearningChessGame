#include "../header/Board.hpp"
#include "../header/Tile.hpp"
#include "../header/Piece.hpp"
#include "../../Pieces/header/Pawn.hpp"
#include "../../Pieces/header/Rook.hpp"
#include "../../Pieces/header/Knight.hpp"
#include "../../Pieces/header/Bishop.hpp"
#include "../../Pieces/header/Queen.hpp"
#include "../../Pieces/header/King.hpp"
#include "../../Pieces/header/Empty.hpp"
#include "../../Pieces/header/Pawn.hpp"
#include "../../Enums/Color.hpp"
#include <iostream>

void Board::initTiles() {
    tiles.resize(SIZE, std::vector<Tile>(SIZE, Tile(nullptr, Position(0,0))));

    for (int y = 0; y < SIZE; ++y) {
        for (int x = 0; x < SIZE; ++x) {
            tiles[y][x] = Tile(nullptr, Position(x, y));
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

    // White pieces
    tiles[0][0].setPiece(new Rook(Color::WHITE, Position(0, 0)));
    tiles[0][1].setPiece(new Knight(Color::WHITE, Position(1, 0)));
    tiles[0][2].setPiece(new Bishop(Color::WHITE, Position(2, 0)));
    tiles[0][3].setPiece(new Queen(Color::WHITE, Position(3, 0)));
    tiles[0][4].setPiece(new King(Color::WHITE, Position(4, 0)));
    tiles[0][5].setPiece(new Bishop(Color::WHITE, Position(5, 0)));
    tiles[0][6].setPiece(new Knight(Color::WHITE, Position(6, 0)));
    tiles[0][7].setPiece(new Rook(Color::WHITE, Position(7, 0)));

    // Black pieces
    tiles[7][0].setPiece(new Rook(Color::BLACK, Position(0, 7)));
    tiles[7][1].setPiece(new Knight(Color::BLACK, Position(1, 7)));
    tiles[7][2].setPiece(new Bishop(Color::BLACK, Position(2, 7)));
    tiles[7][3].setPiece(new Queen(Color::BLACK, Position(3, 7)));
    tiles[7][4].setPiece(new King(Color::BLACK, Position(4, 7)));
    tiles[7][5].setPiece(new Bishop(Color::BLACK, Position(5, 7)));
    tiles[7][6].setPiece(new Knight(Color::BLACK, Position(6, 7)));
    tiles[7][7].setPiece(new Rook(Color::BLACK, Position(7, 7)));

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

void Board::printBoard() const {
    for (int y = SIZE - 1; y >= 0; --y) {
        for (int x = 0; x < SIZE; ++x) {
            const Tile& tile = tiles.at(y).at(x);
            if (tile.isOccupied()) {
                const Piece* piece = tile.getPiece();
                std::string tmp_symbol = (piece->getColor() == Color::WHITE)
                                     ? std::string(1, toupper(piece->getSymbol()))
                                     : std::string(1, tolower(piece->getSymbol()));
                std::cout << tmp_symbol << " ";
            } else {
                std::cout << ". ";
            }
        }
        std::cout << std::endl << std::endl;
    }
}
