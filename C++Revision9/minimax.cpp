//
//  minimax.cpp
//  C++Revision9
//
//  Created by Josh Prewer on 22/09/2016.
//  Copyright © 2016 Josh Prewer. All rights reserved.
//

/*#include "minimax.h"

Move findBestMove(Vector<int> & board)
{
    int rating;
    return findBestMove(0, rating, board);
}

Move findBestMove(int depth, int & rating, Vector<int> & board)
{
    Vector<Move> moveList;
    Move bestMove;
    int minRating = WINNING_POSITION + 1;
    Player player;
    generateMoveList(moveList, board);
    for (int i = 0; i < moveList.size(); i++)
    {
        makeMove(moveList[i], board, player);
        int moveRating = evaluatePosition(depth + 1, board);
        if (moveRating < minRating)
        {
            bestMove = moveList[i];
            minRating = moveRating;
        }
        retractMove(moveList[i], board, player);
    }
    rating = -minRating;
    return bestMove;
}

void generateMoveList(Vector<Move> & moveList, Vector<int> & board)
{
    for (int i = 0; i < board.size(); i++)
    {
        Move move;
        move.position = i;
        if (board[i] == 0)
            moveList.add(move);
    }
}

void makeMove(Move move, Vector<int> & board, Player player)
{
    board.set(move.position, player);
}

void retractMove(Move move, Vector<int> & board, Player player)
{
    board.set(move.position, player);
}

int evaluatePosition(int depth, Vector<int> & board)
{
    if (hasGameBeenWon(board) || depth >= MAX_DEPTH)
    {
        return evaluateStaticPosition(board);
    }
    
    int rating;
    findBestMove(depth, rating, board);
    return rating;
}

bool hasGameBeenWon(Vector<int> & board)
{
    int score = 0;
    
    for (int a = 0; a < 9; a = a + 3)
    {
        for (int i = 0; i < 3; i++)
        {
            score += board[i + a];
        }
        
        if (score == 3)
        {
            return true;
            break;
        }
        score = 0;
    }
    
    for (int a = 0; a < 3; a++)
    {
        for (int i = 0; i < 9; i = i + 3)
        {
            score += board[i + a];
        }
        
        if (score == 3)
        {
            return true;
            break;
        }
        score = 0;
    }

    if (board[0] + board[4] + board[8] == 3 || board[2] + board[4] + board[6] == 3)
        return true;
    
    return false;
}

int evaluateStaticPosition(Vector<int> & board)
{
    if(hasGameBeenWon(board) == true)
        return WINNING_POSITION;
    
    else return 2;
}


*/
