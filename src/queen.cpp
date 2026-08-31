#include <iostream>
#include <string>
#include "piece.hpp"

class queen : public piece {
public:
    bool validMoveCheck(int& possX, int& possY) override {}

};
