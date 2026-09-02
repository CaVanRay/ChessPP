#pragma once
#include "piece.hpp"

class rook : public piece {
public:
  bool validMoveCheck(int& possX, int& possY) override;
};
