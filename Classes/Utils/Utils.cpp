#include <string>

std::string coordToNotation(const int x, const int y) {
    char file = 'a' + x;
    char rank = '1' + y;
    return std::string() + file + rank;
}
