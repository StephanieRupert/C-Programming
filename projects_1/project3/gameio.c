//Stephanie Rupert
//Project 3
//07/23/2015
//gameio.c contains all the functions that allocate and initalize the board and interact
//with the player

#include <stdio.h>
#include <stdlib.h>
#include "gameio.h"


//Allocate the board
Board *
createBoard(char **argv)
    {
    Board *B = malloc(sizeof(Board));

    B->width = atoi(argv[1]);
    B->height = atoi(argv[2]);

    B->spaces = malloc(sizeof(char *) * B->width);

    int w;
    for (w = 0; w < B->width; ++w)
        {
        B->spaces[w] = malloc(sizeof(char) * B->height);
        }
    return B;
    }

//Set all spots on the board to a space
Board *
initalizeBoard(Board *B)
    {
    int i,j;

    for (i = 0; i < B->height; i++)
        for (j = 0; j < B->width; j++)
            B->spaces[i][j] = ' ';

    return B;
    }

//Print the board
Board *
displayBoard(Board *B)
    {
    int i,j;

    for (i = 0; i < B->height; ++i)
        {
        for (j = 0; j < B->width; ++j)
            printf ("[%c]",B->spaces[i][j]);
        printf ("\n");
        }
    return B;
    }

//Asks for the amount of players
void
playerCount(void)
    {
    int players;
    printf("Enter the number of players: ");
    scanf("%d",&players);
    //printf("You entered %d player(s)",players);
    }

