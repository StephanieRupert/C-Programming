#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv)
    {
    int i,j;
    int rows;
    int columns;
    
    printf("Rows? ");
    scanf("%d",&rows);
    printf("Columns? ");
    scanf("%d",&columns);
    
    for (i = 0; i < rows + 2; ++i)
        {
        
        for (j = 0; j < columns + 2; ++j)
       
            if (i == 0 || i == rows + 1)
                printf("X");

            else if (j == 0 || j == columns + 1)
                printf("X");

            else
                printf(" ");

        printf("\n");
        
        }
    
    for (i = 0; i < rows + 2; ++i)        //hollow square, don't use int columns
        {
        
        for (j = 0; j < rows + 2; ++j)
       
            if (i == 0 || i == rows + 1)
                printf("X");

            else if (j == 0 || j == rows + 1)
                printf("X");

            else
                printf(" ");

        printf("\n");
        
        }
    
    for (i = 0; i < rows; ++i)        //Shape 1 at cs100/
        {
        for (j = 0; j < i + 1; ++j)     // j < sum; ++i for a square
            printf("X");
        printf("\n");
        }
     
    return 0;
    }
