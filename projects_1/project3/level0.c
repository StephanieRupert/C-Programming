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
//createBoard(Board *width,Board *height,Board **spaces,char **argv)
    {
    //Board *B = malloc(sizeof(struct board));
    Board *B = malloc(sizeof(Board));

    B->width = atoi(argv[1]);
    B->height = atoi(argv[2]);

    B->spaces = malloc(sizeof(char *) * B->width);
    
    int w;
    for (w = 0; w < B->width; ++w)
        {
        //B->spaces[w] = malloc(sizeof(char *) * B->height);
        B->spaces[w] = malloc(sizeof(char) * B->height);
        }

    return B; 
    }

/*Board *
displayBoard(Board *width,Board *height)
    {
    int i,j;

    for (i = 0; i < width; i++)
        { 
        printf ("+---+---+---+---+---+---+---+");
        printf ("\n");
        }          
    
    for (j = 0; j < height; j++)
        {
        printf ("|   ");
        printf("\n");
        }
    }*/

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
    //struct Board *width;
    //struct Board *height;

    playerCount();
    
    //displayBoard(width,height);
    return 0;
    }
