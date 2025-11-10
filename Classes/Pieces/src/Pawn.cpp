#include "../header/Pawn.hpp"
#include <iostream>
#include <string>
#include "../../Game/header/Board.hpp"
#include "../../Game/header/Tile.hpp"

std::vector<std::string> Pawn::getMoves() {
    std::vector<std::string> moves;

    // Safety check
    if (color == Color::NONE)
        return moves;

    int direction = (color == Color::WHITE) ? 1 : -1;
    int startRow  = (color == Color::WHITE) ? 1 : 6;

    int x = position.x;
    int y = position.y;

    // --- Forward 1 square ---
    if (y + direction >= 0 && y + direction < 8)
        moves.push_back(Position(x, y + direction).toNotation());

    // --- Forward 2 squares from start row ---
    if (y == startRow && y + 2 * direction >= 0 && y + 2 * direction < 8)
        moves.push_back(Position(x, y + 2 * direction).toNotation());

    // --- Capture diagonally left ---
    if (x - 1 >= 0 && y + direction >= 0 && y + direction < 8)
        moves.push_back(Position(x - 1, y + direction).toNotation());

    // --- Capture diagonally right ---
    if (x + 1 < 8 && y + direction >= 0 && y + direction < 8)
        moves.push_back(Position(x + 1, y + direction).toNotation());

    return moves;
}

void Pawn::makeMove(Board& board, const Position& target) {
    std::vector<std::string> legalMovesStr = getMoves();
    bool isLegal = false;

    for (const auto& moveStr : legalMovesStr) {
        if (Position::fromNotation(moveStr) == target) {
            isLegal = true;
            break;
        }
    }

    if (!isLegal) {
        std::cout << "Illegal move for pawn!\n";
        return;
    }

    if (target.x < 0 || target.x >= 8 || target.y < 0 || target.y >= 8)
        return;

    Tile& currentTile = board.getTile(position);
    Tile& targetTile  = board.getTile(target);

    if (targetTile.isOccupied()) {
        const Piece* captured = nullptr;
        captured = targetTile.getPiece();
        if (captured->getColor() == color) {
            return;
        }
    }

    targetTile.setPiece(this);
    currentTile.setPiece(nullptr);
    position = target;
}
