#include "header/Pawn.hpp"
#include <cmath>


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
