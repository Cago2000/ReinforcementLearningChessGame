#include <string>

struct Position {
    int x;
    int y;

    explicit Position(int x = 0, int y = 0) : x(x), y(y) {}

    bool operator==(const Position& other) const {
        return x == other.x && y == other.y;
    }

    bool operator!=(const Position& other) const {
        return !(*this == other);
    }

    std::string toNotation() const {
        char file = 'a' + x;
        char rank = '1' + y;
        return std::string() + file + rank;
    }

    static Position fromNotation(const std::string& notation) {
        if (notation.size() != 2)
            return Position(-1, -1); // invalid
        char file = std::tolower(notation[0]);
        char rank = notation[1];
        int x = file - 'a';
        int y = rank - '1';
        return Position(x, y);
    }

    bool isInBounds() const {
        return x >= 0 && x < 8 && y >= 0 && y < 8;
    }
};
