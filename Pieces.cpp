//
//  Pieces.cpp
//  C++Revision9
//
//  Created by Josh Prewer on 25/09/2016.
//  Copyright © 2016 Josh Prewer. All rights reserved.
//

#include "Pieces.hpp"

void Pieces::changePlayer()
{
    if (player == NAUGHT)
        player = CROSS;
    else player = NAUGHT;
}