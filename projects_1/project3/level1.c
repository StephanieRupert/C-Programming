#include <stdio.h>
#include <stdlib.h>


typedef struct board
    {
    char **spaces;
    int width;
    int height;
    } Board;

Board *
createBoard(Board width,Board height,Board **spaces,char **argv)
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

Board *
initalizeBoard(Board width,Board height,Board **spaces,Board *B)
    {
    int i,j;

    for (i = 0; i < B->height; i++)
        for (j = 0; j < B->width; j++)
            B->spaces[i][j] = ' ';

    return B;        
    }

Board *
displayBoard(Board width,Board height,Board *B)
    {
    int i,j;

    for (i = 0; i < B->height; i++)
        for (j = 0; j < B->width; j++)
            printf ("[%c]",B->spaces[i][j]);
        printf ("\n");
    
    return B;
    }

void
playerCount(void)
    {
    int players;
    printf("Enter the number of players: ");
    scanf("%d",&players);
    printf("You entered %d player(s)",players);
    }

int
main(int argc,char **argv)
    {
    //Board width;
    //Board height;
    //Board *B;

    playerCount();
    
    //displayBoard(width,height,B);
    return 0;
    }
