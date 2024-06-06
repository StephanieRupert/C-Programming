#include <stdio.h>
#include <stdlib.h>



int **
create(int size)
    {
    int i;
    int **matrix = malloc(sizeof(int *) * size);

    for (i = 0; i < size; ++i)
        matrix[i] = malloc(sizeof(int) * size);

    return matrix;
    }

/*int **
fill(int **matrix,int size) 
    {
    int i,j;
    
    for (i = 0; i < size; ++i)
        {
        for (j = 0; j < size; ++j)
            matrix[i][j] = " ";
        }
    
    return matrix;
    }*/

void
display(int **matrix,int size)
    {
    int i,j;

    for (i = 0; i < size; ++i)
        {
        for (j = 0; j < size; ++j)
            printf("[ ]");
            printf("\n");   
        //printf("]");
        }
    }

int
main(int argc,char **argv)
    {
    int size;
    int **matrix;

    printf("Enter the size of the board: ");
    scanf("%d",&size);
   
    matrix = create(size);
    //fill(matrix,size);
    display(matrix,size);

    return 0;
    }
