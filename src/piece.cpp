#include <iostream>
#include <string>
#include "piece.cpp"

class piece {
public:
    int xCoordinate, yCoordinate;
    std::string color;

    virtual bool validMoveCheck(int& possX, int& possY) = 0;

};
