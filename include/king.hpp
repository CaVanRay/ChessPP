#pragma once
#include "piece.hpp"

class king : public piece {
public:
  bool validMoveCheck(int& possX, int& possY) override;
};
