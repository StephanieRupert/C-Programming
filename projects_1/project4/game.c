//Stephanie Rupert
//July 29, 2015
//game.c contains the functions to allocate the board and place mines

#include <stdio.h>
#include <stdlib.h>
#include "io.h"


//allocate the board
int **
create(int height,int width)
    {
    int i;
    int **matrix = malloc(sizeof(int *) * height);

    for (i = 0; i < height; ++i)
        matrix[i] = malloc(sizeof(int) * width);

    return matrix;
    }

//get board height
int
getheight(char **argv)
    {
    int height = atoi(argv[1]);
    return height;
    }

//get board width
int
getwidth(char **argv)
    {
    int width = atoi(argv[2]);
    return width;
    }

//place bombs on the board
void
placebombs(char **argv)
    {
    int i,j;
    int count;
    int height = getheight(argv);
    int width = getwidth(argv);

    count = atoi(argv[3]);
    
    int **matrix = malloc(sizeof(int *) * height);
    for (i = 0; i < height; ++i)
        matrix[i] = malloc(sizeof(int) * width);
    
    for (i = 0; i < count; ++i)
        for (j = 0; j < count; ++j)
            matrix[i][j] = '*';
    }

