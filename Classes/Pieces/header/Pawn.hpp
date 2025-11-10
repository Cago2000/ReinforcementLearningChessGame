#ifndef PAWN_HPP
#define PAWN_HPP

#include <vector>
#include <string>
#include "../../Game/header/Piece.hpp"

class Pawn : public Piece {
private:
    bool hasMoved;
public:
    Pawn(const Color color, const Position pos, const bool hasMoved)
        : Piece(color, pos, 1, 'P'), hasMoved(hasMoved) {}

    bool getHasMoved() const { return hasMoved;}
    void setHasMoved(const bool moved) { hasMoved = moved; }

    std::vector<std::string> getMoves();
    void makeMove(Board& board, const Position& target) override;
};

#endif // PAWN_HPP
