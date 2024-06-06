#include <stdio.h>
#include <stdlib.h>


int
main(int argc,char **argv)
    {
    int i,j;
    int rows;
    int columns;

    printf("What is the number of rows? ");
    scanf("%d",&rows);
    printf("What is the number of columns? ");
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

    return 0;
    }
