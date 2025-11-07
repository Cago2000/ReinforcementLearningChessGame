#include "Classes/Game/header/ChessGame.hpp"
#include "Classes/Game/header/Board.hpp"
#include <iostream>

using namespace std;

int main() {
    ChessGame game = ChessGame();
    game.getBoard()->printBoard();
    return 0;
}

