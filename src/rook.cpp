#include <iostream>
#include <string>
#include <cmath>
#include "piece.hpp"

class rook : public piece {
public:
    bool validMoveCheck(int& possX, int& possY) override {
        if(std::abs(possX - xCoordinate) == std::abs(possY - yCoordinate)){
            return true;
        }else{
            return false;
        }
    }

};
