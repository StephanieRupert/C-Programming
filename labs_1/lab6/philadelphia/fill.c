#include <stdio.h>
#include <stdlib.h>
#include "scanner.h"


int **
create(int height,int width)
    {
    int i;
    int **matrix = malloc(sizeof(int *) * height);
    
    for (i = 0; i < height; ++i)
        matrix[i] = malloc(sizeof(int) * width);
    
    return matrix;
    }

int **
fill(FILE *fp,int **matrix,int height,int width)
    {
    int i,j;

    i = readInt(fp);
    j = readInt(fp);
    
    for (i = 0; i < height; ++i)
        {
        for (j = 0; j < width; ++j)
            matrix[i][j] = readInt(fp);
        }
    
    fclose(fp);
    
    return matrix;
    }

void
flip(int **matrix,int i,int j)
    {
    int x = matrix[i][j];

    if (x == 0)
        x = 1;
    
    else
        x = 0;
    
    matrix[i][j] = x;
    }

void
update(int **matrix,int height,int width,int i,int j)
    {
    int x = matrix[i][j];
    //i = height, j = width

    if (i != height - 1 && x != matrix[i + 1][j])
        {
        matrix[i + 1][j] = x;
        update(matrix,height,width,i + 1,j);
        }
    
    if (i != 0 && x != matrix[i - 1][j])
        {
        matrix[i - 1][j] = x;
        update(matrix,height,width,i - 1,j);
        }

    if (j != width - 1 && x != matrix[i][j + 1])
        {
        matrix[i][j + 1] = x;
        update(matrix,height,width,i,j + 1);
        }

    if (j != 0 && x != matrix[i][j - 1])
        {
        matrix[i][j - 1] = x;
        update(matrix,height,width,i,j - 1);
        }

    }

void 
display(int **matrix,int height,int width)
    {
    int i,j;

    for (i = 0; i < height; ++i)
        {
        for (j = 0; j < width; ++j)
            printf("%d ",matrix[i][j]);
        
        printf("\n");
        }
    
    printf("\n");
    }

int 
main(int argc,char **argv)
    {
    int height,width,i,j;
    int **matrix;
    int **x;

    FILE *fp = fopen(argv[1],"r");
    if (fp == 0)
        {
        fprintf(stderr,"File data could not be opened for reading\n");
        exit(1);
        }

    height = readInt(fp);
    width = readInt(fp);
    
    printf("The image has height = %d and width = %d\n",height,width);
    
    matrix = create(height,width);
    x = fill(fp,matrix,height,width);
    
    create(height,width);

    printf("Enter row: ");
    scanf("%d",&i);
    
    printf("Enter column: ");
    scanf("%d",&j);
    
    flip(matrix,i,j);
    update(matrix,height,width,i,j);
    
    display(x,height,width);

    fclose(fp);
    
    return 0;
    }
