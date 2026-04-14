/*
Just getting a basic board with pieces to work in the console

this isn't even chess yet, just dots on a board

will get an actually gui later after the logic is working
*/

#include <iostream>

class piece {

};

struct Node {

    Node* up;
    Node* down;
    Node* prev;
    Node* next;
    int column;
    char row;
    bool occupied;
    piece* occupant;

};

void horizontal(const int& edges) {
    std::cout << "+";
    for (int i = 0; i < edges; i++) {
        std::cout << "-----+";
    }
    std::cout << std::endl;
}

void vertical(const int& spaces) {
    std::cout << "|";
    for (int i = 0; i < spaces; i++) {
        std::cout << "     |";
    }
    std::cout << std::endl;
}

int main()
{
    char cont = 'Y';
    int boardSize = 8;
    do {
        horizontal(boardSize);
        for (int s = 0; s < boardSize; s++) {
            for (int t = 0; t < 3; t++) {
                vertical(boardSize);
            }
            horizontal(boardSize);
        }
        std::cout << std::endl << std::endl;
        std::cout << "Would you like another board? (Y/N)";
        std::cin >> cont;
    } while (cont == 'Y');

    return 0;
}
