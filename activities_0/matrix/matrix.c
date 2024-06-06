#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int **
makeIntegerMatrix(int rowCount,int columnCount)
    {
    int i;
    int **backbone;

    //note: tests for malloc failure omitted

    backbone = malloc(sizeof(int *) * rowCount);
    for (i = 0; i < rowCount; ++i)
        backbone[i] = malloc(sizeof(int) * columnCount);

    return backbone;
    }

void
inputMatrix(int **backbone,int rowCount,int columnCount)
    {
    int r,c;
    for (r = 0; r < rowCount; ++r)
        {
        for (c = 0; c < columnCount; ++c)
            {


/*void
transposeSquare(int **m,int size)
    {
    int r,c,temp;

    for (r = 0; r < size; ++r)
        {
        for (c = 0; c < size; ++c)
            {
            temp = m[r][c];
            m[r][c] =  m[c][r]
            m[c][r] = temp;
            }
        }
    }
*/

int
main(int argc,char **argv)
    {
    int **m = makeIntegerMatrix(2,2); 
    int r,c;

    for (r = 1; r < rowCount; ++r)
        {
        for (c = 1; c < columnCount; ++c)
            m[r][c] = 
        } 
    return 0;
    }
