//
//  Board.hpp
//  C++Revision9
//
//  Created by Josh Prewer on 24/09/2016.
//  Copyright © 2016 Josh Prewer. All rights reserved.
//

#ifndef Board_hpp
#define Board_hpp

#include <stdio.h>
#include "vector.h"
#include "minimax.h"

enum Player { NAUGHT, CROSS, SPACE};

class Board{
    
public:
    
    Board(Vector<Player> board);
    Move FindBestMove();

    bool hasGameBeenWon();
    
private:
    
    Vector<Player> _board;
    
    Player player;
    
    Move findBestMove(int depth, int & rating);
    
    void generateMoveList(Vector<Move> & moveList);
    
    void makeMove(Move move);
    void retractMove(Move move);
    
    int evaluatePosition(int depth);
    int evaluateStaticPosition();
    
    
    void changePlayer();

    
};




#endif /* Board_hpp */
