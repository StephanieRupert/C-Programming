//Stephanie Rupert
//July 29, 2015
//io.c contains the functions to print the board

#include <stdio.h>
#include "game.h"


//print out the board
void
display(int height,int width)
    {
    int i,j;

    printf("    ");
    for (i = 0; i < height; ++i)
        printf("%d ",i);
    for (j = 0; j < width; ++j)
        printf("\n %d ",j);
    }

