#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int 
main(int argc,char **argv)
    {
    int n;
    int rows;
    //int i,j;
    
    
    n = atoi(argv[1]);
    rows = 1;

    for (n = 0; n < rows + 2; ++n)          //first row
        {
        printf("*");
        }
    

    for (n = 0; n < rows + 2; ++n)          //last row
        {
        printf("*");
        }

    /*
    printf("Rows? "
    scanf("%d",&rows);

    for (i = 0; i < rows + 2; ++i)
        {

        for (j = 0; j < rows + 2; ++j)
            
            if (i == 0 || i == rows + 1)
                printf("*");

            else if (j == 0 || j == rows + 1)
                printf("*");

            else
                printf(" ");
            
        printf("\n");    
        }*/
    
    return 0;
    }
