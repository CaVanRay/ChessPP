/*****************************************************
Date: 08/29/2026
Title: pieces.cpp
Author: Cavan Ray Theiss
Description:
just a collection of classes for chess pieces.
more for practicing classes than anything else.

things to track:

row & column - current position
possible movements


*****************************************************/
class piece {
public:
    int xCoordinate, yCoordinate;
    string color;

    virtual bool validMoveCheck(){}

};

class pawn : public piece {

    bool validMoveCheck(int& possX, int& possY) override {}

};
