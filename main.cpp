#include "Classes/Game/header/ChessGame.hpp"
#include "Classes/Game/header/Board.hpp"
#include "Classes/Game/header/Piece.hpp"
#include <iostream>

using namespace std;

int main() {
    const auto game = ChessGame();
    game.getBoard()->printBoard();
    Piece* movingPiece = game.getBoard()->getTile(Position(0, 1)).getPiece();
    movingPiece->makeMove(*game.getBoard(), Position(0, 3));
    game.getBoard()->printBoard();
    movingPiece->makeMove(*game.getBoard(), Position(0, 5));
    game.getBoard()->printBoard();
    return 0;
}

