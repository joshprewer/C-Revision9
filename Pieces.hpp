//
//  Pieces.hpp
//  C++Revision9
//
//  Created by Josh Prewer on 25/09/2016.
//  Copyright © 2016 Josh Prewer. All rights reserved.
//

#ifndef Pieces_hpp
#define Pieces_hpp

#include <stdio.h>

class Pieces
{
public:
    
    enum car
    {
        NAUGHT,
        CROSS,
        SPACE
    };
    
    Pieces::car Player()
    {
        return player;
    }
    
    void changePlayer();
    
private:
    
    car player;
};
#endif /* Pieces_hpp */
