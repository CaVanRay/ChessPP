#include "rook.hpp"

bool rook::validMoveCheck(int& possX, int& possY) {
    if (possX == xCoordinate || possY == yCoordinate)
        return true;
    return false;
}
