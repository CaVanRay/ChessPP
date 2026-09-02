#pragam once
#include "piece.hpp"

class pawn : public piece {
public:
  bool validMoveCheck(int& possX, int& possY) override;
};
