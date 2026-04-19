/*
Title: basicBoard.cpp
Author: Cavan Ray Theiss\

Notepad:
Removing the peices and focusing on the board for now
I want to figure out a way to keep track of the Red and Black squares
without having to hard code every fucking space

*/

#include <iostream>

void horizontalOutlines(const int& edges) {
    std::cout << "+";
    for (int i = 0; i < edges; i++) {
        std::cout << "-------+";
    }
    std::cout << std::endl;
}

void spaces(const int& spaces, const int& rowInBoard, const int& rowInSpace) {

    bool spaceIsRed = true;
    std::cout << "|";

    if (rowInBoard % 2 == 0) {
        spaceIsRed = true;
    }
    else {
        spaceIsRed = false;
    }

    for (int i = 0; i < spaces; i++) {

        if (spaceIsRed) {
            std::cout << "///////|";
            spaceIsRed = false;
        }
        else {
            std::cout << "       |";
            spaceIsRed = true;
        }

    }
    std::cout << std::endl;
}

int main()
{
    char cont = 'Y';
    int boardSize = 8;
    do {
        horizontalOutlines(boardSize);
        for (int s = 0; s < boardSize; s++) {
            for (int t = 0; t < 3; t++) {
                spaces(boardSize, s, t);
            }
            horizontalOutlines(boardSize);
        }
        std::cout << std::endl << std::endl;
        std::cout << "Would you like to play again? (Y/N)";
        std::cin >> cont;
    } while (cont == 'Y');

    return 0;
}
