#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int
main(int argc,char **argv)
    {
    int i;
    int size = argc -1;
    int *args = malloc(sizeof(int) * size);
    int total = 0;
    int totalWhile = 0;

    for (i = 0; i < size; ++i)
        {
        args[i] = atoi(argv[i+1]);
        }
    
    for (i = 0; i < size; ++i)
        {
        total += args[i];
        }
    
    int a = 0;
    while (a < size)
        {
        totalWhile += args[a];
        ++a;
        }
    
    printf("Via a for loop: the sum is %d\n",total);
    printf("Via a while loop: the sum is %d\n",totalWhile);

    return 0;
    }
