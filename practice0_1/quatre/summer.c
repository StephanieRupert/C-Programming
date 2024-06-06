#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int
main(int argc,char **argv)
    {
    int *array;

    array = malloc(sizeof(*array) * 4);

    printf("The first integer? ");
    scanf("%d",&*(array)); 
    printf("The second integer? ");
    scanf("%d",&*(array + 1));
    printf("The third integer? ");
    scanf("%d",&*(array + 2));
    
    printf("The three integers are %d, %d, and %d\n",*(array),*(array + 1),*(array + 2));

    printf("The sum is %d\n",*(array) + *(array + 1) + *(array + 2));

    return 0;
    }
