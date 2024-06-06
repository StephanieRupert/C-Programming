
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "scanner.h"

typedef struct Maze {
    int height,width,top;
    char **maze;
} Maze;

// Find these below and implement them
int  solve(Maze *,int,int);
Maze *readMaze(FILE*);

size_t bufferSize;
char *buffer;


// Sleep in milliseconds
void milli( int ms ) {
    while( ms > 0 ) {
        usleep( 1000 );
        --ms;
    }
}

void freeMaze( Maze *m ) {
    int row;
    for( row = 0 ; row < m->height ; ++row ) {
        free( m->maze[row] );
    }
    free( m->maze );
    free(m);
}

// Print out the maze
void display( Maze *maze , int row , int col ) {
    system( "clear" );
    int r,c;
    int pos = 0;
    for( r = 0 ; r < maze->height ; ++r, ++pos ) {
        for( c = 0; c < maze->width ; ++c, ++pos ) {
            if( r == row && col == c ) {
                buffer[pos] = 'X';
            }else if( maze->maze[r][c] == '%' ) {
                buffer[pos] = '.';
            }else {
                buffer[pos] = maze->maze[r][c];
            }
        }
        buffer[pos] = '\n';
    }
    printf( "%s" , buffer );
    milli(100);
}

int main( int argc, char* argv[] ) {

    // Load the maze
    FILE *fp = fopen( argv[1] , "r" );
    Maze *maze = readMaze( fp );
    fclose( fp );

    // Allocate buffer to lessen flickering
    bufferSize = sizeof(char) * (maze->height * (maze->width + 1) + 1);
    buffer = malloc(bufferSize);
    buffer[bufferSize - 1] = '\0';

    // Solve
    solve( maze , 0 , maze->top );

    // Release resources
    freeMaze( maze );
    free(buffer);
    return 0;
}

/*               IMPLEMENT EVERYTHING BELOW HERE               */

//  Return false if couldn't find a path
//  from the given row/col.  Otherwise
//  return true.
//
//      When you reach a square drop a crumb (The character '*')
//
//      When you leave a square without finding the exit mark as no 
//          solution (The character '%')
//
int  solve( Maze *maze , int row , int col ) {
    /* Put code here */
    return 0;
}

// Load the maze from a file, the first two integers are
// the height and width respectively
Maze *readMaze( FILE *fp ) {
    Maze *maze = NULL;
    
    /* Put code here */

    return maze;
}
