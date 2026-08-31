#pragma once
#include <string>

class piece {
public:
  int xCoordinate, yCoordinate;
  std::string color;

virtual bool validMoveCheck(int& possX, int& possY) = 0;
};
