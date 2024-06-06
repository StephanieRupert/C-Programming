//Stephanie Rupert
//July 29, 2015
//level0.c contains the functions from level0 

#include <stdio.h>
#include <stdlib.h>


int **
create(int height,int width)
    {
    int i;
    int **matrix = malloc(sizeof(int *) * height);

    for (i = 0; i < height; ++i)
        matrix[i] = malloc(sizeof(int) * width);

    return matrix;
    }

int
getheight(char **argv)
    {
    int height = atoi(argv[1]);
    return height;
    }

int
getwidth(char **argv)
    {
    int width = atoi(argv[2]);
    return width;
    }

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

void
display(int height,int width)
    {
    int i,j;

    printf("    ");
    for (i = 0; i < height; ++i)
        printf("%d ",i);
    for (j = 0; j < width; ++j)
        printf("\n %d ",j);
    
    //printf("\n\n");
    }

int
main(int argc,char **argv)
    {
    int height = getheight(argv);
    int width = getwidth(argv);
    
    create(height,width);
    
    placebombs(argv);
    
    display(height,width);
    return 0;
    }
    
