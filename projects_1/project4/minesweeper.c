//Stephanie Rupert
//July 29, 2015
//minesweeper.c contains the main function

#include <stdio.h>
#include "game.h"
#include "io.h"


int
main(int argc,char **argv)
    {
    int height = getheight(argv);
    int width = getwidth(argv);

    create(height,width);

    placebombs(argv);

    display(height,width);
    return 0;
    }

