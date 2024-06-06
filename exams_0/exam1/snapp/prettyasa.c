#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int
square(int n)
    {
    int i = 0; 
    char *row = "01234";

    while(i < n)
        {
        printf("%d\n",i);
        printf("%d\n",row[i] - '0');
        ++i;
        }

    return 0; 
    }


int
triangle(int n)
    {
    int i,j;

    for (i = 0; i < n; ++i)
        {
        for (j = 0; j < n + 1; ++j)
            printf("|");
        printf(" ");
        }

    return 0;    
    }


int
fence(int n)
    {
    int i,j;

    for (i = 0; i < n; ++i)
        {
        for (j = 0; j < n; ++j)
            printf("|");
        printf("+");
        }
    
    return 0;
    }


int 
main(int argc,char **argv)
    {
    int n;
    
    printf("Size? ");
    scanf("%d",&n);
    
    square(n);
    triangle(n);
    fence(n);

    return 0;
    }
