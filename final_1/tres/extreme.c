#include <stdio.h>
#include <stdlib.h>


void
displayMatrix(int **matrix,int rows,int cols)
    {
    int i,j;

    printf("The matrix:\n");

    for (i = 0; i < rows; i++)
        {
        for (j = 0; j < cols; j++)
            printf("[%d]",matrix[i][j]);
        printf("\n");
        }
    }

int **
create(int height,int width)
    {
    int i;
    int **m = malloc(sizeof(int *) * height);

    for (i = 0; i < height; ++i)
        m[i] = malloc(sizeof(int) * width);

    return m;
    }

int **
fill(FILE *fp,int **m,int height,int width)
    {
    int i,j,x;

    for (i = 0; i < height; ++i)
        {
        for (j = 0; j < width; ++j)
            {
            fscanf(fp,"%d",&x);
            m[i][j] = x;
            }
        } 
    
    return m;
    }

void
smallest(int **m,int rows,int cols,int *minr,int *minc)
    {
    int r,c;
    *minr = 0;
    *minc = 0;
    
    for (r = 0; r < rows; ++r)
        for (c = 0; c < cols; ++c)
            {
            if (m[r][c] < m[*minr][*minc])
                {
                *minr = r;
                *minc = c;
                }
        } 
    }

int
main(int argc,char **argv)
    {
    FILE *fp = fopen(argv[1],"r");
    if (fp == 0)
        {
        fprintf(stderr,"File data could not be opened for reading\n");
        exit(1);
        }

    int **x;
    int r = 2;
    int c = 6;
    int minRow,minCol;

    int **m = create(r,c);
    x = fill(fp,m,r,c);

    smallest(x,r,c,&minRow,&minCol);

    displayMatrix(x,r,c);

    printf("The smallest number is at indices:\n    row %d, column %d",minRow,minCol);

    fclose(fp);

    return 0;
    }

