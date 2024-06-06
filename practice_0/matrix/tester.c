#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


//int q[10];  -? formal becomes int (*q) -> int *q

void
displayMatrix(int **m,int rows,int cols)
    {
    int i,j;
    for (i = 0; i < rows; ++i)
        {
        for (j = 0; j < cols; ++j)
            printf("%d\t ",m[i][j]);
        printf("\n");
        }
    return;
    }

void 
f(int **z)
    {
    printf("Here!\n");
    }

int
sum(int **m,int rows,int cols)
    {
    int total = 0;
    int i,j;
    
    for (i = 0; i < rows; ++i)
        {
        m[i] = malloc(sizeof(int) * cols);
        for (j = 0; j < cols; ++j)
            m[i][j] = 1;
        } 
    return total;
    }

int
main(int argc,char **argv)
    {
    int rows = 5,cols = 6;
    int **m;
    int i,j;

    m = malloc(sizeof(int *) * rows);
    
    for (i = 0; i < rows; ++i)
        {
        m[i] = malloc(sizeof(int) * cols);
        for (j = 0; j < cols; ++j)
            m[i][j] = 1;
        } 

    displayMatrix(m,rows,cols);

    return 0;
    }
