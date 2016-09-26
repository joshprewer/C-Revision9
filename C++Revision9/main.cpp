//
//  main.cpp
//  C++Revision9
//
//  Created by Josh Prewer on 22/09/2016.
//  Copyright © 2016 Josh Prewer. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include "vector.h"
#include "console.h"
#include "minimax.h"
#include "Board.hpp"

using namespace std;

void drawBoard(Vector<char> & pos);
bool hasGameBeenWon(Vector<char> & pos);
void computerTurn(Vector<int> & pos);
void userTurn(Vector<char> & pos);



int main() {
    
    
    Vector<char> data = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    Vector<Player> pos = {SPACE, SPACE, SPACE, SPACE, SPACE, SPACE, SPACE, SPACE, SPACE};
    
    cout << "Welcome to naughts and crosses.\n";
    cout << "I'll be X and you'll be O.\n";
    cout << "The board will be numbered as shown\n" << endl;
    
    drawBoard(data);
    data.clear();
    data.ensureCapacity(9);

    Board board(pos);
    
    
    while (true)
    {
//        drawBoard
//        userTakeTurn
//        drawBoad
        board.FindBestMove();
        
        break;
    }
    
    return 0;
}


void drawBoard(Vector<char> & pos)
{
    int a = 0;
    
    for (int i = 0; i <= 2; i++)
    {
        cout << " " << pos[a++] << " |";
        cout << setw(2) << pos[a++] << " |";
        cout << setw(2) << pos[a++] << " " << endl;
        if (i == 2)
        {
            cout << endl;
            break;
        }
        else
        cout << "---+---+---" << endl;
    }
}

