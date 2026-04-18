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
        std::cout << "-----+";
    }
    std::cout << std::endl;
}

void spaces(const int& spaces, const int& row, bool evenLine) {
    std::cout << "|";
    for (int i = 0; i < spaces; i++) {
        
    }
    std::cout << std::endl;
}

int main()
{
    char cont = 'Y';
    int boardSize = 8;
    bool evenLine;
    do {
        horizontalOutlines(boardSize);
        for (int s = 0; s < boardSize; s++) {
            for (int t = 0; t < 3; t++) {
                if(s % 2 == 0){
                    evenLine = true;
                }else{
                    evenLine = false;
                }
                spaces(boardSize, t, evenLine);
            }
            horizontalOutlines(boardSize);
        }
        std::cout << std::endl << std::endl;
        std::cout << "Would you like to play again? (Y/N)";
        std::cin >> cont;
    } while (cont == 'Y');

    return 0;
}
