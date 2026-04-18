/*
Title: basicBoard.cpp
Author: Cavan Ray Theiss\

Notepad:
Removing the peices and focusing on the board for now

*/

#include <iostream>

void horizontalOutlines(const int& edges) {
    std::cout << "+";
    for (int i = 0; i < edges; i++) {
        std::cout << "-----+";
    }
    std::cout << std::endl;
}

void spaces(const int& spaces, const int& column, const int& row) {
    std::cout << "|";
    for (int i = 0; i < spaces; i++) {
        if (column == 0 && row == 1) {
            std::cout << "  X  |";
        }
        else if (column == 7 && row == 1) {
            std::cout << "  O  |";
        }
        else {
            std::cout << "     |";
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
