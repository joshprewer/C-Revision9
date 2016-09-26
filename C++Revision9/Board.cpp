//
//  Board.cpp
//  C++Revision9
//
//  Created by Josh Prewer on 24/09/2016.
//  Copyright © 2016 Josh Prewer. All rights reserved.
//

#include "Board.hpp"

Board::Board(Vector<Player> board)
{
    _board = board;
}

Move Board::FindBestMove()
{
    int rating;
    return findBestMove(0, rating);
}

Move Board::findBestMove(int depth, int & rating)
{
    Vector<Move> moveList;
    Move bestMove;
    int minRating = WINNING_POSITION + 1;
    generateMoveList(moveList);
    for (int i = 0; i < moveList.size(); i++)
    {
        changePlayer();
        makeMove(moveList[i]);
        int moveRating = evaluatePosition(depth + 1);
        if (moveRating < minRating)
        {
            bestMove = moveList[i];
            minRating = moveRating;
        }
        retractMove(moveList[i]);
    }
    rating = -minRating;
    return bestMove;
}

void Board::generateMoveList(Vector<Move> & moveList)
{
    for (int i = 0; i < _board.size(); i++)
    {
        Move move;
        move.position = i;
        if (_board[i] == SPACE)
            moveList.add(move);
    }
}


void Board::makeMove(Move move)
{
    _board.set(move.position, player);
}

void Board::retractMove(Move move)
{
    _board.set(move.position, player);
}


int Board::evaluatePosition(int depth)
{
    if (hasGameBeenWon() || depth >= MAX_DEPTH)
    {
        return evaluateStaticPosition();
    }
    
    int rating;
    findBestMove(depth, rating);
    return rating;
}

bool Board::hasGameBeenWon()
{
    int score;
    
    if (player == NAUGHT)
        score = 3;
    else score = 6;
    
    
    for (int a = 0; a < 9; a = a + 3)
    {
        for (int i = 0; i < 3; i++)
        {
            score -= _board[i + a];
        }
        
        if (score == 0)
        {
            return true;
            break;
        }
        score = 3;
    }
    
    for (int a = 0; a < 3; a++)
    {
        for (int i = 0; i < 9; i = i + 3)
        {
            score -= _board[i + a];
        }
        
        if (score == 0)
        {
            return true;
            break;
        }
        score = 3;
    }
    
    if (_board[0] + _board[4] + _board[8] == 3 || _board[2] + _board[4] + _board[6] == 3)
        return true;
    
    return false;
}

int Board::evaluateStaticPosition()
{
    if(hasGameBeenWon() == true)
        return WINNING_POSITION;
    
    else return 2;
}



