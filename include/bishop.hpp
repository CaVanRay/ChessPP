#pragma once
#include "piece.hpp"

class bishop : public piece {
public:
  bool validMoveCheck(int& possX, int& possY) override;
};
