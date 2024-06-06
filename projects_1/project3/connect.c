//Stephanie Rupert
//Project 3
//07/23/2015
//connect.c contains the main function only

#include <stdio.h>
#include <stdlib.h>
#include "gameio.h"


int
main(int argc,char **argv)
    {
    Board *B;
    B = createBoard(argv);

    playerCount();
    initalizeBoard(B);
    displayBoard(B);

    return 0;
    }
