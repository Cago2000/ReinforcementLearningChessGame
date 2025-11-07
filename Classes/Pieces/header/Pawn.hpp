#ifndef PAWN_HPP
#define PAWN_HPP

#include <vector>
#include <string>
#include "../../Game/header/Piece.hpp"

class Pawn : public Piece {
private:
    bool hasMoved;
public:
    Pawn();

    Pawn(const Color color, const Position pos, const bool hasMoved)
        : Piece(color, pos, 1), hasMoved(hasMoved) {}

    bool getHasMoved() const { return hasMoved;}
    void setHasMoved(const bool moved) { hasMoved = moved; }

    std::vector<std::string> getMoves();
};

#endif // PAWN_HPP
