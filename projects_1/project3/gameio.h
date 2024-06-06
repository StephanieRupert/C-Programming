//Stephanie Rupert
//Project 3
//07/23/2015
//gameio.h contains the prototypes for the functions in gameio.c

typedef struct board
    {
    char **spaces;
    int width;
    int height;
    } Board;

Board *createBoard(char **argv);
Board *initalizeBoard(Board *B);
Board *displayBoard(Board *B);
void playerCount(void);
