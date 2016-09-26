//
//  minimax.hpp
//  C++Revision9
//
//  Created by Josh Prewer on 22/09/2016.
//  Copyright © 2016 Josh Prewer. All rights reserved.
//

#ifndef minimax_h
#define minimax_h

#include "vector.h"


struct Move
{
    int position;
};

const int WINNING_POSITION = 1000;
const int LOSING_POSITION = -WINNING_POSITION;
const int MAX_DEPTH = 3;

/*//enum Player {Naughts = 1, Crosses = 2};

//Vector<int> board;

Move findBestMove(Vector<int> & board);
Move findBestMove(int depth, int & rating, Vector<int> & board);


void generateMoveList(Vector<Move> & moveList, Vector<int> & board);

void makeMove(Move move, Vector<int> & board, Player player);
void retractMove(Move move, Vector<int> & board, Player player);

int evaluatePosition(int depth, Vector<int> & board);
int evaluateStaticPosition(Vector<int> & board);

bool hasGameBeenWon(Vector<int> & board);*/


#endif /* minimax_hpp */
